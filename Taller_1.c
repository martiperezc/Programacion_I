#include<stdio.h>
// Declaramos variables constantes
int id=0; //Vaiable para almacenar ID en numeros.
float precio_ud=0; 
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
int main(){

    int stock=0, menu=0, despacho=0, nuevo_producto=0, i=0;
    float ganancia=0;
    char name_producto[15];

    printf("Bienvenido al codigo de gestion de ventas de un unico producto\n");
    printf("Ingrese el ID de su producto\n");
    scanf("%i", &id); //Guardamos Id de producto
    printf("Ingrese el nombre del producto\n");
    scanf ("%s", &name_producto); //Guardamos nombre del producto
    printf("Ingrese el precio unitario del producto, recuerde que puede usar decimales\n");
    scanf("%f", &precio_ud); //Guardamos Precio del producto
    printf("Ingrese la cantidad en stock disponible\n");
    scanf("%i", &stock); //Guardamos cant de stock.


    do {
            printf("Ingrese el numero en pantalla, dependiendo la opcion que elija\n Venta de unidades (1)\n Agregar Stock (2)\n Consultar informacion del producto (3)\n Mostrar ganancias actuales (4)\n Salir del programa (5)\n");
            scanf("%i", &menu);

            switch (menu)
         {
         case 1:
            printf("Cuantas unidades desea vender?\n");
            scanf("%i", &despacho);
            if (despacho<=stock){
                stock= (stock-despacho);   
                ganancia= (ganancia+(despacho*precio_ud));
                printf("Se a realizado una venta, desea volver al menu para consultar sus ganancias?\nDonde:\n (1) es SI \n (0) es NO\n");
                scanf("%i", &i);
            } else {
                printf("No dispone de esa cantidad de stock, desea volver al menu principal para agregar unidades?\n Donde:\n (1) es SI \n (0) es NO\n");
                scanf("%i", &i);
                }
            break;

            case 2:
            printf("Cuantas unidades desea agregar?\n");
            scanf("%i", &nuevo_producto);
            stock +=nuevo_producto;
            printf("Desea volver al menu principal?\nDonde:\n (1) es SI \n (0) es NO\n");
            scanf("%i", &i);
            break;
             case 3:
            printf("Su informacion actualizada es:\n Id: %i\n Nombre del Producto: %s\n Stock: %i\n Precio Unitario: %.2f\n", id, name_producto, stock, precio_ud);
            printf("Desea volver al menu principal?\nDonde:\n (1) es SI \n (0) es NO\n");
            scanf("%i", &i);
            break;
             case 4:
            printf("Las ganancias son: %.2f\n", ganancia);
            printf("Desea volver al menu principal?\nDonde:\n (1) es SI \n (0) es NO\n");
            scanf("%i", &i);
            break;
            case 5:
            i=0;
            break;
            default:
            printf("Esa opcion no esta disponible\n");
            printf("Desea volver al menu principal?\nDonde:\n (1) es SI \n (0) es NO\n");
            scanf("%i", &i);
            break;
         }
            
    }    while (i==1);
return 0;
}


