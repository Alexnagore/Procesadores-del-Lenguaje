%{
	// Headers standard necesarios
	#include <stdio.h> //Para poder escribir en el terminal
	#include <stdlib.h> //Para usar exit()
	#include <strings.h> //Para trabajar con cadenas de caracteres
	
	void errorEnScanner(char*, char*); //prototipo necesario para compilar
	
%}

letraDR [[:alpha:]]
cifraDR [[:digit:]]
letra_o_cifraDR [[:alnum:]]
identificadorDR {letraDR}{letra_o_cifraDR}*

literal_enteroDR    [+-]?{cifraDR}{cifraDR}*([eE]{cifraDR}{cifraDR}*)?
literal_realDR    [+-]?{cifraDR}{cifraDR}*(\.{cifraDR}{cifraDR}*)?([eE]{cifraDR}{cifraDR}*)?|{literal_enteroDR}[rR]
literal_booleanoDR (?i:verdadero|falso)
literal_caracterDR  \".\"
literal_cadenaDR    '([^']|\/')*'

comentarioDR	\{([^}]|\/\})*\}

tipoDR	(?i:booleano|cadena|caracter|entero|real|tabla|ref)
operacionDR	(?i:div|mod)
conjuncionDR	(?i:o|y)
tipo_atributo_accionDR	(?i:e\/s|sal|ent)
inicio_algoritmoDR	(?i:algoritmo)
fin_algoritmoDR	(?i:falgoritmo)

palabra_reservadaDR	(?i:accion|const|continuar|de|dev|faccion|fconst|ffuncion|fmientras|fpara|fsi|ftipo|ftupla|funcion|fvar|hacer|hasta|mientras|no|para|si|tipo|tupla|var)


%%

{tipoDR}|{booleano}{conjuncionDR}	{
	printf("(palabra_reservadaTK, %s)\n", yytext);
}

{literal_booleanoDR}  {
    printf("(literal_booleanoTK, %s)\n", yytext);
}

{identificadorDR}   {
    printf("(identificadorTK, %s)\n", yytext);
}

{literal_enteroDR}  {
    printf("(literal_enteroTK, %s)\n", yytext);
}

{literal_realDR}  {
    printf("(literal_realTK, %s)\n", yytext);
}

{literal_caracterDR}  {
    printf("(literal_caracterTK, %s)\n", yytext);
}

{literal_cadenaDR}  {
    printf("(literal_cadenaTK, %s)\n", yytext);
}

{comentarioDR} {
    printf("(comentarioTK, %s)\n", yytext);
}



%%

void errorEnScanner(char* definicionDelError, char * variable){
	printf("\n\n\n\t%s %s \n", definicionDelError, variable);
	exit(EXIT_FAILURE);
}
