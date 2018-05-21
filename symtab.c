#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symtab.h"


void push_to_stack(symbol_table table)
{
	top++;
	symbol_table_stack[top] = table;
}
symbol_table pop_from_stack()
{
	symbol_table ans = symbol_table_stack[top];
	top--;
	return ans;
}
void create(char* scope)
{
	symbol_table  ans;
	ans.size = 0;
	ans.scope = strdup(scope);
	push_to_stack(ans);
}
void block_increase()
{
	blocknum++;
}
void insert(char* name, char* type, char* val, int var_or_const)
{
	symbol_table* target_table = &symbol_table_stack[top];
	if (lookup(*target_table, name) < 0)
	{
		int index = target_table->size;
		target_table->size++;
		target_table->table[index].name = strdup(name);
		target_table->table[index].type = strdup(type);
		if (!strcmp("null", type))
			target_table->table[index].s_val = strdup(val);
		if (!strcmp("array", type))
			target_table->table[index].s_val = strdup(val);
		if (!strcmp("int", type))
			target_table->table[index].i_val = atoi(val);
		if (!strcmp("float", type))
			target_table->table[index].f_val = atof(val);
		if (!strcmp("bool", type))
		{
			if (!strcmp("true", val))
				target_table->table[index].b_val = 1;
			else
				target_table->table[index].b_val = 0;
		}
		if (!strcmp("str", type))
			target_table->table[index].s_val = strdup(val);
		target_table->table[index].const_or_variable = var_or_const;
	}
}
int lookup(symbol_table target_table, char* name)
{
	for (int i = 0; i < target_table.size; i++)
	{
		if (!strcmp(target_table.table[i].name, name))
			return i;
	}
	return -1;
}
void dump()
{
	symbol_table ans = symbol_table_stack[top];
	if (!strcmp(ans.scope, "block"))
		printf("%s %d: \n", ans.scope, blocknum);
	else
		printf("%s : \n", ans.scope);
	printf("ID\t\tValue\t\tType\t\tConst_or_Variable\n");
	printf("------------------------------------------------------\n");
	for (int i = 0; i < ans.size; i++)
	{
		printf("%s\t\t", ans.table[i].name);
		if (!strcmp("null", ans.table[i].type))
			printf("%s\t\t", ans.table[i].s_val);
		if (!strcmp("array", ans.table[i].type))
			printf("%s\t\t", ans.table[i].s_val);
		if (!strcmp("str", ans.table[i].type))
			printf("%s\t\t", ans.table[i].s_val);
		if (!strcmp("bool", ans.table[i].type))
		{
			if (ans.table[i].b_val == 1)
				printf("true\t\t");
			else
				printf("false\t\t");
		}
		if (!strcmp("float", ans.table[i].type))
			printf("%.4f\t\t", ans.table[i].f_val);
		if (!strcmp("int", ans.table[i].type))
			printf("%d\t\t", ans.table[i].i_val);
		printf("%s\t\t", ans.table[i].type);
		switch (ans.table[i].const_or_variable)
		{
		case 0: printf("constant\n"); break;
		case 1: printf("variable\n"); break;
		case 2: printf("parameter\n"); break;
		}

	}
	pop_from_stack();
}
