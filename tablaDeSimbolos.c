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

void modificarTipoTS(TablaDeSimbolos tabla, int clave, int tipo){
    int cont = 0;
    while (tabla != NULL && cont < clave) {
        tabla = tabla->sig;
        cont++;
    }
    tabla->simbolos[clave].tipo = tipo;
};

int newTemp(TablaDeSimbolos * ts) {
    char nombreSimbolo[100];
    snprintf(nombreSimbolo, sizeof(nombreSimbolo), "TEMP.%d", ts->sigPos);
    simbolo nuevoSimbolo;
    strcpy(nuevoSimbolo.nombre, nombreSimbolo);
    nuevoSimbolo.tipo = -1;
    nuevoSimbolo.clave = ts->sigPos;
    ts->simbolos[ts->sigPos] = nuevoSimbolo;
    ts->sigPos++;
    return nuevoSimbolo.clave;
}

int buscar_tipo_TS(TablaDeSimbolos tabla, char * nombre) {
    while (tabla != NULL) {
        if (strcmp(tabla->nombre, nombre) == 0) {
            return tabla->valor.tipoDelValor;
        }
        tabla = tabla->sig;
    }
    return -1;
}

int buscar_indice_TS(TablaDeSimbolos tabla, char * nombre) {
    int indice = 0;
    while (tabla != NULL) {
        if (strcmp(tabla->nombre, nombre) == 0) {
            return indice;
        }
        tabla = tabla->sig;
        indice++;
    }
    return -1;
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