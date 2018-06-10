#include "codegen.h"

void genProgramStart(){
    fprintf(fout, "%s", "class ");
    fprintf(fout, "%s", outname);
    fprintf(fout, "%s", "\n{\n");
}

// function
void genMainStart(){
    fprintf(fout, "%s", "method public static void main(java.lang.String[])\n");
    fprintf(fout, "%s", "max_stack 15\n");
    fprintf(fout, "%s", "max_locals 15\n{\n");
}
void genFuncStart(char* name, char* type, int count){
    fprintf(fout, "%s", "method public static ");
    fprintf(fout, "%s ", type);
    fprintf(fout, "%s", name);
    fprintf(fout, "%s", "(");
    for(int i = 0;i < count;i++)
    {
        if(i!=0)
            fprintf(fout, "%s", ",");
        fprintf(fout, "%s", "int");
    }
    fprintf(fout, "%s", ")\n");
    fprintf(fout, "%s", "max_stack 15\n");
    fprintf(fout, "%s", "max_locals 15\n{\n");
}
void genVoidFuncEnd(){
    fprintf(fout, "%s", "return\n}\n");
}
void genCompoundEnd(){
    fprintf(fout, "%s", "}\n");
}

void genCallFunc(char* name, char* type, int count){
    fprintf(fout, "%s", "invokestatic ");
    fprintf(fout, "%s ", type);
    fprintf(fout, "%s.%s", outname, name);
    fprintf(fout, "%s", "(");
    for(int i = 0;i < count;i++)
    {
        if(i!=0)
            fprintf(fout, "%s", ",");
        fprintf(fout, "%s", "int");
    }
    fprintf(fout, "%s", ")\n");
}

void genGlobalVar(char* name, char* value){
    fprintf(fout, "%s", "field static int ");
    fprintf(fout, "%s", name);
    fprintf(fout, "%s", " = ");
    fprintf(fout, "%s", value);
    fprintf(fout, "%s", "\n");
}
void genGlobalOnlyType(char* name, char* type)
{
    fprintf(fout, "%s", "field static ");
    fprintf(fout, "%s ", type);
    fprintf(fout, "%s", name);
}
void genGlobalVarNoInit(char* name){
    fprintf(fout, "%s", "field static int ");
    fprintf(fout, "%s", name);
    fprintf(fout, "%s", "\n");
}

void genLocalVar(int index,char* value){
    fprintf(fout, "%s", "sipush ");
    fprintf(fout, "%s", value);
    fprintf(fout, "%s", "\nistore ");
    fprintf(fout, "%d", index);
    fprintf(fout, "%s", "\n");
    
}


// print
void genPrintStart(){
    fprintf(fout, "%s", "getstatic java.io.PrintStream java.lang.System.out\n");
}
void genPrintStr(){
    fprintf(fout, "%s", "invokevirtual void java.io.PrintStream.print(java.lang.String)\n");
}
void genPrintInt(){
    fprintf(fout, "%s", "invokevirtual void java.io.PrintStream.print(int)\n");
}
void genPrintlnStr(){
    fprintf(fout, "%s", "invokevirtual void java.io.PrintStream.println(java.lang.String)\n");
}
void genPrintlnInt(){
    fprintf(fout, "%s", "invokevirtual void java.io.PrintStream.println(int)\n");
}

void genConstStr(char* s){
    char* str = "ldc \"";
    fprintf(fout, "%s", str);
    fprintf(fout, "%s", s);
    fprintf(fout, "%s", "\"\n");
}
void genConstInt(char* v){
    fprintf(fout, "%s", "sipush ");
    fprintf(fout, "%s\n", v);
}


// GET
void genGetGlobalVar(char* s){
    fprintf(fout, "%s", "getstatic int ");
    fprintf(fout, "%s", outname);
    fprintf(fout, "%s", ".");
    fprintf(fout, "%s", s);
    fprintf(fout, "%s", "\n");
}
void genGetLocalVar(int index){
    fprintf(fout, "%s", "iload ");
    fprintf(fout, "%d", index);
    fprintf(fout, "%s", "\n");
}

// SET
void genSetGlobalVar(char* s){
    fprintf(fout, "%s", "putstatic int ");
    fprintf(fout, "%s", outname);
    fprintf(fout, "%s", ".");
    fprintf(fout, "%s", s);
    fprintf(fout, "%s", "\n");
}
void genSetLocalVar(int index){
    fprintf(fout, "%s", "istore ");
    fprintf(fout, "%d", index);
    fprintf(fout, "%s", "\n");
}

void genOperator(char op){
	switch (op) {
		case '+':
            fprintf(fout, "%s", "iadd\n");
			break;
		case '-':
            fprintf(fout, "%s", "isub\n");
			break;
		case '*':
            fprintf(fout, "%s", "imul\n");
			break;
		case '/':
            fprintf(fout, "%s", "idiv\n");
			break;
		case '%':
            fprintf(fout, "%s", "irem\n");
			break;
		case '&':
            fprintf(fout, "%s", "iand\n");
			break;
		case '|':
            fprintf(fout, "%s", "ior\n");
			break;
		case '!':
            fprintf(fout, "%s", "ldc 1\n");
            fprintf(fout, "%s", "ixor\n");
			break;
		case '_':
            fprintf(fout, "%s", "ineg\n");
			break;
		default:
			break;
	}
}

void genCondOp(int op){
    fprintf(fout, "%s", "isub\n");
	int lb1 = labelcount++;
	int lb2 = labelcount++;
	switch (op) {
		case IFLT:
            fprintf(fout, "%s", "iflt");
			break;
		case IFGT:
            fprintf(fout, "%s", "ifgt");
			break;
		case IFLE:
            fprintf(fout, "%s", "ifle");
			break;
		case IFGE:
            fprintf(fout, "%s", "ifge");
			break;
		case IFEQ:
            fprintf(fout, "%s", "ifeq");
			break;
		case IFNE:
            fprintf(fout, "%s", "ifne");
			break;
		default:
            fprintf(fout, "%s", "ifeq");
			break;
	}
    fprintf(fout, "%s", " L");
    fprintf(fout, "%d\n", lb1);
    fprintf(fout, "%s", "iconst_0\n");
    fprintf(fout, "%s", "goto L");
    fprintf(fout, "%d\n", lb2);
    fprintf(fout, "%s", "nop\nL");
    fprintf(fout, "%d:\n", lb1);
    fprintf(fout, "%s", "iconst_1\n");
    fprintf(fout, "%s", "nop\nL");
    fprintf(fout, "%d:\n", lb2);
}

void genIfStart(){
    fprintf(fout, "%s", "ifeq L");
    fprintf(fout, "%d\n", labelcount++);
}
void genElse(){
    int temp = labelcount - 1;
    fprintf(fout, "%s", "goto L");
    fprintf(fout, "%d\n", labelcount++);
    fprintf(fout, "%s", "nop\nL");
    fprintf(fout, "%d:\n", temp);
}
void genIfEnd(){
    fprintf(fout, "%s", "nop\nL");
    fprintf(fout, "%d:\n", labelcount++);
}
void genIfElseEnd(){
    fprintf(fout, "%s", "nop\nL");
    fprintf(fout, "%d:\n", labelcount - 1);
    labelcount++;
}

void genWhileStart()
{
    whilestart = labelcount++;
    fprintf(fout, "%s", "nop\nL");
    fprintf(fout, "%d:\n", whilestart);
}
void genWhileCondOp(int op){
    fprintf(fout, "%s", "isub\n");
	int lb1 = labelcount++;
	int lb2 = labelcount++;
	switch (op) {
		case IFLT:
            fprintf(fout, "%s", "iflt");
			break;
		case IFGT:
            fprintf(fout, "%s", "ifgt");
			break;
		case IFLE:
            fprintf(fout, "%s", "ifle");
			break;
		case IFGE:
            fprintf(fout, "%s", "ifge");
			break;
		case IFEQ:
            fprintf(fout, "%s", "ifeq");
			break;
		case IFNE:
            fprintf(fout, "%s", "ifne");
			break;
		default:
            fprintf(fout, "%s", "ifeq");
			break;
	}
    fprintf(fout, "%s", " L");
    fprintf(fout, "%d\n", lb1);
    fprintf(fout, "%s", "iconst_0\n");
    fprintf(fout, "%s", "goto L");
    fprintf(fout, "%d\n", lb2);
    fprintf(fout, "%s", "nop\nL");
    fprintf(fout, "%d:\n", lb1);
    fprintf(fout, "%s", "iconst_1\n");
    fprintf(fout, "%s", "nop\nL");
    fprintf(fout, "%d:\n", lb2);
    fprintf(fout, "%s", "ifeq L");
    whilebreak = labelcount++;
    fprintf(fout, "%d\n", whilebreak);
    
}
void genWhileBody()
{
    whilebreak = labelcount++;
    fprintf(fout, "%s", "ifeq L");
    fprintf(fout, "%d\n", whilebreak);
    
}
void genWhileEnd()
{
    fprintf(fout, "%s", "goto L");
    fprintf(fout, "%d\n", whilestart);
    fprintf(fout, "%s", "nop\nL");
    fprintf(fout, "%d:\n", whilebreak);
}


void genReturn(){
    fprintf(fout, "%s", "return\n");
}
void geniReturn(){
    fprintf(fout, "%s", "ireturn\n");
}
