%{
#define LIST     strcat(buf,yytext)
#define token(t) {LIST; printf("<%s>\n",t);}
#define tokenInteger(t,i) {LIST; printf("<%s:%d>\n",t,i);}
#define tokenString(t,s) {LIST; printf("<%s:%s>\n",t,s);}

#define MAX_LINE_LENG 256
#define MAX_TOKEN 10000
char* symbolTable[MAX_TOKEN];
int symbolCount = 0;
int linenum = 1;
char buf[MAX_LINE_LENG];
void insert(char* s);
void dump();
int lookUP(char* s);
%}
%x COMMENT
%x comment
variable [A-Za-Z]+([A-Za-z]|[0-9])*
%%
"("     {token("'('");}
")"	{token("')'");}
"{"	{token("'{'");}
"}"	{token("'}'");}
";"	{token("';'");}

"="	{token("'='");}
">"	{token("'>'");}

"fn"	{token("FN");}
"println"	{token("PRINTLN")}
"let"	{token("LET");}
"mut"	{token("MUT");}
"main"	{tokenString("id","main");insert("main");}

[A-Za-z]+([A-Za-z]|[0-9])* {tokenString("id", yytext);insert(yytext);}
[0-9]	{tokenInteger}
\"(\\.|[^"\\])*\"	{tokenString("string",yytext)}
"/*"	{printf("%d: ", linenum++);ECHO;BEGIN(COMMENT);}
<COMMENT>"*/"	{ECHO;BEGIN(INITIAL);printf("\n");}
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
//create();
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
        if(symbolTable[i] == s)
        {
            return i;
        }
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
