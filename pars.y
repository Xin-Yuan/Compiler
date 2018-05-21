%{
	#include <stdio.h>
	#include <stdlib.h>

	#define Trace(t)
	int Opt_P = 1;
%}

%token BOOL BREAK CHAR CONTINUE DO ELSE ENUM EXTERN FALSE FLOAT FOR FN IF IN INT LET LOOP MATCH MUT PRINT PRINTLN PUB RETURN SELF STATIC STR STRUCT TRUE USE WHERE WHILE
%token L_OP LE_OP GE_OP G_OP EQ_OP NE_OP AND_OP OR_OP ADD_ASS SUB_ASS MUL_ASS DIV_ASS INC_OP DEC_OP TDEF
%token <intval> INTEGER BOOLEAN
%token <dval> REAL 
%token <str> STRING
%token <str> ID
%left '+' '-'
%left '*' '/'
%left UMINUS
%union {
 double dval;
 int intval;
 char* str;
}
%start Start

%%
Start: 
Program
;

/*
*program -> zero or more variable and constant declaration
*	    one or more function declartion
*/
Program:
VarConstDeclar FnDeclar
|FnDeclar
;

/*
*VarConstDeclar -> zero or more variable and constant declaration
*/
VarConstDeclar:
| VarDeclar ';'
| ConstDeclar ';'
| ArrayDeclar ';'
| VarConstDeclar VarConstDeclar
|
;

ConstDeclar:
LET ID TypeDefOp '=' ConstExp
;

VarDeclar:
LET MUT ID TypeDefOp '=' ConstExp
;

ArrayDeclar:
LET MUT ID '[' Type ',' ConstExp ']' ';'
;


TypeDefOp:
':' Type
|
;

Type:
INT
| BOOL
| STR
| FLOAT
;

ConstExp:
INTEGER
| BOOLEAN
| STRING
| REAL
;

FnDeclar:
FN ID '(' FormalArgs ')' ReturnType
'{' VarConstDeclar Statements '}'
;

Statements:
Statements
| Simple
| Block
| Conditional
| Loop
| FnInvocation
|
;

Simple:
ID '=' Express
| ID '[' IntExpress ']' '=' Express
| PRINT Express
| PRINTLN Express
| RETURN
| RETURN Express
|
;

Express:
Expr ';'
;

Expr:
ID
| '-' Express
| '(' Expr ')'
| ConstExp
| FnInvocation
| ID '[' IntExpress ']' 
| Expr '+' Expr
| Expr '-' Expr
| Expr '*' Expr
| Expr '/' Expr
| Expr L_OP Expr
| Expr LE_OP Expr
| Expr GE_OP Expr
| Expr G_OP Expr
| Expr EQ_OP Expr
| Expr NE_OP Expr
| '!' Expr
| Expr AND_OP Expr
| Expr OR_OP Expr   
;

IntExpress:
;

Block:
;

Conditional:
;

Loop:
;

FnInvocation:
ID '(' CommaSeparateExpress ')'
;

CommaSeparateExpress:
Expr
| CommaSeparateExpress ',' CommaSeparateExpress
;

FormalArgs:
ID ':' Type
| FormalArgs ',' FormalArgs
;

ReturnType:
TDEF Type
|
;
%%
extern FILE* yyin;
int yyerror(char* msg)
{
    fprintf(stderr, "%s\n", msg);
}
int main(int argc, char* argv[])
{
FILE *fh;
	//create();
	if(argc == 2 && (fh = fopen(argv[1], "r")))
		yyin = fh;
 yyparse();
 return 0;
}
