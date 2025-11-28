#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "tablaDeCuadruplas.h"

/* --- DEFINICIÓN DE COLORES ANSI --- */
    #define ANSI_COLOR_RED     "\x1b[31m"
    #define ANSI_COLOR_GREEN   "\x1b[32m"
    #define ANSI_COLOR_YELLOW  "\x1b[33m"
    #define ANSI_COLOR_BLUE    "\x1b[34m"
    #define ANSI_COLOR_MAGENTA "\x1b[35m"
    #define ANSI_COLOR_CYAN    "\x1b[36m"
    #define ANSI_COLOR_RESET   "\x1b[0m"
    /* ---------------------------------- */

TablaDeCuadruplas nuevaTablaDeCuadruplas() {
    TablaDeCuadruplas tabla;
    tabla.nextQuad = 0;
    for (int i = 0; i < 100; i++) {
        tabla.cuadruplas[i].operador  = NULO;
        tabla.cuadruplas[i].operando1 = NULO;
        tabla.cuadruplas[i].operando2 = NULO;
        tabla.cuadruplas[i].resultado = NULO;
    }
    return tabla;
}

void gen(TablaDeCuadruplas * tabla, int operador, int operando1, int operando2, int resultado) {
    TipoCuadrupla * cuadrupla = &tabla->cuadruplas[tabla->nextQuad];

    cuadrupla->operador  = operador;
    cuadrupla->operando1 = operando1;
    cuadrupla->operando2 = operando2;
    cuadrupla->resultado = resultado;

    tabla->nextQuad++;
}

//void backpatch(){

//} 

void imprimirTablaDeCuadruplas(TablaDeCuadruplas * tabla) {
    // Definimos el ancho de las columnas
    printf(ANSI_COLOR_CYAN);
    printf("+------------+------------+------------+------------+\n");
    printf("| %-10s | %-10s | %-10s | %-10s |\n", "OPERADOR", "OPERANDO 1", "OPERANDO 2", "RESULTADO");
    printf("+------------+------------+------------+------------+\n");
    printf(ANSI_COLOR_RESET);

    for (int i = 0; i < tabla->nextQuad; i++) {
        TipoCuadrupla * cuadrupla = &tabla->cuadruplas[i];
        
        printf("| %-10d | %-10d | %-10d | %-10d |\n",
               cuadrupla->operador,
               cuadrupla->operando1,
               cuadrupla->operando2,
               cuadrupla->resultado);
    }

    printf(ANSI_COLOR_CYAN);
    printf("+------------+------------+------------+------------+\n");
    printf(ANSI_COLOR_RESET);
}

