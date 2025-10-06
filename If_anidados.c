#include<stdio.h>
#define Tarifa1 "Basico"
#define Tarifa2 "Intermedio"
#define Tarifa3 "Premium"

int main(){
    
    float precio, plan;

    printf("Ingrese el monto que esta dispuesto a pagar\n");
    scanf("%f", &precio);

    if (precio < 500 && precio>99){
        printf("Te alcanza para el plan: %s", Tarifa1);

    }  if(precio<1000 && precio>500){
        printf("Te alcanza para el plan: %s", Tarifa2);

    }   if(precio<1500 && precio>1000){

        printf("Te alcanza para el plan: %s", Tarifa3);
    }
    return 0;

}