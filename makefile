compilador: parser.tab.c lex.yy.o literal.o literal.h nombresDeTipos.h
	gcc parser.tab.c lex.yy.o literal.o -lm -lfl
	mv a.out compilador

parser.tab.c parser.tah.h: parser.y literal.h nombresDeTipos.h tablaDeConstantes.h
	bison -d -v -t parser.y

lex.yy.o: scanner.l parser.tab.h literal.h nombresDeTipos.h tablaDeConstantes.h
	flex scanner.l
	gcc -c lex.yy.c -lm -lfl

literal.o: literal.c
	gcc -c literal.c

tablaDeConstantes.o: tablaDeConstantes.c
	gcc -c tablaDeConstantes.c

scanner: scannerBeta.l
	flex scannerBeta.l
	gcc lex.yy.c -lfl
	mv a.out scanner

clean:
	rm *.tab.* lex.yy.c *.o
