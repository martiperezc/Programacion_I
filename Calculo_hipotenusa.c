#include<stdio.h>
#include<math.h>

int main(){
    
    float cateto1, cateto2, hipotenusa;

    printf("Ingrese el valor del cateto 1 y cateto 2\n");
    scanf("%f %f", &cateto1, &cateto2);
    hipotenusa = sqrt(pow(cateto1,2) + pow(cateto2, 2));
    printf("La hipotenusa es %.2f\n", hipotenusa);


    return 0;
}