#ifndef TABLA_DE_SIMBOLOS_H
#define TABLA_DE_SIMBOLOS_H

#include <stdbool.h>
#include "nombresDeTipos.h"

typedef struct celda {
	int indice;
	char * nombre;
	NombreDeTipoT tipo;
	struct celda * sig;	
} Celda;

typedef struct TablaDeSimbolos {
	Celda * simbolos;
	int sigPos;
} TablaDeSimbolos;

TablaDeSimbolos nuevaTablaDeSimbolos(void);
bool insertaSimbolo(TablaDeSimbolos *, char *, NombreDeTipoT);
void modificarTipoTS(TablaDeSimbolos *, int, int);
int newTemp(TablaDeSimbolos *);
int buscar_tipo_TS(TablaDeSimbolos, char *);
int buscar_indice_TS(TablaDeSimbolos, char *);
char * buscar_nombre_por_indice_TS(TablaDeSimbolos, int);
void imprimeTablaDeSimbolos(TablaDeSimbolos);

#endif

