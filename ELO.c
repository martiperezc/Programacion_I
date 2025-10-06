#include <stdio.h>


int const k = 10;
float puntaje_j1, puntaje_j2, puntaje_actualj1, puntaje_actualj2, resultado_realj1, resultado_realj2;

// Funcion para posibilidad J1
float Posibilidad_J1(float puntaje_j1, float puntaje_j2)
{
    float P;
    P = 1 / (1 + 10 *((puntaje_j2 - puntaje_j1) / 400));
    return P;
}
// Funcion para posibilidad J2
float Posibilidad_J2(float puntaje_j1, float puntaje_j2)
{
    float P_J2;
    P_J2 = 1 / (1 + 10 * ((puntaje_j1 - puntaje_j2) / 400));
    return P_J2;
}

int main()
{

    printf("J1 Ingresa tu puntaje del 1 al 100\n"); // Ingresa puntaje J1
    scanf("%f", &puntaje_j1);
    // Computadora ingresa su puntaje del 1 al 100
    printf("J2 Ingresa tu puntaje del 1 al 100\n"); // Ingresa puntaje J2
    scanf("%f", &puntaje_j2);
    // Llamamos a funciones de probabilidad de ganar
    Posibilidad_J1(puntaje_j1, puntaje_j2);
    Posibilidad_J2(puntaje_j1, puntaje_j2);
    // Condicion para asignar nuevo puntaje real
    if (Posibilidad_J1(puntaje_j1, puntaje_j2) == Posibilidad_J2(puntaje_j1, puntaje_j2))
    {
        printf("Ambos jugadores tienen la misma probabilidad de ganar\n");
        resultado_realj1 = 0, 5;
        resultado_realj2 = 0, 5;
    }
    else if (Posibilidad_J1(puntaje_j1, puntaje_j2) > Posibilidad_J2(puntaje_j1, puntaje_j2))
    {
        printf("El jugador 1 tiene mas probabilidad de ganar\n");
        resultado_realj1  = 1;
        resultado_realj2  = 0;
    }
    else if(Posibilidad_J2(puntaje_j1, puntaje_j2) > Posibilidad_J1(puntaje_j1, puntaje_j2))
    {
        printf("El jugador 2 tiene mas probabilidad de ganar\n");
        resultado_realj1 = 0;
        resultado_realj2 = 1;
    }
    //Asignar puntaje actual a cada jugador.
    puntaje_actualj1= (puntaje_j1+k*(resultado_realj1-Posibilidad_J1(puntaje_j1, puntaje_j2)));    
    puntaje_actualj2= (puntaje_j2+k*(resultado_realj2-Posibilidad_J2(puntaje_j1, puntaje_j2)));

    printf("\nEl nuevo ELO del jugador 1 es: \n %.2f", puntaje_actualj1);
    printf("\nEl nuevo ELO del jugador 2 es: \n %.2f", puntaje_actualj2);

    return 0;
}