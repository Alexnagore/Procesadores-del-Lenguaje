#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "tablaDeConstantes.h"


TablaDeConstantes nuevaTablaDeConstantes() {
    return (Celda *) NULL;
}

bool insertaConstante(TablaDeConstantes * ptc, char * pnombre, int v){
    Celda * c;
    c = *ptc;
    while (c != NULL && strcmp(pnombre, c->nombre))
        c = c->sig;
    if (c != NULL)
        printf("Ya existe una constante llamada %s\n", pnombre);
    else {
        if ((c = (Celda *) malloc(sizeof(Celda))) == NULL) {
            printf("No hay memoria para una celda de la tabla de constantes");
            exit(1);
        } 
        c->nombre = pnombre;
        c->valor = v;
        c->sig = *ptc;
        *ptc = c;
    }
}

void imprimeTablaDeConstantes(TablaDeConstantes tc){
    Celda * aux = tc;
    if (tc = NULL) 
        printf("La tabla de constantes est� vac�a\n");
    else {
        printf("El contenido de la tabla de constantes es.\n");
        printf("Nombre\t\tTipo\t\tValor\n");
        while (aux != NULL){
            printf("%s\t\t", aux->nombre);
            escribeLiteral(aux->valor);
            aux = aux ->sig;
        }
    }
}