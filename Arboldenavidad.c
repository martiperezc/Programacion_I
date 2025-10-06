#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void tronco(int n) {
    for (int i = 0; i < 2; i++) {
        for (int j = 1; j <= (n - 1); j++) {
            printf(" ");
        }
        printf("*\n");
    }
}

int main() {
    int n, signo_numeral;
    srand(time(NULL));

    printf("Ingrese el numero de filas para el arbol de Navidad:\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= (n - i - 1); j++) {
            printf(" ");
        }

        for (int j = 1; j <= (2 * i + 1); j++) {
            signo_numeral = rand() % 10 + 1;
            if (signo_numeral == 1 || signo_numeral == 2) {
                printf("#");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }

    tronco(n);

    return 0;
}
