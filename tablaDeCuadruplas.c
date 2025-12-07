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

void backpatch(TablaDeCuadruplas * tabla, int lista[], int longitud, int resultado) {
    for (int i = 0; i < longitud; i++) {
        int index = lista[i];
        if (index >= 0 && index < tabla->nextQuad) {
            tabla->cuadruplas[index].resultado = resultado;
        }
    }
}

void merge(int lista1[], int len1, int lista2[], int len2, int resultado[]){
    int i = 0;    

    for(int j = 0; j < len1; j++){
        resultado[i] = lista1[j];
        i++;
    }
    for(int j = 0; j < len2; j++){
        resultado[i] = lista2[j];
        i++;
    }    
}

int makelist(TablaDeCuadruplas * tabla, int index){
    return tabla->nextQuad + index;
}

void copiaListas(int destino[], int origen[], int longitud) {
    for (int i = 0; i < longitud; i++) {
        destino[i] = origen[i];
    }
}

char * obtenerNombreOperador(int operador) {
    switch (operador) {
        case NULO: return "NULO";
        case INT_TO_REAL: return "INT_TO_REAL";
        case SUMA_ENTERO: return "SUMA_ENTERO";
        case RESTA_ENTERO: return "RESTA_ENTERO";
        case MULT_ENTERO: return "MULT_ENTERO";
        case DIV_ENTERO: return "DIV_ENTERO";
        case SUMA_REAL: return "SUMA_REAL";
        case RESTA_REAL: return "RESTA_REAL";
        case MULT_REAL: return "MULT_REAL";
        case DIV_REAL: return "DIV_REAL";
        case MODULO: return "MODULO";
        case COCIENTE: return "COCIENTE";
        case ASIGNACION_TC: return "ASIGNACION_TC";
        case NEG_ENTERO: return "NEG_ENTERO";
        case NEG_REAL: return "NEG_REAL";
        case GOTO: return "GOTO";
        case SALTO: return "SALTO";
        case SIGNO_MAYOR_OPERADOR: return "SIGNO_MAYOR_OPERADOR";
        case SIGNO_MENOR_OPERADOR: return "SIGNO_MENOR_OPERADOR";
        case SIGNO_IGUAL_OPERADOR: return "SIGNO_IGUAL_OPERADOR";
        case SIGNO_MAYOR_IGUAL_OPERADOR: return "SIGNO_MAYOR_IGUAL_OPERADOR";
        case SIGNO_MENOR_IGUAL_OPERADOR: return "SIGNO_MENOR_IGUAL_OPERADOR";
        case SIGNO_DISTINTO_OPERADOR: return "SIGNO_DISTINTO_OPERADOR";
        default: return "DESCONOCIDO";
    }
}

void imprimirTablaDeCuadruplas(TablaDeCuadruplas * tabla) {
    printf(ANSI_COLOR_CYAN);
    printf("+----------------------+----------------------+----------------------+----------------------+\n");
    printf("| %-20s | %-20s | %-20s | %-20s |\n", "OPERADOR", "OPERANDO 1", "OPERANDO 2", "RESULTADO");
    printf("+----------------------+----------------------+----------------------+----------------------+\n");
    printf(ANSI_COLOR_RESET);

    for (int i = 0; i < tabla->nextQuad; i++) {
        TipoCuadrupla * cuadrupla = &tabla->cuadruplas[i];
        
        printf("| %-20s | %-20d | %-20d | %-20d |\n",
               obtenerNombreOperador(cuadrupla->operador),
               cuadrupla->operando1,
               cuadrupla->operando2,
               cuadrupla->resultado);
    }

    printf(ANSI_COLOR_CYAN);
    printf("+----------------------+----------------------+----------------------+----------------------+\n");
    printf(ANSI_COLOR_RESET);
}

