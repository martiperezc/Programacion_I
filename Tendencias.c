#include <stdio.h>

int main() {
    int X, Y, N; // X y Y Periodos de los promedios en dias, N= numero de precios
    
    // Ingresar periodos
    printf("Ingrese los días para los promedios móviles (X e Y) separados por espacio: ");
    scanf("%d %d", &X, &Y);
    //Ingresar numeros de precios
    printf("Ingrese el número total de precios de las acciones (N): ");
    scanf("%d", &N);
    //Definir variables de almacenamiento.
    float precios[N], ma2[N], ma4[N];
    //Ingresar valor de cada uno de los precios.
    printf("Ingrese los %d precios de cierre de la acción:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%f", &precios[i]);
        ma2[i] = 0; // Inicializar promedios móviles en 0 para almacenar el conteo.
        ma4[i] = 0;
    }

    // Cálculo de promedios móviles
    for (int i = 0; i < N; i++) {
        if (i >= X - 1) { // Promedio móvil de 2 días
            ma2[i] = (precios[i] + precios[i - 1]) / X; // Calculo de promedios moviles rapidos (MA2)
        }
        if (i >= Y - 1) { // Promedio móvil de 4 días
            ma4[i] = (precios[i] + precios[i - 1] + precios[i - 2] + precios[i - 3]) / Y; // Calculo de promedios moviles lentos(MA4)
        }
    }

    // Identificación de tendencias
    int alcistas = 0, bajistas = 0; //Iniciar en 0 para guardar el conteo de acciones alcistas y bajistas

    for (int i = Y; i < N; i++) {
        // Verificar cruce de MA2 y MA4 para tendencias alcistas y bajistas
        if (ma2[i - 1] <= ma4[i - 1] && ma2[i] > ma4[i]) {
            alcistas++; // Si se cumple la condicion subir en 1 el conteo de alcistas=0
        }
        if (ma2[i - 1] >= ma4[i - 1] && ma2[i] < ma4[i]) {
            bajistas++; // Si se cumple la condicion subir en 1 el conteo de bajistas=0
        }
    }

    // Salida de resultados
    printf("Número de tendencias alcistas: %d\n", alcistas);
    printf("Número de tendencias bajistas: %d\n", bajistas);

    return 0;
}
