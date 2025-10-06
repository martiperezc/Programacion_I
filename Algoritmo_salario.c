#include<stdio.h>

char nombre[40];
int salario;
float aumento_salario;



int main(){
    printf("Ingrese su nombre: \n");
    gets(nombre);
    printf("Hola, %s\n", nombre);
    printf("Ingresa tu salario\n");
    scanf("%i", &salario);
    aumento_salario = (salario*.1)+ salario;
    printf("Felicidades %s\nTu nuevo salario es %.2f", nombre, aumento_salario);
    return 0;


}