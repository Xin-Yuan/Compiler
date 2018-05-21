%{

#define Trace(t)        printf(t)
#include <stdio.h>
#include <stdlib.h>
#include "symtab.h"

//#include <iostream>
//#include <vector>
//#include <string>
//#include "lex.yy.cpp"
//using namespace std;
typedef unsigned int bool; 
#define false 0
#define true 1
extern FILE * yyin;
int yylex();
%}

/* tokens */
%union {float f; int i; int b; char* s;}
%token SEMICOLON

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

%type <s> type
%type <s> type_op
%type <s> const_exp

%left OR
%left AND
%left '!'
%left '<' '>' GREATEREQUAL LESSEQUAL EQUAL NOTEQUAL
%left '+' '-'
%left '*' '/'
%left '^'
%nonassoc UMINUS UPLUS

%%

program:        {create("GLOBAL");}var_const_declare func_declare func_declare_op
                {
                Trace("Reducing to program\n");
		dump();
                }
                ;
var_const_declare:  
		var_declare  
		|const_declare  var_const_declare
		|array_declare var_const_declare
		|
		;
var_declare:	LET MUT ID type_op '=' const_exp ';' {if($4 == NULL)insert($3,"null",$6,1); else insert($3,$4,$6,1);} var_const_declare  
		|LET MUT ID type_op ';'  {insert($3,$4,"null",1);} var_const_declare 
		;
const_declare:	LET ID type_op '=' const_exp ';' {if($3 == NULL)insert($2,"null",$5, 0); else insert($2, $3, $5, 0);}var_const_declare 
		;
array_declare:	LET MUT ID '['type',' INT_CONST']'';' {char* type = strdup($5); strcat(type, " array");insert($3,"array", $5,1);}var_const_declare 
		;
type_op:	':' type {$$ = $2;}
		| {$$ = NULL;}
		;
type:	INT {$$ = $1;} | BOOL {$$ = $1;}| S {$$ = $1;}| FLOAT {$$ = $1;};

const_exp:	INT_CONST{$$ = $1;} | BOOL_CONST{$$ = $1;} | STRING_CONST{$$ = $1;} | REAL_CONST{$$ = $1;};

func_declare:	FN ID {create($2);} '(' arguments ')' return_type '{'  var_const_declare statements '}'{dump();};

func_declare_op:	FN ID '(' arguments ')' return_type '{' var_const_declare statements '}' 
			| func_declare_op
			|;

arguments:	ID ':' type {insert($1,$3,"null", 2);}| arguments ',' arguments |;

return_type:	RETTYPE type
		|
		;

statements:	statement statements |; 
statement:	simple | block | conditional | loop | fn_invok |;

simple:	ID '=' expression ';' 
	|ID '['int_expression']''=' expression ';'
	| PRINT expression ';'
	| PRINTLN expression';'
	| RETURN ';'
	| RETURN expression ';'
	;
expression:	ID
		| '-' expression %prec UMINUS
		| '(' expression ')'
		| const_exp
		| fn_invok
		| ID '[' int_expression ']'
		| expression '+' expression
		| expression '-' expression
		| expression '*' expression
		| expression '/' expression
		| expression '<' expression
		| expression '>' expression
		| expression EQUAL expression
		| expression LESSEQUAL expression
		| expression GREATEREQUAL expression
		| expression NOTEQUAL expression
		| '!' expression
		| expression AND expression
		| expression OR expression
		;
int_expression:	ID
		| '-' int_expression %prec UMINUS
		| '(' int_expression ')'
		| INT_CONST
		| fn_invok
		| ID '[' int_expression ']'
		| int_expression '+' int_expression
		| int_expression '-' int_expression
		| int_expression '*' int_expression
		| int_expression '/' int_expression
		| int_expression '<' int_expression
		| int_expression '>' int_expression
		| int_expression EQUAL int_expression
		| int_expression LESSEQUAL int_expression
		| int_expression GREATEREQUAL int_expression
		| int_expression NOTEQUAL int_expression
		| '!' int_expression
		| int_expression AND int_expression
		| int_expression OR int_expression;

block:	'{' { create("block"); block_increase();} var_const_declare statements '}'{dump();}
	;

conditional:	IF '(' bool_expression ')' block ELSE block
		| IF '(' bool_expression ')' block
		;

bool_expression:	expression;	
/*ID
			| '-' bool_expression %prec UMINUS
			| '(' bool_expression ')'
			| const_exp
			| fn_invok
			| ID '[' int_expression ']'
			| bool_expression '+' bool_expression
			| bool_expression '-' bool_expression
			| bool_expression '*' bool_expression
			| bool_expression '/' bool_expression
			| bool_expression '<' bool_expression
			| bool_expression '>' bool_expression
			| bool_expression EQUAL bool_expression
			| bool_expression LESSEQUAL bool_expression
			| bool_expression GREATEREQUAL bool_expression
			| bool_expression NOTEQUAL bool_expression
			| '!' bool_expression
			| bool_expression AND bool_expression
			| bool_expression OR bool_expression*/
			;

loop:	WHILE '(' bool_expression ')' block;

fn_invok:	ID '(' comma_seperate_expression ')';

comma_seperate_expression:	expression
				|comma_seperate_expression ',' comma_seperate_expression
				|
				;
/*statements:	statement statements
		|
		;
statement:	ID '=' expression ';'
		|ID '[' int_expression ']' '=' expression ';'
		|PRINT expression ';'
		|PRINTLN expression ';'
		|RETURN expression ';'
		;
expression:	'(' expression ')'	
		|operator
		|operator '='  expression	
		|expression '+' expression
		|expression '-' expression
		|expression '*' expression
		|expression '/' expression
		;
operator:	ID
		|BOOL_CONST
		|INT_CONST
		|REAL_CONST
		|STRING_CONST
		;
int_expression:	ID;

/*semi:           SEMICOLON
                {
                Trace("Reducing to semi\n");
                }
                ;*/
/*program:        var_const_declare func_declare
		|func_declare
                {
                Trace("Reducing to program\n");
                }
                ;
var_const_declare: 
		var_const_declare var_const_declare
		|var_declare ';'
		|const_declare
		|array_declare
		;
var_declare:	var_const_declare
		|LET MUT ID '=' STRING_CONST ';' var_const_declare 
		|LET MUT ID '=' INT_CONST ';' var_const_declare 
		|LET MUT ID '=' BOOL_CONST ';' var_const_declare 
		|LET MUT ID '=' REAL_CONST ';' var_const_declare 
		|LET MUT ID ';' var_const_declare 
		|LET MUT ID ':' FLOAT ';' var_const_declare 
		|LET MUT ID ':' BOOL ';' var_const_declare 
		|LET MUT ID ':' INT ';' var_const_declare 
		|LET MUT ID ':' BOOL '=' BOOL_CONST ';' var_const_declare 
		|LET MUT ID ':' FLOAT '=' REAL_CONST ';' var_const_declare
		|LET MUT ID ':' INT '=' INT_CONST ';' var_const_declare 
		|LET MUT ID '[' INT ',' INT_CONST ']' ';' var_const_declare 
		|LET MUT ID '[' FLOAT ',' INT_CONST ']' ';' var_const_declare 
		|LET MUT ID '[' BOOL ',' INT_CONST ']' ';' var_const_declare 
		;
const_declare:	var_const_declare
		|LET ID '=' BOOL_CONST ';' var_const_declare 
		|LET ID '=' INT_CONST ';' var_const_declare 
		|LET ID '=' REAL_CONST ';' var_const_declare 
		|LET ID '=' STRING_CONST ';' var_const_declare 
		|LET ID ':' BOOL '=' BOOL_CONST ';' var_const_declare 
		|LET ID ':' INT '=' INT_CONST ';'var_const_declare 
		|LET ID ':' FLOAT '=' REAL_CONST ';' var_const_declare 
		;


func_declare: 	FN ID '(' arguments ')' return_type func_body
		| func_declare
		;

arguments:	ID ':' INT ',' arguments
		|ID ':' FLOAT ',' arguments
		|ID ':' BOOL ',' arguments
		|ID ':' S ',' arguments
		|
		;

return_type:	RETTYPE INT
		| RETTYPE BOOL
		| RETTYPE FLOAT
		| RETTYPE S
		|
		;
func_body:	'{' var_const_declare statements '}'
		;

statements:	statement statements
		|
		;
statement:	ID '=' expression ';'
		|ID '[' int_expression ']' '=' expression ';'
		|PRINT expression ';'
		|PRINTLN expression ';'
		|RETURN expression ';'
		;
expression:	'(' expression ')'	
		|operator
		|operator '='  expression	
		|expression '+' expression
		|expression '-' expression
		|expression '*' expression
		|expression '/' expression
		;
operator:	ID
		|BOOL_CONST
		|INT_CONST
		|REAL_CONST
		|STRING_CONST
		;
int_expression:	ID;

/*semi:           SEMICOLON
                {
                Trace("Reducing to semi\n");
                }
                ;*/
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

    /* perform parsing */
    if (yyparse() == 1)                 /* parsing */
        yyerror("Parsing error !");     /* syntax error */
    return yyparse();
}


