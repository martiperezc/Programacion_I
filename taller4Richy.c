#include <stdio.h>
#include <string.h>

int main(){
 
    char productos[5][30];
    float Tfabricacion[5]={0};
    int recursos[5]={0};
    int demanda[5]={0};
    int Limrecursos;
    float Limtiempo;
    float tiempototal;
    int recursostotales = 0;


for (int i = 0; i < 5 ; i++) {
    printf("porfavor ingrese el nombre del producto %d\n", i+1);
    scanf(" %s", productos[i]);
    printf("Ingrese el tiempo de fabricacion del producto %d\n", i+1);
    scanf(" %f", &Tfabricacion[i]);
    printf("Ingrese la cantidad de recursos necesarios para el producto %d\n", i+1);
    scanf(" %d", &recursos[i]);
    printf("Ingrese la cantidad demandada del producto %d\n", i+1);
    scanf(" %d", &demanda[i]);
}
 printf("porfavor ingrese el limite de tiempo para la produccion\n");
 scanf(" %f", &Limtiempo);
 printf("porfavor ingrese el limite de recursos disponibles\n");
 scanf(" %f", &Limrecursos);


for (int i = 0; i < 5; i++) {
    tiempototal += Tfabricacion[i] * demanda[i];
}

printf("tiempo total de fabricacion requerido para cumplir con la demanda: %.2f horas\n", tiempototal);

for (int i = 0; i < 5; i++) {
    recursostotales += recursos[i] * demanda[i];
}
printf("cantidad de recursos necesarios para producir los productos: %d\n", recursostotales);

if (tiempototal <= Limtiempo && recursostotales <= Limrecursos) {
    printf("se puede cumplir con la demanda\n");
} else {
    printf("no se puede cumplir con la demanda\n");
}

 
 char desicion[25];
 int condicion;
 
 printf("Desea ingresar al menu si/no\n");
 scanf(" %s", desicion);

 if (strcmp(desicion, "si")==0){
     condicion = 1;
 }else {
     condicion = 0;
     printf("saliendo del programa");
     return 1;
 }
 
 char salidaedit[25];

if (condicion == 1)
{
    printf("Bienvenid@ al menu, sus productos ingresados son:\n");

   for (int i = 0; i < 5 ; i++) {
       printf(" %d) %s\n", i+1, productos[i]);
   }

   printf(" 6) Limite de tiempo\n 7)Limite de recursos\n");

}
 printf("acciones que puede realizar:\n -Editar informacion\t -Eliminar producto\n");
 printf("para realizar una accion escriba su nombre: editar o eliminar\n");

 char accion[25];
 int desicion2;

 printf("que accion desea realizar?\n");
 scanf(" %s", accion);


if (strcmp( accion, "editar")==0) 
{ 
    do{
        int num;
    printf("escriba el numero del objeto a editar:\n");
    for (int i = 0; i < 5 ; i++) {
       printf(" %d) %s\n", i+1, productos[i]);
   }

   printf(" 6) Limite de tiempo\n 7)Limite de recursos\n");
   scanf(" %d", &num);

    int eleccion;
    char salida[25];

    switch (num){
    case 1:
        
        do{

        printf("eligio %s\n", productos[0]);
        printf("que desea editar, escriba el numero\n");
        printf("1) Tiempo de fabricacion %.2f\n", Tfabricacion[0]);
        printf("2) Cantidad de recursos necesarios %d\n", recursos[0]);
        printf("3) Cantidad en demanda %d\n", demanda[0]);
        scanf(" %d", &eleccion);

        switch (eleccion)
        {
        case 1:
            printf("Ingrese el nuevo tiempo de fabricacion de %s\n", productos[0]);
            scanf(" %f", &Tfabricacion[0]);

            printf("Desea volver al editor de %s si/no\n", productos[0]);
            scanf(" %s", &salida);

            printf("desea volver al menu general del editor ? si/no\n");
            scanf("%s", salidaedit);

            break;
        case 2:
            printf("Ingrese la nueva cantidad de recursos para %s\n", productos[0]);
            scanf(" %d", &recursos[0]);

            printf("Desea volver al editor de %s si/no\n", productos[0]);
            scanf(" %s", &salida);

             printf("desea volver al menu general del editor ? si/no\n");
            scanf("%s", salidaedit);

            break;
        
        default:
            printf("Ingrese la nueva demanda de %s\n", productos[0]);
            scanf(" %d", &demanda[0]);

            printf("Desea volver al editor de %s si/no\n", productos[0]);
            scanf(" %s", &salida);

             printf("desea volver al menu general del editor ? si/no\n");
            scanf("%s", salidaedit);

            break;

        } 
        } while (strcmp(salida, "si")==0);//hasta aqui 
    break;

    case 2:

        do{

        printf("eligio %s\n", productos[1]);
        printf("que desea editar, escriba el numero\n");
        printf("1) Tiempo de fabricacion %.2f\n", Tfabricacion[1]);
        printf("2) Cantidad de recursos necesarios %d\n", recursos[1]);
        printf("3) Cantidad en demanda %d\n", demanda[1]);
        scanf(" %d", &eleccion);

        switch (eleccion)
        {
        case 1:
            printf("Ingrese el nuevo tiempo de fabricacion de %s\n", productos[1]);
            scanf(" %f", &Tfabricacion[1]);

            printf("Desea volver al editor de %s si/no\n", productos[1]);
            scanf(" %s", &salida);

             printf("desea volver al menu general del editor ? si/no\n");
            scanf("%s", salidaedit);

            break;
        case 2:
            printf("Ingrese la nueva cantidad de recursos para %s\n", productos[1]);
            scanf(" %d", &recursos[1]);

            printf("Desea volver al editor de %s si/no\n", productos[1]);
            scanf(" %s", &salida);

             printf("desea volver al menu general del editor ? si/no\n");
            scanf("%s", salidaedit);

            break;
        
        default:
            printf("Ingrese la nueva demanda de %s\n", productos[1]);
            scanf(" %d", &demanda[1]);

            printf("Desea volver al editor de %s si/no\n", productos[1]);
            scanf(" %s", &salida);

             printf("desea volver al menu general del editor ? si/no\n");
            scanf("%s", salidaedit);

            break;

        } 
        } while (strcmp(salida, "si")==0);//hasta aqui 
    break;

    case 3:
    
        do{

        printf("eligio %s\n", productos[2]);
        printf("que desea editar, escriba el numero\n");
        printf("1) Tiempo de fabricacion %.2f\n", Tfabricacion[2]);
        printf("2) Cantidad de recursos necesarios %d\n", recursos[2]);
        printf("3) Cantidad en demanda %d\n", demanda[2]);
        scanf(" %d", &eleccion);

        switch (eleccion)
        {
        case 1:
            printf("Ingrese el nuevo tiempo de fabricacion de %s\n", productos[2]);
            scanf(" %f", &Tfabricacion[2]);

            printf("Desea volver al editor de %s si/no\n", productos[2]);
            scanf(" %s", &salida);

             printf("desea volver al menu general del editor ? si/no\n");
            scanf("%s", salidaedit);

            break;
        case 2:
            printf("Ingrese la nueva cantidad de recursos para %s\n", productos[2]);
            scanf(" %d", &recursos[2]);

            printf("Desea volver al editor de %s si/no\n", productos[2]);
            scanf(" %s", &salida);

             printf("desea volver al menu general del editor ? si/no\n");
            scanf("%s", salidaedit);

            break;
        
        default:
            printf("Ingrese la nueva demanda de %s\n", productos[2]);
            scanf(" %d", &demanda[2]);

            printf("Desea volver al editor de %s si/no\n", productos[2]);
            scanf(" %s", &salida);

             printf("desea volver al menu general del editor ? si/no\n");
            scanf("%s", salidaedit);

            break;

        } 
        } while (strcmp(salida, "si")==0);//hasta aqui 
    break;

    case 4:
        do{

        printf("eligio %s\n", productos[3]);
        printf("que desea editar, escriba el numero\n");
        printf("1) Tiempo de fabricacion %.2f\n", Tfabricacion[3]);
        printf("2) Cantidad de recursos necesarios %d\n", recursos[3]);
        printf("3) Cantidad en demanda %d\n", demanda[3]);
        scanf(" %d", &eleccion);

        switch (eleccion)
        {
        case 1:
            printf("Ingrese el nuevo tiempo de fabricacion de %s\n", productos[3]);
            scanf(" %f", &Tfabricacion[3]);

            printf("Desea volver al editor de %s si/no\n", productos[3]);
            scanf(" %s", &salida);

             printf("desea volver al menu general del editor ? si/no\n");
            scanf("%s", salidaedit);

            break;
        case 2:
            printf("Ingrese la nueva cantidad de recursos para %s\n", productos[3]);
            scanf(" %d", &recursos[3]);

            printf("Desea volver al editor de %s si/no\n", productos[3]);
            scanf(" %s", &salida);

             printf("desea volver al menu general del editor ? si/no\n");
            scanf("%s", salidaedit);

            break;
        
        default:
            printf("Ingrese la nueva demanda de %s\n", productos[3]);
            scanf(" %d", &demanda[3]);

            printf("Desea volver al editor de %s si/no\n", productos[3]);
            scanf(" %s", &salida);

             printf("desea volver al menu general del editor ? si/no\n");
            scanf("%s", salidaedit);

            break;

        } 
        } while (strcmp(salida, "si")==0);//hasta aqui 
    break;

    case 5:
      do{

        printf("eligio %s\n", productos[4]);
        printf("que desea editar, escriba el numero\n");
        printf("1) Tiempo de fabricacion %.2f\n", Tfabricacion[4]);
        printf("2) Cantidad de recursos necesarios %d\n", recursos[4]);
        printf("3) Cantidad en demanda %d\n", demanda[4]);
        scanf(" %d", &eleccion);

        switch (eleccion)
        {
        case 1:
            printf("Ingrese el nuevo tiempo de fabricacion de %s\n", productos[4]);
            scanf(" %f", &Tfabricacion[4]);

            printf("Desea volver al editor de %s si/no\n", productos[4]);
            scanf(" %s", &salida);

             printf("desea volver al menu general del editor ? si/no\n");
            scanf("%s", salidaedit);

            break;
        case 2:
            printf("Ingrese la nueva cantidad de recursos para %s\n", productos[4]);
            scanf(" %d", &recursos[4]);

            printf("Desea volver al editor de %s si/no\n", productos[4]);
            scanf(" %s", &salida);

             printf("desea volver al menu general del editor ? si/no\n");
            scanf("%s", salidaedit);

            break;
        
        default:
            printf("Ingrese la nueva demanda de %s\n", productos[4]);
            scanf(" %d", &demanda[4]);

            printf("Desea volver al editor de %s si/no\n", productos[4]);
            scanf(" %s", &salida);

             printf("desea volver al menu general del editor ? si/no\n");
            scanf("%s", salidaedit);

            break;

        } 
        } while (strcmp(salida, "si")==0);//hasta aqui 
    break;

    case 6:
        printf("eligio tiempo limite de la fabrica\n ingrese el nuevo tiempo limite para la produccion\n");
        scanf("%f", &Limtiempo);

         printf("desea volver al menu general del editor ? si/no\n");
            scanf("%s", salidaedit);

    break;

    default:
        printf("eligio Limite de recursos disponibles\n ingrese el nuevo limite de recursos disponibles\n");
        scanf("%d", &Limrecursos);

         printf("desea volver al menu general del editor ? si/no\n");
            scanf("%s", salidaedit);
    break;
        }
    } while (strcmp(salidaedit, "si")==0);
    
    
    }else {
        int elim;
        char salidaelim[25];

        do
        {
        printf("esta en la opcion eliminar\n elija el producto a eliminar\n");
        printf("escriba el numero\n");

        for (int i = 0; i < 5 ; i++) {
       printf(" %d) %s\n", i+1, productos[i]);
        }
       scanf("%d", &elim);

       switch (elim){
       case 1:

        strcpy(productos[0], "[ELIMINADO]");
        Tfabricacion[0]=0;
        recursos[0]=0;
        demanda[0]=0;

        printf("desea volver al menu de eliminacion? si/no");
        scanf("%s", salidaelim);
        break;

        case 2:
        strcpy(productos[1], "[ELIMINADO]");
        Tfabricacion[1]=0;
        recursos[1]=0;
        demanda[1]=0;

        printf("desea volver al menu de eliminacion? si/no");
        scanf("%s", salidaelim);
        break;

        case 3:
        strcpy(productos[2], "[ELIMINADO]");
        Tfabricacion[2]=0;
        recursos[2]=0;
        demanda[2]=0;

        printf("desea volver al menu de eliminacion? si/no");
        scanf("%s", salidaelim);
        break;

        case 4:
        strcpy(productos[3], "[ELIMINADO]");
        Tfabricacion[3]=0;
        recursos[3]=0;
        demanda[3]=0;

        printf("desea volver al menu de eliminacion? si/no");
        scanf("%s", salidaelim);
        break;
       
       default:
        strcpy(productos[4], "[ELIMINADO]");
        Tfabricacion[4]=0;
        recursos[4]=0;
        demanda[4]=0;

        printf("desea volver al menu de eliminacion? si/no\n");
        scanf("%s", salidaelim);
        break;
       }

        }while (strcmp(salidaelim, "si")==0);
        
        printf("nueva lista de productos\n");
        for (int i = 0; i < 5 ; i++) {
       printf(" %d) %s\n", i+1, productos[i]);
        }
    }

return 0;
}

