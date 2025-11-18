#include <stdio.h>
#include <stdlib.h>
#include "colaDeIdentificador.h"
#include <string.h>

int main() {
    tipoCola miCola;
    
    printf("========================================\n");
    printf("    TEST DE COLA DE IDENTIFICADORES\n");
    printf("========================================\n");

    // 1. Inicialización
    nuevaCola(&miCola);
    if (esNulaCola(miCola)) {
        printf("[OK] Cola inicializada correctamente (está vacía).\n");
    } else {
        printf("[ERROR] La cola debería estar vacía.\n");
    }

    // 2. Prueba de Encolado (Simulando el Scanner)
    // Imagina que 'yytext' va cambiando de valor
    printf("\n--- Encolando elementos ---\n");

    char *simulacionYYText;

    simulacionYYText = "variable_x";
    printf("Scanner lee: '%s' -> Encolando...\n", simulacionYYText);
    encolar(&miCola, simulacionYYText);

    simulacionYYText = "contador_i";
    printf("Scanner lee: '%s' -> Encolando...\n", simulacionYYText);
    encolar(&miCola, simulacionYYText);

    simulacionYYText = "resultado_final";
    printf("Scanner lee: '%s' -> Encolando...\n", simulacionYYText);
    encolar(&miCola, simulacionYYText);

    // 3. Verificación del Frente sin borrar
    printf("\n--- Verificando el frente ---\n");
    if (!esNulaCola(miCola)) {
        char* primero = frente(miCola);
        printf("El primer elemento es: '%s'\n", primero);
        
        if (strcmp(primero, "variable_x") == 0) {
            printf("[OK] El frente es correcto.\n");
        } else {
            printf("[ERROR] El frente es incorrecto.\n");
        }
    }

    // 4. Prueba de Desencolado (Vaciado)
    printf("\n--- Procesando y vaciando la cola ---\n");
    int contador = 1;
    
    while (!esNulaCola(miCola)) {
        // Obtenemos el valor
        char* id = frente(miCola);
        printf("Procesando elemento %d: %s\n", contador, id);
        
        // Eliminamos (Aquí es donde tu 'free' interno trabaja)
        desencolar(&miCola);
        contador++;
    }

    // 5. Verificación final
    printf("\n--- Estado Final ---\n");
    if (esNulaCola(miCola)) {
        printf("[OK] La cola ha quedado vacía y limpia.\n");
    } else {
        printf("[ERROR] La cola no se vació correctamente.\n");
    }

    printf("========================================\n");
    return 0;
}