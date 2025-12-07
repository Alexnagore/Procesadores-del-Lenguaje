#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "tablaDeCuadruplas.h"

#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

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

// void backpatch(TablaDeCuadruplas * tabla, int lista[], int longitud, int resultado) {
//     for (int i = 0; i < longitud; i++) {
//         int index = lista[i];
//         if (index >= 0 && index < tabla->nextQuad) {
//             tabla->cuadruplas[index].resultado = resultado;
//         }
//     }
// }

// int * merge(int lista1[], int len1, int lista2[], int len2){
//     int * resultado = malloc((len1 + len2) * sizeof(int));
    
//     if (resultado == NULL) {
//         printf("Error: Fallo al asignar memoria en merge.\n");
//         exit(1);
//     }

//     for(int i = 0; i < len1; i++){
//         resultado[i] = lista1[i];
//     }
//     for(int j = 0; j < len2; j++){
//         resultado[len1 + j] = lista2[j];
//     }
    
//     return resultado;
// }

// int makelist(TablaDeCuadruplas * tabla, int index){
//     return tabla->nextQuad + index;
// }

void imprimirTablaDeCuadruplas(TablaDeCuadruplas * tabla) {
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

