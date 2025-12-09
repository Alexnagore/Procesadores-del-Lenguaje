#ifndef TABLA_DE_CUADRUPLAS_H
#define TABLA_DE_CUADRUPLAS_H

#include <stdio.h>
#include <stdlib.h>
#include "tablaDeSimbolos.h"

typedef enum operadores{
    NULO = -1,
    INT_TO_REAL = 0,
    SUMA_ENTERO = 1,
    RESTA_ENTERO = 2,
    MULT_ENTERO = 3,
    DIV_ENTERO = 4,
    SUMA_REAL = 5,
    RESTA_REAL = 6,
    MULT_REAL = 7,
    DIV_REAL = 8,
    MODULO = 9,
    COCIENTE = 10,
    ASIGNACION_TC = 11,
    NEG_ENTERO = 14,
    NEG_REAL = 15,
    GOTO = 16,
    SALTO = 17,
    SIGNO_MAYOR_OPERADOR = 18,
    SIGNO_MENOR_OPERADOR = 19,
    SIGNO_IGUAL_OPERADOR = 20,
    SIGNO_MAYOR_IGUAL_OPERADOR = 21,
    SIGNO_MENOR_IGUAL_OPERADOR = 22,
    SIGNO_DISTINTO_OPERADOR = 23,
    VERDADERO = 24,
    FALSO = 25
    INPUT = 26,
    OUTPUT = 27,
    INPUTOUTPUT = 28
} Operadores;

typedef struct tipoCuadrupla{
    int operador;
    int operando1;
    int operando2;
    int resultado;
} TipoCuadrupla;

typedef struct tablaDeCuadruplas{
    TipoCuadrupla cuadruplas[100];
    int nextQuad;
} TablaDeCuadruplas;


TablaDeCuadruplas nuevaTablaDeCuadruplas();
void gen(TablaDeCuadruplas * tabla, int operador, int operando1, int operando2, int resultado);
void backpatch(TablaDeCuadruplas * tabla, int lista[], int longitud, int resultado);
void imprimirTablaDeCuadruplas(TablaDeCuadruplas * tabla);
int makelist(TablaDeCuadruplas * tabla, int index); 
void merge(int lista1[], int len1, int lista2[], int len2, int resultado[]);
void copiaListas(int destino[], int origen[], int longitud);
void imprimirOutputFinal(TablaDeCuadruplas * tabla, TablaDeSimbolos * tablaSimbolos);

#endif