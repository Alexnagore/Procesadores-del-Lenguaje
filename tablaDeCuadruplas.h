#ifndef TABLA_DE_CUADRUPLAS_H
#define TABLA_DE_CUADRUPLAS_H

#include <stdio.h>
#include <stdlib.h>

typedef struct tipoCuadrupla{
	char * operador;
    char * operando1;
    char * operando2;
    char * resultado;
} tipoCuadrupla;

typedef struct tablaDeCuadruplas{
    tipoCuadrupla cuadruplas[100];
    int nextQuad;
} tablaDeCuadruplas;

tablaDeCuadruplas nuevaTablaDeCuadruplas();
void gen(char * operador, char * operando1, char * operando2, char * resultado);
void backpatch(int lista[], int longitud, int resultado);
void imprimirTablaDeCuadruplas();

#endif
