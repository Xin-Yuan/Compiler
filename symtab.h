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

typedef struct variable
{
	char* name;
	char* type;
	int pos;
}variable_entry;
typedef struct func
{
	char* name;
	char* type;
}func_entry;
typedef struct constant
{
	char* name;
	char* value;
}const_entry;

static const_entry const_table[MAX_SYMBOLTABLE_SIZE];
static func_entry func_table[MAX_SYMBOLTABLE_SIZE];
static variable_entry variable_table[MAX_SYMBOLTABLE_SIZE];

static int top = -1;
static int func_count = 0;
static int const_count = 0;
static int blocknum = 0;
static int blockcount = 0;
static int argcount = 0;
static symbol_table symbol_table_stack[MAX_STACK_SIZE];

void push_to_stack(symbol_table table);
symbol_table pop_from_stack();
void create(char* scope);
void insert(char* name, char* type, char* val, int var_or_const);
int lookup(char* name);
void dump();
void block_increase();
void func_increase(char* name, char* type);
void const_increase(char* name, char* value);
int is_stack_empty();
int lookup_var(char* name);
int lookup_const(char* name);
char* get_func_type(char* name);
char* get_const_val(char* name);

