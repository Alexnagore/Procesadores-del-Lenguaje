#ifndef TABLA_DE_SIMBOLOS_H
#define TABLA_DE_SIMBOLOS_H

#include <stdbool.h>
#include "literal.h"

typedef struct celda {
	char * nombre;
	LiteralT valor;
	struct celda * sig;	
} Celda;

typedef Celda * TablaDeSimbolos;

TablaDeSimbolos nuevaTablaDeSimbolos(void);
bool insertaSimbolo(TablaDeSimbolos *, char *, LiteralT);
int buscar_tipo_TS(TablaDeSimbolos, char *);
int buscar_indice_TS(TablaDeSimbolos, char *);
void imprimeTablaDeSimbolos(TablaDeSimbolos);

#endif

