#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tablaDeSimbolos.h"

#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

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

void modificarTipoTS(TablaDeSimbolos * ts, int pos, int tipo){
    printf("Voy a modificar el tipo del simbolo en la posicion %d a el tipo %d\n", pos, tipo);
    Celda * aux = ts->simbolos;
    int cont = ts->sigPos - 1;
    while (aux != NULL && cont > pos) {
        printf("Estoy en el simbolo %s con tipo %d\n", aux->nombre, aux->tipo);
        aux = aux->sig;
        cont--;
    }
    if (aux != NULL) {
        printf("Voy a modificar el simbolo de la variable %s con tipo %d a tipo %d\n", aux->nombre, aux->tipo, tipo);
        aux->tipo = tipo;
    }
}

int newTemp(TablaDeSimbolos * ts) {
    char nombreSimbolo[20];
    int indice = ts->sigPos;
    snprintf(nombreSimbolo, sizeof(nombreSimbolo), "TEMP.%d", indice);
    insertaSimbolo(ts, nombreSimbolo, -1);
    return indice;
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
    while (ts.simbolos != NULL) {
        if (strcmp(ts.simbolos->nombre, nombre) == 0) {
            return ts.simbolos->indice;
        }
        ts.simbolos = ts.simbolos->sig;
    }
    return -1;
}

void imprimeTablaDeSimbolos(TablaDeSimbolos ts) {
    printf(ANSI_COLOR_CYAN);
    printf("+------------+------------+------------+\n");
    printf("| %-10s | %-10s | %-10s |\n", "NOMBRE", "INDICE", "TIPO");
    printf("+------------+------------+------------+\n");
    printf(ANSI_COLOR_RESET);

    Celda * actual = ts.simbolos;
    while (actual != NULL) {
        printf("| %-10s | %-10d | %-10d |\n",
             actual->nombre,
             actual->indice,
             actual->tipo);
        actual = actual->sig;
    }

    printf(ANSI_COLOR_CYAN);
    printf("+------------+------------+------------+\n");
    printf(ANSI_COLOR_RESET);
}