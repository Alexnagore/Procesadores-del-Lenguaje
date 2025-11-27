#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tablaDeSimbolos.h"

TablaDeSimbolos nuevaTablaDeSimbolos(void) {
    TablaDeSimbolos ts;
    ts.simbolos = NULL;
    ts.sigPos = 0;
    return ts;
}

bool insertaSimbolo(TablaDeSimbolos * ts, char * nombre, NombreDeTipoT tipo) {
    Celda * aux;

    aux = ts->simbolos;
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

    nuevaCelda->indice = ts->sigPos;
    nuevaCelda->nombre = strdup(nombre);
    nuevaCelda->tipo = tipo;
    nuevaCelda->sig = ts->simbolos;
    ts->simbolos = nuevaCelda;
    ts->sigPos++;

    return true;
}

void modificarTipoTS(TablaDeSimbolos ts, int pos, int tipo){
    int cont = 0;
    while (ts.simbolos != NULL && cont < pos) {
        ts.simbolos = ts.simbolos->sig;
        cont++;
    }
    if (ts.simbolos != NULL) {
        ts.simbolos->tipo = tipo;
    }
};

int newTemp(TablaDeSimbolos * ts) {
    char nombreSimbolo[100];
    snprintf(nombreSimbolo, sizeof(nombreSimbolo), "TEMP.%d", ts->sigPos);
    Celda nuevoSimbolo;
    strcpy(nuevoSimbolo.nombre, nombreSimbolo);
    nuevoSimbolo.tipo = -1;
    nuevoSimbolo.indice = ts->sigPos;
    insertaSimbolo(ts, nuevoSimbolo.nombre, nuevoSimbolo.tipo);
    ts->sigPos++;
    return nuevoSimbolo.indice;
}

int buscar_tipo_TS(TablaDeSimbolos ts, char * nombre) {
    while (ts.simbolos != NULL) {
        if (strcmp(ts.simbolos->nombre, nombre) == 0) {
            return ts.simbolos->tipo;
        }
        ts.simbolos = ts.simbolos->sig;
    }
    return -1;
}

int buscar_indice_TS(TablaDeSimbolos ts, char * nombre) {
    int indice = 0;
    while (ts.simbolos != NULL) {
        if (strcmp(ts.simbolos->nombre, nombre) == 0) {
            return indice;
        }
        ts.simbolos = ts.simbolos->sig;
        indice++;
    }
    return -1;
}

void imprimeTablaDeSimbolos(TablaDeSimbolos ts) {
    Celda * actual = ts.simbolos;
    while (actual != NULL) {
        printf("Nombre: %s,  \tIndice: %d\n", actual->nombre, actual->indice);
        printf("\n");
        actual = actual->sig;
    }
}