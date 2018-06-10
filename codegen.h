#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern char* outname;
extern FILE* fout;

static int whilestart;
static int whilebreak;
static int labelcount = 1;
enum condition{
	IFLT, IFGT, IFLE, IFGE, IFEQ, IFNE
};

void genProgramStart();

void genMainStart();
void genFuncStart(char* name, char* type, int count);
void genVoidFuncEnd();
void genCompoundEnd();
void genCallFunc(char* name, char* type, int count);

void genGlobalVar(char* name,char* value);
void genGlobalOnlyType(char* name, char* type);
void genGlobalVarNoInit(char* name);

void genLocalVar(int index,char* value);


void genPrintStart();
void genPrintStr();
void genPrintInt();
void genPrintlnStr();
void genPrintlnInt();


void genConstStr(char* s);
void genConstInt(char* v);
void genGetGlobalVar(char* s);
void genGetLocalVar(int index);

void genSetGlobalVar(char* s);
void genSetLocalVar(int index);

void genOperator(char op);

void genCondOp(int op);

void genIfStart();
void genElse();
void genIfEnd();
void genIfElseEnd();

void genWhileStart();
void genWhileCondOp(int op);
void genWhileBody();
void genWhileEnd();

void genReturn();
void geniReturn();

