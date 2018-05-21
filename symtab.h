#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX_STACK_SIZE 200
#define MAX_SYMBOLTABLE_SIZE 10000

typedef struct symbol
{
	char* name;
	char* type;
	int const_or_variable;
	int i_val;
	int b_val;
	float f_val;
	char* s_val;
	struct symbol* next;
} symbol_entry;

typedef struct table
{
	symbol_entry table[MAX_SYMBOLTABLE_SIZE];
	char* scope;
	int size;
}symbol_table;

static int top = -1;
static int blocknum = 0;
static symbol_table symbol_table_stack[MAX_STACK_SIZE];

void push_to_stack(symbol_table table);
symbol_table pop_from_stack();
void create(char* scope);
void insert(char* name, char* type, char* val, int var_or_const);
int lookup(symbol_table target_table, char* name);
void dump();
void block_increase();

