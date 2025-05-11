#include "juego.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcion;

    srand(time(NULL));

    iniciar_juego();

    printf("Ingresa tu opción: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            jugar_adivinar_numero();
            break;
        case 2:
            jugar_adivinar_palabra();
            break;
        default:
            printf("Opción no válida. Saliendo del juego.\n");
    }

    return 0;
}