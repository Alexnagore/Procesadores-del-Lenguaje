#ifndef COLA_DE_IDENTIFICADOR_H
#define COLA_DE_IDENTIFICADOR_H

#include <stdbool.h>

typedef char* tipoElementoCola;
typedef struct celdaC{
	tipoElementoCola elem;
	struct celdaC* sig;
} celdaCola; 
typedef struct tipoC{
	celdaCola* ini;
	celdaCola* fin;
}tipoCola;

void nuevaCola(tipoCola*);

bool esNulaCola(tipoCola);

void encolar(tipoCola*, tipoElementoCola);

void desencolar(tipoCola*);

tipoElementoCola frente(tipoCola);

#endif