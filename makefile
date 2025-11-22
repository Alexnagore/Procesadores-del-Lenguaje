compilador: parser.tab.c lex.yy.o literal.o tablaDeSimbolos.o colaDeIdentificador.o
	gcc parser.tab.c lex.yy.o literal.o tablaDeSimbolos.o colaDeIdentificador.o -lm -lfl -o compilador

parser.tab.c parser.tab.h: parser.y literal.h nombresDeTipos.h tablaDeSimbolos.h colaDeIdentificador.h
	bison -d -v -t parser.y

lex.yy.o: scanner.l parser.tab.h literal.h nombresDeTipos.h tablaDeSimbolos.h
	flex scanner.l
	gcc -c lex.yy.c

literal.o: literal.c literal.h
	gcc -c literal.c

tablaDeSimbolos.o: tablaDeSimbolos.c tablaDeSimbolos.h
	gcc -c tablaDeSimbolos.c

colaDeIdentificador.o: colaDeIdentificador.c colaDeIdentificador.h
	gcc -c colaDeIdentificador.c

scanner: scannerBeta.l
	flex scannerBeta.l
	gcc lex.yy.c -lfl -o scanner

clean:
	rm -f *.tab.* lex.yy.c *.o compilador scanner output