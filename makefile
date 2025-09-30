main: scanner archivo
	./a.out

scanner: scanner.l
	flex scanner.l

archivo: lex.yy.c
	gcc -lfl lex.yy.c
