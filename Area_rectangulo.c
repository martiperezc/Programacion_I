#include<stdio.h>
float base_mayor, base_menor, altura, area;


int main(){
    printf("Ingrese la base mayor\n");
    scanf("%f", &base_mayor);
    printf("Ingrese la base menor\n");
    scanf("%f", &base_menor);
    printf("Ingrese la altura\n");
    scanf("%f", &altura);
    area = ((base_mayor + base_menor) * altura) /2;
    printf("El area es: %.2f\n", area);
    
}
