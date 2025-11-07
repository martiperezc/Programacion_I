#include <stdio.h>
#include <string.h>
#include "operaciones.h"

void ingresarDatos(char nombres[][MAX_NOMBRE], float precios[], int n) {
    for (int i = 0; i < n; i++) {
        printf("nombre del producto %d: ", i + 1);
        scanf("%s", nombres[i]);
        printf("precio del producto %d: ", i + 1);
        scanf("%f", &precios[i]);
    }
}

float calcularTotal(float precios[], int n) {
    float total = 0;
    for (int i = 0; i < n; i++)
        total += precios[i];
    return total;
}

float calcularPromedio(float precios[], int n) {
    return calcularTotal(precios, n) / n;
}

int indiceMasCaro(float precios[], int n) {
    int indice = 0;
    for (int i = 1; i < n; i++)
        if (precios[i] > precios[indice])
            indice = i;
    return indice;
}

int indiceMasBarato(float precios[], int n) {
    int indice = 0;
    for (int i = 1; i < n; i++)
        if (precios[i] < precios[indice])
            indice = i;
    return indice;
}

int buscarProducto(char nombres[][MAX_NOMBRE], float precios[], int n, char nombreBuscado[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(nombres[i], nombreBuscado) == 0)
            return i;
    }
    return -1;
}
