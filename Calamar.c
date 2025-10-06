#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ronda = 1;

int main()
{
    int numero, grupos, jugadores_eliminados, jugadores = 150, nuevos_jugadores;
    float promedio;
    int total_rondas = 0;

    srand(time(NULL));

    for (int i = 0; i < 100; i++)
    {
        jugadores = 150; 
        ronda = 0;

        do
        {
            numero = rand() % 10 + 1;
            grupos = jugadores / numero;
            nuevos_jugadores = grupos * numero;
            jugadores = nuevos_jugadores;
            ronda++;
        } while (jugadores >= 100);

        total_rondas += ronda;
    }

    promedio = (float)total_rondas / 100;
    printf("Pasadas las 100 simulaciones se logro un promedio de:\n%.2f\n", promedio);

    return 0;
}
