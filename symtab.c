#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symtab.h"

int is_stack_empty()
{
	if(top == 0)
		return 1;
	else
		return 0;
}
void enter_block()
{
	blockcount = 0;
	argcount = 0;
	printf("entering block, next number 0 \n");
}
void count_arg()
{
	argcount++;
}
int get_argcount()
{
	return argcount;
}
void block_var_increase(char* name, char* type)
{
	variable_table[blockcount].name = name;
	variable_table[blockcount].type = type;
	variable_table[blockcount].pos = blockcount;
	
	printf("%s = %d", name, blockcount++);
	printf(", next number %d\n", blockcount);
}
void leave_block()
{
	printf("leaving block, symbol table entries: \n");
	for(int i = 0;i < blockcount;i++)
	{
		printf("<%s, %s, integer, %d>\n", variable_table[i].name, variable_table[i].type, variable_table[i].pos);
	}
	blockcount = 0;
}
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
	if (lookup(name) < 0)
	{
		int index = target_table->size;
		target_table->size++;
		target_table->table[index].name = strdup(name);
		target_table->table[index].type = strdup(type);
		if (!strcmp("bool_array", type))
		{
			target_table->table[index].i_val = atoi(val);
		}
		if (!strcmp("void", type))
			target_table->table[index].s_val = strdup(val);
		if (!strcmp("int_array", type))
			target_table->table[index].i_val = atoi(val);
		if (!strcmp("str_array", type))
			target_table->table[index].i_val = atoi(val);
		if (!strcmp("float_array", type))
			target_table->table[index].i_val = atoi(val);
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
void func_increase(char* name, char* type)
{
	func_table[func_count].name = name;
	func_table[func_count].type = type;
	func_count++;
}
void const_increase(char* name, char* value)
{
	const_table[const_count].name = name;
	const_table[const_count].value = value;
	const_count++;
}
char* get_const_val(char* name)
{
	for(int i = 0;i < const_count;i++)
	{
		if(!strcmp(const_table[i].name, name))
			return const_table[i].value;
	}
}
int lookup_const(char* name)
{
	for(int i = 0;i < const_count;i++)
	{
		if(!strcmp(const_table[i].name, name))
			return i;
	}
	return -1;
}
char* get_func_type(char* name)
{
	for(int i = 0;i < func_count;i++)
	{
		if(!strcmp(func_table[i].name, name))
			return func_table[i].type;
	}
}
int lookup_var(char* name)
{
	for(int i = 0;i < blockcount;i++)
	{
		if(!strcmp(variable_table[i].name, name))
			return i;
	}
	return -1;
}
int lookup(char* name)
{
	symbol_table target_table = symbol_table_stack[top];
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
		if (!strcmp("void", ans.table[i].type))
			printf("%s\t\t", ans.table[i].s_val);
		if (!strcmp("int_array", ans.table[i].type))
			printf("%d\t\t", ans.table[i].i_val);
		if (!strcmp("float_array", ans.table[i].type))
			printf("%d\t\t", ans.table[i].i_val);
		if (!strcmp("str_array", ans.table[i].type))
			printf("%d\t\t", ans.table[i].i_val);
		if (!strcmp("bool_array", ans.table[i].type))
		{
			printf("%d\t\t", ans.table[i].i_val);
		}
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
		case 3: printf("procedure\n"); break;
		}

	}
	pop_from_stack();
}

