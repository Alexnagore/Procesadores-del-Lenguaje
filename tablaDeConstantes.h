#ifndef FFF_TABLA_DE_CONSTANTES_H
#define FFF_TABLA_DE_CONSTANTES_H

#include <stdbool.h>

typedef struct celda {
	char * nombre;
	int valor;
	struct celda * sig;	
} Celda;

typedef Celda * TablaDeConstantes;

TablaDeConstantes nuevaTablaDeConstantes(void);
bool insertaConstante(TablaDeConstantes *, char *, int);
void imprimeTablaDeConstantes(TablaDeConstantes);

#endif

