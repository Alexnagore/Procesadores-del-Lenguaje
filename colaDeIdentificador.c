#include "colaDeIdentificador.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void nuevaCola(tipoCola* c){
    c->ini = NULL;
    c->fin = NULL;
}

bool esNulaCola(tipoCola c){
    return c.ini == NULL;
}

void encolar(tipoCola* c, tipoElementoCola e){
    celdaCola* nuevo;
    nuevo = (celdaCola*) malloc(sizeof(celdaCola));
    
    if (e != NULL) {
        nuevo->elem = strdup(e); 
    } else {
        nuevo->elem = NULL;
    }

    nuevo->sig = NULL;
    
    if (esNulaCola(*c)){
        c->ini = nuevo;
        c->fin = nuevo;
    }
    else{
        c->fin->sig = nuevo;
        c->fin = nuevo;
    }
}

void desencolar(tipoCola* c){
    if (esNulaCola(*c)) {
        printf("\nError: No se puede desencolar de una cola NULA\n");
    }
    else if (c->ini == c->fin){
        celdaCola* aux;
        aux = c->ini;
        
        c->ini = NULL;
        c->fin = NULL;
        
        if (aux->elem != NULL) free(aux->elem);
        free(aux);
    }
    else{
        celdaCola* aux;
        aux = c->ini;
        c->ini = c->ini->sig;
        
        if (aux->elem != NULL) free(aux->elem);
        free(aux);
    }
}

tipoElementoCola frente(tipoCola c){
    if (esNulaCola(c)){
        printf("\nERROR: No existe frente de cola NULA\n");
        exit(-1);
    }else{
        return c.ini->elem;
    }
}