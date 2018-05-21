%{

#include <stdio.h>
#include <string.h>
#include "symtab.h"

#include "y.tab.h"

#define LIST     strcat(buf,yytext)
#define STR	strcat(strbuf,yytext)
#define token(t) {LIST; printf("<%s>\n",t);}
#define tokenInteger(t,i) {LIST; printf("<%s:%s>\n",t,i);}
#define tokenString(t,s) {LIST; printf("<%s:%s>\n",t,s);}

#define MAX_STR_LEN 10000
#define MAX_LINE_LENG 256
#define MAX_TOKEN 10000
#define ID_LEN 100
char* symbolTable[MAX_TOKEN];
char* ident;
char* tempstr;
int symbolCount = 0;
int linenum = 1;
char buf[MAX_LINE_LENG];
char strbuf[MAX_STR_LEN];

%}

%x COMMENT
%x comment
%x STRING
variable [A-Za-Z]+([A-Za-z]|[0-9])*
%%

"("     {token("'('"); return yytext[0];}
")"	{token("')'"); return yytext[0];}
"{"	{token("'{'"); return yytext[0]; create("test");}
"}"	{token("'}'"); return yytext[0];dump();}
";"	{token("';'"); return yytext[0];}
":"	{token("':'"); return yytext[0];}
","	{token("','"); return yytext[0];}
"["	{token("'['"); return yytext[0];}
"]"	{token("']'"); return yytext[0];}

"+"	{token("'+'"); return yytext[0];}
"-"	{token("'-'"); return yytext[0];}
"*"	{token("'*'"); return yytext[0];}
"/"	{token("'/'"); return yytext[0];}
"++"	{token("'++'"); return DOUBLEPLUS;}
"--"	{token("'--'"); return DOUBLEMINUS;}
"%"	{token("'%'"); return yytext[0];}

"=="	{token("'=='"); return EQUAL;}
"!="	{token("'!='"); return NOTEQUAL;}
">"	{token("'>'"); return yytext[0];}
"<"	{token("'<'"); return yytext[0];}
">="	{token("'>='"); return GREATEREQUAL;}
"<="	{token("'<='"); return LESSEQUAL;}
"->"	{token("'->'"); return RETTYPE;}

"&&"	{token("'&&'"); return AND;}
"||"	{token("'||'"); return OR;}
"!"	{token("'!'"); return yytext[0];}
"="	{token("'='"); return yytext[0];}
"+="	{token("'+='"); return PLUSEQUAL;}
"-="	{token("'-='"); return MINUSEQUAL;}
"*="	{token("'*='"); return TIMEEQUAL;}
"/="	{token("'/='"); return DIVIDEQUAL;}

"where"	{token("WHERE"); return WHERE;}
"use"	{token("USE"); return USE;}
"struct"	{token("STRUCT"); return STRUCT;}
"str"	{token("STR"); yylval.s = "str";return S;}
"static"	{token("STATIC"); return STATIC;}
"self"	{token("SELF"); return SELF;}
"pub"	{token("PUB"); return PUB;}
"match"	{token("MATCH"); return MATCH;}
"loop"	{token("LOOP"); return LOOP;}
"in"	{token("IN"); return IN;}
"for"	{token("FOR"); return FOR;}
"true"	{tokenString("boolean","TRUE"); yylval.s = 1; return BOOL_CONST;}
"false"	{tokenString("boolean","FALSE"); yylval.s = 0; return BOOL_CONST;}
"extern"	{token("EXTERN"); return EXTERN;}
"enum"	{token("ENUM"); return ENUM;}
"do"	{token("DO"); return DO;}
"continue"	{token("CONTINUE");return CONTINUE;}
"char"	{token("CHAR"); return CHAR;}
"break"	{token("BREAK"); return BREAK;}
"bool"	{token("BOOL");yylval.s = "bool"; return BOOL;}
"fn"	{token("FN"); return FN;}
"println"	{token("PRINTLN"); return PRINTLN;}
"print"	{token("PRINT"); return PRINT;}
"let"	{token("LET"); return LET;}
"mut"	{token("MUT"); return MUT;}
"main"	{tokenString("id","main"); yylval.s = "main"; return ID;}
"int"	{token("INT"); yylval.s = "int"; return INT;}
"float"	{token("FLOAT"); yylval.s = "float"; return FLOAT;}
"if"	{token("IF"); return IF;}
"while"	{token("WHILE"); return WHILE;}
"else"  {token("ELSE"); return ELSE;}
"return"    {token("RETURN"); return RETURN;}

[A-Za-z][A-Za-z0-9]* {ident = strdup(yytext);tokenString("id", yytext); yylval.s = strdup(yytext); return ID;}
[0-9]+	{tokenInteger("Integer",yytext); yylval.s = strdup(yytext); return INT_CONST;}
([-+]?([0-9]+\.[0-9]+)([eE][-+]?[0-9]+)?)	{tokenInteger("Real", yytext); yylval.s = strdup(yytext); return REAL_CONST;}

["]	{LIST;BEGIN(STRING);}
<STRING>[^"]	{LIST;STR;}
<STRING>["]["]	{LIST;yytext="\"";STR;}
<STRING>["]	{tokenString("string",strbuf); BEGIN(INITIAL); yylval.s = strdup(strbuf); strbuf[0]='\0';return STRING_CONST;}	

"/*"	{printf("%d: ", linenum++);ECHO;BEGIN(COMMENT);}
<COMMENT>"*/\n"	{ECHO;BEGIN(INITIAL);}
<COMMENT>\n	{
    		ECHO;
        	printf("%d: ", linenum++);
        	buf[0] = '\0';
                
		}
"//"	{printf("%d: ", linenum++);ECHO;BEGIN(comment);}
<comment>\n	{BEGIN(INITIAL);ECHO;}
\n      {
        LIST;
        printf("%d: %s", linenum++, buf);
        buf[0] = '\0';
        }

[ \t]*  {LIST;}

.       {
        LIST;
        printf("%d:%s\n", linenum+1, buf);
        printf("bad character:'%s'\n",yytext);
        exit(-1);
        }
%%
int yywrap(){return 1;}



