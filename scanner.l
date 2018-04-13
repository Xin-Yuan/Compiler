%{
#define LIST     strcat(buf,yytext)
#define token(t) {LIST; printf("<%s>\n",t);}
#define tokenInteger(t,i) {LIST; printf("<%s:%d>\n",t,i);}
#define tokenString(t,s) {LIST; printf("<%s:%s>\n",t,s);}

#define MAX_LINE_LENG 256

int linenum = 1;
char buf[MAX_LINE_LENG];

%}
%x COMMENT
%x comment
%%
"("     {token("'('");}
")"	{token("')'");}
"{"	{token("'{'");}
"}"	{token("'}'");}
";"	{token("';'");}

"fn"	{token("FN");}
"println"	{token("PRINTLN")}
"main"	{tokenString("id","main");}

\"(\\.|[^"\\])*\"	{tokenString("string",yytext)}
"/*"	{BEGIN(COMMENT);}
"*/"	{BEGIN(INITIAL);}
<COMMENT>\n	{
		LIST;
        	printf("%d: %s", linenum++, buf);
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

