#include<stdio.h>


int main(){

    float a,b,c;

    printf("Ingrese el valor de a y b\n");
    scanf("%f %f", &a, &b);
    c = a+b;

    if (c < 10){
        printf("El resultado es menor que 10 y es: %.2f", c);
    } else {
        printf("El restultado es mayor a 10 y es: %.2f", c);  
    }
    return 0;
}