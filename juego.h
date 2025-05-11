#define JUEGO_H

#include <stdbool.h>

void iniciar_juego();
void jugar_adivinar_numero();
void jugar_adivinar_palabra();
bool adivinar_numero(int numero_secreto, int intento);
bool adivinar_palabra(const char* palabra_secreta, const char* intento);

#endif