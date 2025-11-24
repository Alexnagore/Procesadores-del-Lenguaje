#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tablaDeSimbolos.h"

TablaDeSimbolos nuevaTablaDeSimbolos(void) {
    return NULL;
}
bool insertaSimbolo(TablaDeSimbolos * tabla, char * nombre, LiteralT valor) {
    Celda * aux;

    aux = *tabla;
    while (aux != NULL) {
        if (strcmp(aux->nombre, nombre) == 0) {
            return false; 
        }
        aux = aux->sig;
    }

    Celda * nuevaCelda = (Celda *)malloc(sizeof(Celda));
    if (nuevaCelda == NULL) {
        printf("Error: No hay memoria para la tabla de simbolos\n");
        return false;
    }

    nuevaCelda->nombre = strdup(nombre);
    nuevaCelda->valor = valor;
    
    nuevaCelda->sig = *tabla;
    *tabla = nuevaCelda;

    return true;
}

void imprimeTablaDeSimbolos(TablaDeSimbolos tabla) {
    Celda * actual = tabla;
    while (actual != NULL) {
        printf("Nombre: %s,  \tValor: ", actual->nombre);
        escribeLiteral(actual->valor);
        printf("\n");
        actual = actual->sig;
    }
}