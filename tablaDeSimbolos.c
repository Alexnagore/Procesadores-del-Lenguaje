#include <stdio.h>
#include <stdlib.h>
#include "tablaDeSimbolos.h"

TablaDeSimbolos nuevaTablaDeSimbolos(void) {
    return NULL;
}
bool insertaSimbolo(TablaDeSimbolos * tabla, char * nombre, LiteralT valor) {
    Celda * nuevaCelda = (Celda *)malloc(sizeof(Celda));
    if (nuevaCelda == NULL) {
        return false;
    }
    nuevaCelda->nombre = nombre;
    nuevaCelda->valor = valor;
    nuevaCelda->sig = *tabla;
    *tabla = nuevaCelda;
    return true;
}

void imprimeTablaDeSimbolos(TablaDeSimbolos tabla) {
    Celda * actual = tabla;
    while (actual != NULL) {
        printf("Nombre: %s, Valor: ", actual->nombre);
        escribeLiteral(actual->valor);
        printf("\n");
        actual = actual->sig;
    }
}