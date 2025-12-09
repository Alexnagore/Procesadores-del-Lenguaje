#ifndef LITERAL_H
#define LITERAL_H

#include "nombresDeTipos.h"

typedef enum valorBooleanoT {
	VERD,
	FALS
} ValorBooleanoT;

typedef union valorLiteralT{
	ValorBooleanoT valorBooleano;
	char * valorCadena;
	char valorCaracter;
	int valorEntero;
	float valorReal;
} ValorLiteralT;
	
typedef struct literalT {
	NombreDeTipoT tipoDelValor;
	ValorLiteralT valor;
} LiteralT;	

LiteralT nuevoLiteralBooleano(ValorBooleanoT);
LiteralT nuevoLiteralCadena(char *);
LiteralT nuevoLiteralCaracter(char);
LiteralT nuevoLiteralEntero(int);
LiteralT nuevoLiteralReal(float);
void escribeLiteral(LiteralT);

#endif
