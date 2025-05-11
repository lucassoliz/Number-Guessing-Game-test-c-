#include "juego.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//-------------INICIO DE JUEGO-------------
void iniciar_juego() {
    printf("Bienvenido al juego de adivinar\n");
    printf("Elige un modo:\n");
    printf("1. Adivinar un número\n");
    printf("2. Adivinar una palabra\n");
}
//---------LOGICA DE ADIVINAR NUMERO.................
void jugar_adivinar_numero() {
    int numero_secreto = rand() % 100 + 1; 
    int intento;

    printf("Adivina el numero secreto (entre 1 y 100)\n");

    do {
        printf("Ingresa tu intento: ");
        scanf("%d", &intento);

        if (adivinar_numero(numero_secreto, intento)) {
            printf("Felicidades, adivinaste el numero\n");
            break;
        } else {
            printf("Intenta otra vez\n");
        }
    } while (1);
}

//---------LOGICA DE ADIVINAR PALABRA............
void jugar_adivinar_palabra() {
    char palabra_secreta[50];
    char intento[50];

    printf("Ingresa una palabra secreta (max. 50 caracteres): ");
    scanf("%s", palabra_secreta);

    printf("Adivina la palabra secreta!\n");

    do {
        printf("Ingresa tu intento: ");
        scanf("%s", intento);

        if (adivinar_palabra(palabra_secreta, intento)) {
            printf("Felicidades, adivinaste la palabra.\n");
            break;
        } else {
            printf("Intenta otra vez\n");
        }
    } while (1);
}