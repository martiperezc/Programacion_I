//Algoritmo para sumar dos numeros usando funcion!
#include<stdio.h>

int Sumar();
int a,b;


int main(){
    printf("Escribe dos numeros para sumar\n");
    scanf("%i %i", &a, &b);
    printf("La suma es: %i", Sumar(a,b));

    return 0;
}
int Sumar(int a, int b){
    int suma=0;

    suma=(a+b);
    return suma;

}

