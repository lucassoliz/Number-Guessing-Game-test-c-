#include <stdio.h>
#include "juego.h"

int main() {
    int mode;

    printf("Bienvenido al juego de adivinanza.\n");
    printf("Elige el tipo de juego:\n");
    printf("1. Juego de Número\n");
    printf("2. Juego de Palabra\n");
    printf("Elige una opción (1 o 2): ");
    scanf("%d", &mode);

    play_game(mode);

    return 0;
}
