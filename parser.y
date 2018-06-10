%{

#define Trace(t)        printf(t)
#include <stdio.h>
#include <stdlib.h>
#include "symtab.h"
#include "codegen.h"
char* outname;
//strcat(outname, ".jasm");
FILE* fout;
extern FILE * yyin;
int yylex();
int var_index;
int const_index;
int variable_declare;
int const_flag;
int parameter_count;
int is_string;
%}

/* union types */
%union {float f; int i; int b; char* s;}
%token SEMICOLON

/* tokens */
%token DOUBLEPLUS
%token DOUBLEMINUS
%token EQUAL
%token NOTEQUAL
%token GREATEREQUAL
%token LESSEQUAL
%token AND
%token OR
%token PLUSEQUAL
%token MINUSEQUAL
%token TIMEEQUAL
%token DIVIDEQUAL
%token WHERE
%token USE
%token STRUCT
%token <s>S
%token STATIC
%token SELF
%token PUB
%token MATCH
%token LOOP
%token IN
%token FOR

%token EXTERN
%token ENUM
%token DO
%token CONTINUE
%token CHAR
%token BREAK
%token <s>BOOL
%token FN
%token PRINTLN
%token PRINT
%token LET
%token MUT
%token <s> ID
%token <s>INT
%token <s>FLOAT
%token IF
%token WHILE
%token ELSE
%token RETURN
%token <s> BOOL_CONST
%token <s> INT_CONST
%token <s> REAL_CONST
%token <s> STRING_CONST
%token RETTYPE

/* type for nonterminals */
%type <s> return_type
%type <s> type
%type <s> type_op
%type <s> const_exp

/* precedences */
%left OR
%left AND
%left '!'
%left '<' '>' GREATEREQUAL LESSEQUAL EQUAL NOTEQUAL
%left '+' '-'
%left '*' '/'
%left '^'
%nonassoc UMINUS UPLUS

%start program

%%
/* begin program */
program:        {create("GLOBAL"); genProgramStart();}var_const_declare func_declare func_declare_op
                {
                Trace("Reducing to program\n");
		dump();
				genCompoundEnd();
                }
                ;
/* grammar of variable and constants declare */
var_const_declare:  
		var_declare  
		|const_declare  var_const_declare
		|array_declare var_const_declare
		|
		;
var_declare: LET MUT ID type_op '=' {variable_declare = 1;} const_exp ';' 
		{if($4 == NULL)
			{insert($3,"int",$7,1); 
			if(is_stack_empty())genGlobalVar($3,$7);
			else
			{
				block_var_increase($3, "variable");
				var_index = lookup_var($3);
				genLocalVar(var_index, $7);
			}
			} 
		else {insert($3,$4,$7,1); if(is_stack_empty())genGlobalVar($3,$7);
			else
			{
				block_var_increase($3, "variable");
				var_index = lookup_var($3);
				genLocalVar(var_index, $7);
			}}Trace("Reducing to variable declare\n");} var_const_declare  
		|LET MUT ID type_op ';'  
			{if($4 != NULL) 
			{insert($3,$4,"null",1); 
			if(is_stack_empty())genGlobalVarNoInit($3);
			else
				block_var_increase($3, "variable");
			}
			else 
			{
				insert($3,"int", "null", 1);
				if(is_stack_empty())genGlobalVarNoInit($3);
				else{
				block_var_increase($3, "variable");
				}
			}
			Trace("Reducing to variable declare\n");} var_const_declare 
		;
const_declare:	LET ID type_op '=' {const_flag = 1;} const_exp ';' { if($3 == NULL){insert($2,"null",$6, 0); const_increase($2, $6);}else {insert($2, $3, $6, 0); const_increase($2, $6);}Trace("Reducing to constant declare\n");}var_const_declare 
		;
array_declare:	LET MUT ID '['type',' INT_CONST']'';' {char* type = strdup($5); strcat(type, "_array");insert($3,type, $7,1);Trace("Reducing to array declare\n");}var_const_declare
		| LET MUT ID '['type',' INT_CONST']''=' const_exp';'{char* type = strdup($5); strcat(type, "_array");insert($3,type, $7,1);Trace("Reducing to array declare\n");}var_const_declare
		;
type_op:	':' type {$$ = $2;}
		| {$$ = NULL;}
		;
type:	INT {$$ = $1;} | BOOL {$$ = $1;}| S {$$ = $1;}| FLOAT {$$ = $1;};

const_exp:	INT_CONST{$$ = $1;  if(!(variable_declare||const_flag))genConstInt($1);else {variable_declare = 0; const_flag = 0;}}| BOOL_CONST{$$ = $1; if(!strcmp($1,"true"))fprintf(fout, "%s\n", "iconst_1");else fprintf(fout, "%s\n", "iconst_0"); } | STRING_CONST{$$ = $1; genConstStr($1); is_string = 1;} | REAL_CONST{$$ = $1;};

/* grammar of function declare */
func_declare:	FN ID {enter_block();} '(' arguments ')' return_type 
			{if($7 == NULL)
			{
				func_increase($2, "void");
				insert($2,"void","-", 3);
				int arg = get_argcount();
				if(!strcmp($2, "main"))
					genMainStart();
				else
				genFuncStart($2,"void",arg);
			}else 
			{	
				func_increase($2, "int");
				insert($2, $7, "-", 3);
				int arg = get_argcount();
				genFuncStart($2,"int",arg);
			}create($2); Trace("Reducing to function declare\n");}'{'  var_const_declare statements '}'{Trace("Reducing to function body\n");dump(); leave_block();if($7!=NULL){geniReturn();}else {genReturn();}genCompoundEnd();} func_declare_op;

func_declare_op:	FN ID {enter_block();} '(' arguments ')' return_type 
			{if($7 == NULL)
			{
				func_increase($2, "void");
				insert($2,"void","-", 3);
				int arg = get_argcount();
				if(!strcmp($2, "main"))
					genMainStart();
				else
				genFuncStart($2,"void",arg);
			}
			else
			{
				func_increase($2, "int");
				insert($2, $7, "-", 3);
				int arg = get_argcount();
				genFuncStart($2,"int",arg);
			}create($2);Trace("Reducing to function declare\n");}'{' var_const_declare statements '}' {Trace("Reducing to function body\n");dump(); leave_block();if($7!=NULL){geniReturn();}else {genReturn();}genCompoundEnd();}
			| func_declare_op
			|;

arguments:	ID ':' type {block_var_increase($1,"arguments");insert($1,$3,"null", 2); count_arg();}| arguments ',' arguments |;

return_type:	RETTYPE type {$$ = $2;}
		| {$$ = NULL;}
		;

/* grammar of statement */
statements:	statement statements |; 
statement:	simple {Trace("Reducing to simple statement\n");}| block {Trace("Reducing to block statement\n");} | conditional {Trace("Reducing to conditional statement\n");}| loop {Trace("Reducing to loop statement\n");}| fn_invok {Trace("Reducing to function invoke statement\n");}|;

simple:	ID '=' expression ';' {var_index = lookup_var($1); if(var_index == -1)genSetGlobalVar($1); else genSetLocalVar(var_index);} 
	|ID '['expression']''=' expression ';'
	|PRINT {genPrintStart();} expression ';' {if(is_string)genPrintStr();else genPrintInt(); is_string = 0;}
	|PRINTLN {genPrintStart();} expression';' {if(is_string)genPrintlnStr();else genPrintlnInt(); is_string = 0;}
	| RETURN ';'
	| RETURN expression ';'
	;
expression:	ID	{ var_index = lookup_var($1); const_index = lookup_const($1); if(var_index != -1)genGetLocalVar(var_index);else if (const_index!=-1)genConstInt(get_const_val($1)); else genGetGlobalVar($1);}
		| '-' expression %prec UMINUS {genOperator('_');}
		| '(' expression ')'
		| const_exp
		| fn_invok
		| ID '[' expression ']'
		| expression '+' expression {genOperator('+');}
		| expression '-' expression {genOperator('-');}
		| expression '*' expression {genOperator('*');}
		| expression '/' expression {genOperator('/');}
		| expression '%' expression {genOperator('%');}
		| expression '<' expression {genCondOp(IFLT);}
		| expression '>' expression {genCondOp(IFGT);}
		| expression EQUAL expression {genCondOp(IFEQ);}
		| expression LESSEQUAL expression {genCondOp(IFLE);}
		| expression GREATEREQUAL expression {genCondOp(IFGE);}
		| expression NOTEQUAL expression {genCondOp(IFNE);}
		| '!' expression {genOperator('!');}
		| expression AND expression {genOperator('&');}
		| expression OR expression {genOperator('!');}
		;


block:	'{' var_const_declare statements '}'{Trace("Reducing to block statement\n");}
	;

conditional:	IF '(' expression ')' {genIfStart();}block {genElse();}ELSE block {genIfElseEnd();}
		| IF '(' expression ')' {genIfStart();}block {genIfEnd();}
		;


loop:	WHILE {genWhileStart();}'(' expression ')' {genWhileBody();}block{genWhileEnd();};

fn_invok:	ID '(' comma_seperate_expression ')' {genCallFunc($1, get_func_type($1), parameter_count); parameter_count = 0;};

comma_seperate_expression:	expression {parameter_count++;}
				|comma_seperate_expression ',' comma_seperate_expression
				|
				;
%%


int yyerror(char *msg)
{
    fprintf(stderr, "%s\n", msg);
}

int main(int argc, char* argv[])
{
   
    /* open the source program file */
    if (argc != 2) {
        printf ("Usage: sc filename\n");
        exit(1);
    }
    yyin = fopen(argv[1], "r");         /* open input file */
	outname = argv[1]; outname = strtok(outname, "."); char* filename = strdup(outname); strcat(filename, ".jasm"); fout = fopen(filename, "w+t");
    /* perform parsing */
    if (yyparse() == 1)                 /* parsing */
        yyerror("Parsing error !");     /* syntax error */
    //return yyparse();
}



