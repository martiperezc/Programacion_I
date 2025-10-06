#include<stdio.h>
#include<math.h>

void funcionMate();

int main(){
    funcionMate();
    return 0;
}

void funcionMate(){
    float a,resultado=0;

    printf("Escribe un numero\n");
    scanf("%f", &a);

    resultado = sin(a); //Calcula el arcoseno de a.
    printf("El resultado es: %.2f", resultado);

}