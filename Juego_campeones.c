#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){

    int primer_num,num_gritarj1, num_gritarj2, dedos_j1, dedos_j2;

    //Definir aleatoriamente cual jugadar gritara el primer numero;
    srand(time(NULL));
    primer_num = rand()%2+1; //Aleatoriamente un numero del 1 al 2; donde 1= jugador 1 y 2= jugador 2
    if(primer_num==1){
        printf("Ingresar el numero a gritar\n");
        scanf("%i",&num_gritarj1);
    } else if(primer_num==2){
        num_gritarj2 = rand()%20+1; //J2 Grita valores que se pueden sumar desde el 1 hasta el 20;
        printf("J2 grito el numero: %i\n", num_gritarj2);
    }
    printf("EL juego comenzara en 3,2,1\n");
    printf("Ingrese cuantos dedos quiere mostrar: \n");
    scanf("%i", &dedos_j1);

    dedos_j2= rand()%10+1; //Aleatoriamente ingresa valores de dedos a j2.
    printf("J2 eligio el numero: %i\n", dedos_j2);

    if((dedos_j1+dedos_j2)==num_gritarj1){
        printf("El jugador 1 Gana\n");
    } else if((dedos_j1+dedos_j2==num_gritarj2)){
        printf("El jugador 2 Gana\n");
    } else {
        printf("Es un empate, intentelo de nuevo\n");
    }

    return 0;
}
