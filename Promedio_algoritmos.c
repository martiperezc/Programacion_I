#include<stdio.h>

//55% del promedio de las 3 notas parciales
//30% nota del examen final
//15% nota proyecto final

float p1,p2,p3, promedio_parciales, examen_final, proyecto_final, promedio_55, promedio_30, promedio_15, nota_final;



int main(){
    printf("Ingrese sus notas de parcial 1,2,3\n");
    scanf("%f %f %f", &p1, &p2, &p3);
    printf("Ingresar su nota del examen final\n");
    scanf("%f", &examen_final);
    printf("Ingresar su nota del proyecto final\n");
    scanf("%f", &proyecto_final);

    promedio_parciales = (p1+p2+p3)/3;
    promedio_55 = promedio_parciales*0.55;
    promedio_30 = examen_final*0.30;
    promedio_15 = proyecto_final*0.15;
    nota_final = promedio_55 + promedio_30 + promedio_15;


    printf("Su nota final es: %.2f\n",nota_final);






    return 0;
}