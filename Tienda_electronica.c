#include <stdio.h>
#include <string.h>

#define MAX 100
#define NAME_LEN 50

// Funciones auxiliares
void ingresarProductos(int n, char nombres[][NAME_LEN], int cantidades[], int tiempos[], int recursos[]) {
    for (int i = 0; i < n; i++) {
        printf("Ingrese nombre del producto %d: ", i + 1);
        scanf("%s", nombres[i]);
        printf("Ingrese cantidad del producto %d: ", i + 1);
        scanf("%d", &cantidades[i]);
        printf("Ingrese tiempo de fabricacion por unidad del producto %d: ", i + 1);
        scanf("%d", &tiempos[i]);
        printf("Ingrese recursos por unidad del producto %d: ", i + 1);
        scanf("%d", &recursos[i]);
    }
}

void mostrarProductos(int n, char nombres[][NAME_LEN], int cantidades[], int tiempos[], int recursos[]) {
    printf("\nLista de productos:\n");
    for (int i = 0; i < n; i++) {
        printf("Producto %d: %s Cantidad: %d Tiempo: %d Recursos: %d\n",
               i + 1, nombres[i], cantidades[i], tiempos[i], recursos[i]);
    }
}

void editarProducto(int n, char nombres[][NAME_LEN], int cantidades[], int tiempos[], int recursos[]) {
    char buscar[NAME_LEN];
    printf("Ingrese nombre del producto a editar: ");
    scanf("%s", buscar);
    for (int i = 0; i < n; i++) {
        if (strcmp(nombres[i], buscar) == 0) {
            printf("Ingrese nuevo nombre: ");
            scanf("%s", nombres[i]);
            printf("Ingrese nueva cantidad: ");
            scanf("%d", &cantidades[i]);
            printf("Ingrese nuevo tiempo: ");
            scanf("%d", &tiempos[i]);
            printf("Ingrese nuevos recursos: ");
            scanf("%d", &recursos[i]);
            printf("Producto editado correctamente\n");
            return;
        }
    }
    printf("Producto no encontrado\n");
}

void eliminarProducto(int *n, char nombres[][NAME_LEN], int cantidades[], int tiempos[], int recursos[]) {
    char buscar[NAME_LEN];
    printf("Ingrese nombre del producto a eliminar: ");
    scanf("%s", buscar);
    for (int i = 0; i < *n; i++) {
        if (strcmp(nombres[i], buscar) == 0) {
            for (int j = i; j < *n - 1; j++) {
                strcpy(nombres[j], nombres[j + 1]);
                cantidades[j] = cantidades[j + 1];
                tiempos[j] = tiempos[j + 1];
                recursos[j] = recursos[j + 1];
            }
            (*n)--;
            printf("Producto eliminado correctamente\n");
            return;
        }
    }
    printf("Producto no encontrado\n");
}

void calcularTotales(int n, int cantidades[], int tiempos[], int recursos[], int *totalTiempo, int *totalRecursos) {
    *totalTiempo = 0;
    *totalRecursos = 0;
    for (int i = 0; i < n; i++) {
        *totalTiempo += cantidades[i] * tiempos[i];
        *totalRecursos += cantidades[i] * recursos[i];
    }
}

int main() {
    int n;
    char nombres[MAX][NAME_LEN];
    int cantidades[MAX], tiempos[MAX], recursos[MAX];
    int opcion;
    int totalTiempo, totalRecursos;
    int tiempoDisponible, recursosDisponibles;

    printf("Ingrese cantidad de productos: ");
    scanf("%d", &n);

    ingresarProductos(n, nombres, cantidades, tiempos, recursos);

    printf("Ingrese tiempo disponible de la fabrica: ");
    scanf("%d", &tiempoDisponible);
    printf("Ingrese recursos disponibles de la fabrica: ");
    scanf("%d", &recursosDisponibles);

    do {
        printf("\nMenu principal:\n");
        printf("1. Mostrar productos\n");
        printf("2. Editar producto\n");
        printf("3. Eliminar producto\n");
        printf("4. Calcular totales\n");
        printf("5. Salir\n");
        printf("Ingrese opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                mostrarProductos(n, nombres, cantidades, tiempos, recursos);
                break;
            case 2:
                editarProducto(n, nombres, cantidades, tiempos, recursos);
                break;
            case 3:
                eliminarProducto(&n, nombres, cantidades, tiempos, recursos);
                break;
            case 4:
                calcularTotales(n, cantidades, tiempos, recursos, &totalTiempo, &totalRecursos);
                printf("Tiempo total requerido: %d\n", totalTiempo);
                printf("Recursos totales requeridos: %d\n", totalRecursos);
                if (totalTiempo <= tiempoDisponible && totalRecursos <= recursosDisponibles) {
                    printf("La fabrica puede cumplir con la demanda\n");
                } else {
                    printf("La fabrica no puede cumplir con la demanda\n");
                }
                break;
            case 5:
                printf("Saliendo del programa\n");
                break;
            default:
                printf("Opcion invalida\n");
        }
    } while (opcion != 5);

    return 0;
}
