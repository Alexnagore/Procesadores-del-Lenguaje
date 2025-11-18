#include "colaEnteros.h"

#include <stdlib.h>
#include <stdio.h>

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
    nuevo->elem = e;
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
    if (esNulaCola(*c))
        printf("\nError: No se puede desencolar de una cola NULA\n");
    else if (c->ini == c->fin){
        celdaCola* aux;
        aux = c->ini;
        c->ini = NULL;
        c->fin = NULL;
        free(aux);
    }
    else{
        celdaCola* aux;
        aux = c->ini;
        c->ini = c->ini->sig;
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
