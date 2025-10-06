#include <stdio.h>
#include <stdbool.h>
/*
juego del ahorcado usando while loop
*/
 
int main() {
    // PROGRAMACION
    char letra1 = 'P', letra2 = 'R', letra3 = 'O', letra4 = 'G', letra5 = 'R';
    char letra6 = 'A', letra7 = 'M', letra8 = 'A', letra9 = 'C', letra10 = 'I';
    char letra11 = 'O', letra12 = 'N';
 
    char estado1 = '_', estado2 = '_', estado3 = '_', estado4 = '_', estado5 = '_';
    char estado6 = '_', estado7 = '_', estado8 = '_', estado9 = '_', estado10 = '_';
    char estado11 = '_', estado12 = '_';
 
    int fallos = 0;    
    int aciertos = 0;
    char intento;
 
    printf("Bienvenido al juego del ahorcado!\n");
    printf("La palabra tiene 12 letras. Tienes un máximo de 5 fallos.\n");
 
    while (fallos < 5 && aciertos < 12) {
        // mostrar
        printf("\nPalabra: %c %c %c %c %c %c %c %c %c %c %c %c\n",
               estado1, estado2, estado3, estado4, estado5,
               estado6, estado7, estado8, estado9, estado10,
               estado11, estado12);
 
        printf("Introduce una letra: ");
        scanf(" %c", &intento);
 
 
        if (intento >= 'a' && intento <= 'z') {
            intento -= 32;
        }
 
        bool encontrada = 0;
 
 
 
        if (intento == letra1 && estado1 == '_') { estado1 = letra1; aciertos++; encontrada = 1; }
        if (intento == letra2 && estado2 == '_') { estado2 = letra2; aciertos++; encontrada = 1; }
        if (intento == letra3 && estado3 == '_') { estado3 = letra3; aciertos++; encontrada = 1; }
        if (intento == letra4 && estado4 == '_') { estado4 = letra4; aciertos++; encontrada = 1; }
        if (intento == letra5 && estado5 == '_') { estado5 = letra5; aciertos++; encontrada = 1; }
        if (intento == letra6 && estado6 == '_') { estado6 = letra6; aciertos++; encontrada = 1; }
        if (intento == letra7 && estado7 == '_') { estado7 = letra7; aciertos++; encontrada = 1; }
        if (intento == letra8 && estado8 == '_') { estado8 = letra8; aciertos++; encontrada = 1; }
        if (intento == letra9 && estado9 == '_') { estado9 = letra9; aciertos++; encontrada = 1; }
        if (intento == letra10 && estado10 == '_') { estado10 = letra10; aciertos++; encontrada = 1; }
        if (intento == letra11 && estado11 == '_') { estado11 = letra11; aciertos++; encontrada = 1; }
        if (intento == letra12 && estado12 == '_') { estado12 = letra12; aciertos++; encontrada = 1; }
 
 
        if (!encontrada) {
            fallos++;
            printf("\nLetra incorrecta. Te quedan %d intentos.\n", 5 - fallos);
        } else {
            printf("\n¡Letra correcta!");
        }
    }
 
    if (aciertos == 12) {
        printf("\n\n¡Felicidades! Has adivinado la palabra: PROGRAMACION\n");
    } else {
        printf("\n\nHas perdido... La palabra era: PROGRAMACION\n");
    }
 
    return 0;
}
 
 