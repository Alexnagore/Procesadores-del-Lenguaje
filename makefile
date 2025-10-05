run: scanner archivo
ifeq ($(FILE),)
	@echo "Ejecutando sin archivo (modo interactivo)..."
	./a.out
else
	@echo "Ejecutando con archivo: $(FILE)"
	./a.out $(FILE)
endif

scanner: scanner.l
	flex scanner.l

archivo: lex.yy.c
	gcc -lfl lex.yy.c

clean:
	rm -f lex.yy.c a.out