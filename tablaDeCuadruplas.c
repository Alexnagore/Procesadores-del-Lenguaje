#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "tablaDeCuadruplas.h"

tablaDeCuadruplas nuevaTablaDeCuadruplas() {
    tablaDeCuadruplas tabla;
    tabla.nextQuad = 0;
    for (int i = 0; i < 100; i++) {
        tabla.cuadruplas[i].operador  = NULL;
        tabla.cuadruplas[i].operando1 = NULL;
        tabla.cuadruplas[i].operando2 = NULL;
        tabla.cuadruplas[i].resultado = NULL;
    }
    return tabla;
}

void gen(tablaDeCuadruplas * tabla, char * operador, char * operando1, char * operando2, char * resultado) {
    tipoCuadrupla * cuadrupla = &tabla->cuadruplas[tabla->nextQuad];

    cuadrupla->operador  = strdup(operador);
    cuadrupla->operando1 = strdup(operando1);
    cuadrupla->operando2 = strdup(operando2);
    cuadrupla->resultado = strdup(resultado);

    tabla.nextQuad++;
}

void backpatch() {
    
}

void imprimirTablaDeCuadruplas(tablaDeCuadruplas * tabla) {
    
}
