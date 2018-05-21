TARGET = parser
LEX = lex
YACC = yacc
YACCFLAG = -y -d
GCC = gcc

.PHONY: all clean

all: $(TARGET)

$(TARGET): lex.yy.c y.tab.c symtab.c symtab.h 
	$(GCC) lex.yy.c y.tab.c symtab.c -o $@ -ll

lex.yy.c: scanner.l
	$(LEX) -o $@ $^

y.tab.c: parser.y
	$(YACC) $(YACCFLAG) $^ -o $@

clean:
	$(RM) $(TARGET) lex.yy.c y.tab.*
