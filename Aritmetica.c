#include<stdio.h>
float num1,num2,suma,resta;


float main() {

printf("Ingrese el valor de num1 y num2\n");
scanf("%f %f", &num1,&num2);

suma = num1+num2;
resta = num1-num2;

printf("La suma es de %f\nLa resta es de %f\n", suma, resta);
return 0;
}