#include<stdio.h>


int main(){
    int num_button = 0, suma =0, cont=0;

    printf("Bienvenido a Resident Evil\n");
    do{
 
        printf("Ingrese un num del 1 al 10\n");
        scanf("%i", &num_button);

        switch (num_button)
        {
        case 1: (suma += num_button);
        case 2: (suma += num_button);
        case 3: (suma += num_button);
        case 4: (suma += num_button);
        case 5: (suma += num_button);
        case 6: (suma += num_button);
        case 7: (suma += num_button);
        case 8: (suma += num_button);
        case 9: (suma += num_button);
 
        default:
            printf("Ese numero no es valido, ingresa un numero del 1 al 9\n");
            return 0; 
        }
        cont++;
        if(cont==10){
            printf("La suma es: %i\n", suma);
        } else if(cont<10){
            continue;
        }
        if (suma==67){
            printf("Ganaste\n");
            suma = 0;
            break; 
        } else {
            printf("Perdiste, intentalo de nuevo\n");
            suma = 0;
            cont = 0;
            continue;
        }

    } while (suma<67 || suma > 67);

    
return 0;

}