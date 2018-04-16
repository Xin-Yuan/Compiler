%{
#include <stdio.h>
#include <string.h>
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
void insert(char* s);
void dump();
int lookUP(char* s);
%}
%x COMMENT
%x comment
%x STRING
variable [A-Za-Z]+([A-Za-z]|[0-9])*
%%
"("     {token("'('");}
")"	{token("')'");}
"{"	{token("'{'");}
"}"	{token("'}'");}
";"	{token("';'");}
":"	{token("':'");}
","	{token("','");}
"["	{token("'['");}
"]"	{token("']'");}

"+"	{token("'+'");}
"-"	{token("'-'");}
"*"	{token("'*'");}
"/"	{token("'/'");}
"++"	{token("'++'");}
"--"	{token("'--'");}
"%"	{token("'%'");}

"=="	{token("'=='");}
"!="	{token("'!='");}
">"	{token("'>'");}
"<"	{token("'<'");}
">="	{token("'>='");}
"<="	{token("'<='");}

"&&"	{token("'&&'");}
"||"	{token("'||'");}
"!"	{token("'!'");}
"="	{token("'='");}
"+="	{token("'+='");}
"-="	{token("'-='");}
"*="	{token("'*='");}
"/="	{token("'/='");}

"where"	{token("WHERE");}
"use"	{token("USE");}
"struct"	{token("STRUCT");}
"str"	{token("STR");}
"static"	{token("STATIC");}
"self"	{token("SELF");}
"pub"	{token("PUB");}
"match"	{token("MATCH");}
"loop"	{token("LOOP");}
"in"	{token("IN");}
"for"	{token("FOR");}
"false"	{token("FALSE");}
"exturn"	{token("EXTERN");}
"enum"	{token("ENUM");}
"do"	{token("DO");}
"continue"	{token("CONTINUE");}
"char"	{token("CHAR");}
"break"	{token("BREAK");}
"bool"	{token("BOOL");}
"fn"	{token("FN");}
"println"	{token("PRINTLN")}
"print"	{token("PRINT");}
"let"	{token("LET");}
"mut"	{token("MUT");}
"main"	{tokenString("id","main");insert("main");}
"int"	{token("INT");}
"float"	{token("FLOAT");}
"if"	{token("IF");}
"while"	{token("WHILE");}
"else"  {token("ELSE");}
"return"    {token("RETURN");}

[A-Za-z][A-Za-z0-9]* {ident = strdup(yytext);insert(ident);tokenString("id", yytext);}
[0-9]+	{tokenInteger("Integer",yytext);}
(([0-9]+)|([0-9]*\.[0-9]+)([eE][-+]?[0-9]+)?)	{tokenInteger("Real number", yytext);}

["]	{LIST;BEGIN(STRING);}
<STRING>[^"]	{LIST;STR;}
<STRING>["]["]	{LIST;yytext="\"";STR;}
<STRING>["]	{tokenString("string",strbuf);strbuf[0]='\0';BEGIN(INITIAL);}	
 /*\"(\\.|[^"\\])*\"	{tempstr = malloc((yyleng-2)*sizeof(char));memcpy(tempstr,yytext+1,yyleng-2);tokenString("string",tempstr);}*/
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

int main(int argc, char *argv[]) {
/*
* call yylex to use the generated lexer
*/
yylex();
/*
* make sure everything was printed
*/
fflush(yyout);
printf("\nSymbol Table: \n");
dump(); 	
exit(0);
}

int lookUp(char* s)
{
    for(int i = 0;i<MAX_TOKEN;i++)
    {
        if(symbolTable[i]!=NULL)
	{
            if(!strcmp(symbolTable[i],s))
            {
                return i;
            }
	}
        else
            break;
    }
    return -1;
}

void insert(char* s)
{
    if(symbolCount<MAX_TOKEN)
    {
        if(lookUp(s)!=-1)
        {
           
        }
        else
          symbolTable[symbolCount++] = s;
    }
    else
        printf("Error! Symbol Table is full");
}
void dump()
{
    for(int i = 0;i < symbolCount;i++)
    {
        printf("%s\n", symbolTable[i]);
    }
}

