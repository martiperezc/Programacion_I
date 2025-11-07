#include<stdio.h>
#include<string.h>

float prom_est_1 =0, n_mayor_est1 =0, n_menor_est1 =0, n_mayor_asg1 =0, n_menor_asg1=0, prom_califaciones_asg1 = 0;
float prom_est_2 =0, n_mayor_est2 =0, n_menor_est2 =0, n_mayor_asg2 =0, n_menor_asg2 =0, prom_califaciones_asg2 = 0;
float prom_est_3 =0, n_mayor_est3 =0, n_menor_est3 =0, n_mayor_asg3 =0, n_menor_asg3 =0, prom_califaciones_asg3 = 0;
float prom_est_4 =0, n_mayor_est4 =0, n_menor_est4 =0;
float prom_est_5 =0, n_mayor_est5 =0, n_menor_est5 =0; 
float notas[5][3];

int est_aprobados_asg1 =0, est_reprobados_asg1=0, est_aprobados_asg2 =0,  est_reprobados_asg2=0, est_aprobados_asg3 =0,  est_reprobados_asg3=0, k=1, l=1;
char n_est_1 [20],n_est_2 [20], n_est_3 [20], n_est_4 [20], n_est_5 [20], n_asignatura_1 [15], n_asignatura_2 [15], n_asignatura_3 [15];

float notas[5][3];



int main (){
    printf("Bienvenido al codigo de gestion de notas por estudiante\n");
    for(int i=1; i<=5; i++){ //Bucle para almacenar seguidamente el nombre de los estudiantes
        switch (i)
        {
        case 1:
            printf("Ingrese el nombre y apellido del primer estudiante a registrar\n");
            fgets(n_est_1, sizeof(n_est_1),stdin);
            n_est_1[strcspn(n_est_1,"\n")]='\0';
            break;

        case 2:
            printf("Ingrese el nombre y apellido del segundo estudiante a registrar\n");
            fgets(n_est_2, sizeof(n_est_2),stdin);
            n_est_2[strcspn(n_est_2,"\n")]='\0';
            break;
        case 3:
            printf("Ingrese el nombre y apellido del tercer estudiante a registrar\n");
            fgets(n_est_3, sizeof(n_est_3),stdin);
            n_est_3[strcspn(n_est_3,"\n")]='\0';
            break;
        case 4:
            printf("Ingrese el nombre y apellido del cuarto estudiante a registrar\n");
            fgets(n_est_4, sizeof(n_est_4),stdin);
            n_est_4[strcspn(n_est_4,"\n")]='\0';
            break;
        case 5:
            printf("Ingrese el nombre y apellido del quinto y ultimo estudiante a registrar\n");
            fgets(n_est_5, sizeof(n_est_5),stdin);
            n_est_5[strcspn(n_est_5,"\n")]='\0';
            break;
        default:
            break;
        }
    }
    for (int i=1;i<=3;i++){ // Bucle para almacenar el nombre de las asignaturas
        switch (i)
        {
        case 1:
            printf("Ingrese la primera materia, de la que llevara registro\n");
            fgets(n_asignatura_1, sizeof(n_asignatura_1),stdin);
            n_asignatura_1[strcspn(n_asignatura_1, "\n")]='\0';
            break;
        case 2:
            printf("Ingrese la segunda materia, de la que llevara registro\n");
            fgets(n_asignatura_2, sizeof(n_asignatura_2),stdin);
            n_asignatura_2[strcspn(n_asignatura_2, "\n")]='\0';
            break;
        case 3:
            printf("Ingrese la tercera materia, de la que llevara registro\n");
            fgets(n_asignatura_3, sizeof(n_asignatura_3),stdin);
            n_asignatura_3[strcspn(n_asignatura_3, "\n")]='\0';
            break;
        default:
            break;
        }
    }

    for(int i=0; i<5; i++){  // Bucles que recorren la matriz de datos, para almacenar las notas.
        for (int j=0; j<3; j++){
            printf("Ingrese la nota para el estudiante: %i\t,  en la materia: %i\n", k, l);
            scanf("%f", &notas[i][j]);
            l++;
            while (notas[i][j]<0 || notas [i][j]>10){  //Bucle para validar datos entre 0 y 10
                printf("Esa nota no es valida, ingrese una nota entre 0 y 10\n");
                notas[i][j]=0;
                printf("Ingrese la nota para el estudiante: %i\t  en la materia: %i\n", i, j);
                scanf("%f", &notas[i][j]);
            }
            
            
        }
        k++;
        l=1;
    }

    //Bucle para calcular el PROMEDIO por estudiante
    //Estudiante 1:
    for(int j=0;j<3;j++){
        prom_est_1+= notas[0][j];
    }
        prom_est_1= (prom_est_1/3);
   
    //Estudiante 2:
    for(int j=0;j<3;j++){
        prom_est_2+= notas[1][j];
    }
        prom_est_2= (prom_est_2/3);

    //Estudiante 3:
        for(int j=0;j<3;j++){
        prom_est_3+= notas[2][j];
    }
        prom_est_3= (prom_est_3/3);

    //Estudiante 4:
        for(int j=0;j<3;j++){
        prom_est_4+= notas[3][j];
    }
        prom_est_4= (prom_est_4/3);
    
    //Estudiante 5:
         for(int j=0;j<3;j++){
        prom_est_5+= notas[4][j];
    }
        prom_est_5= (prom_est_5/3);
  


    //Bucle para calcular la NOTA MENOR y MAYOR estudiante 1
   n_mayor_est1=notas[0][0];
   n_menor_est1=notas[0][0];
    for(int j=0;j<3;j++){
        if (notas[0][j]>n_mayor_est1){
            n_mayor_est1= notas[0][j];
        } else if(n_menor_est1>notas[0][j]){
            n_menor_est1=notas[0][j];
        }
    }
    //Estudiante 2:
    n_mayor_est2=notas[1][0];
    n_menor_est2=notas[1][0];
    for(int j=0;j<3;j++){
        if (notas[1][j]>n_mayor_est2){
            n_mayor_est2= notas[1][j];
        } else if(n_menor_est2>notas[1][j]){
            n_menor_est2=notas[1][j];
        }
    }
    //Estudiante 3:
    n_mayor_est3=notas[2][0];
    n_menor_est3=notas[2][0];
    for(int j=0;j<3;j++){
        if (notas[2][j]>n_mayor_est3){
            n_mayor_est3= notas[2][j];
        } else if(n_menor_est3>notas[2][j]){
            n_menor_est3=notas[2][j];
        }
    }
    //Estudiante 4:
    n_mayor_est4=notas[3][0];
    n_menor_est4=notas[3][0];
    for(int j=0;j<3;j++){
        if (notas[3][j]>n_mayor_est4){
            n_mayor_est4= notas[3][j];
        } else if(n_menor_est4>notas[3][j]){
            n_menor_est4=notas[3][j];
        }
    }
    //Estudiante 5:
    n_mayor_est5=notas[4][0];
    n_menor_est5=notas[4][0];
    for(int j=0;j<3;j++){
        if (notas[4][j]>n_mayor_est5){
            n_mayor_est5= notas[4][j];
        } else if(n_menor_est5>notas[4][j]){
            n_menor_est5=notas[4][j];
        }
    }

    //Bucle para calcular la NOTA mas ALTA y BAJA por MATERIA
    //MATERIA 1:
    n_mayor_asg1=notas[0][0];
    n_menor_asg1=notas[0][0];
    for (int i=0;i<5;i++){
        prom_califaciones_asg1+=notas[i][0]; // Suma todas las calificaciones de Materia 1
        if(notas[i][0]>=6){ //Evalua cuantos estudiantes aprobaron materia 1
            est_aprobados_asg1++;
        } else {            //Evalua cuantos estudiantes reprobaron materia 1
            est_reprobados_asg1++;
        }
        if(notas[i][0]>n_mayor_asg1){
            n_mayor_asg1=notas[i][0];
        } else if(n_menor_asg1>notas[i][0]){
            n_menor_asg1=notas[i][0];
        }
    }
    prom_califaciones_asg1= (prom_califaciones_asg1/5); // Calcula el promedio de todas las calificaciones Materia 1.

    //MATERIA 2:
    n_mayor_asg2=notas[0][1];
    n_menor_asg2=notas[0][1];
    for (int i=0;i<5;i++){
        prom_califaciones_asg2+=notas[i][1]; // Suma todas las calificaciones de Materia 2
         if(notas[i][1]>=6){ //Evalua cuantos estudiantes aprobaron materia 2
            est_aprobados_asg2++;
        } else {            //Evalua cuantos estudiantes reprobaron materia 2
            est_reprobados_asg2++;
        }
        if(notas[i][1]>n_mayor_asg2){
            n_mayor_asg2=notas[i][1];
        } else if(n_menor_asg2>notas[i][1]){
            n_menor_asg2=notas[i][1];
        }
    }
    prom_califaciones_asg2= (prom_califaciones_asg2/5); // Calcula el promedio de todas las calificaciones Materia 2.

    //MATERIA 3:
    n_mayor_asg3=notas[0][2];
    n_menor_asg3=notas[0][2];
    for (int i=0;i<5;i++){
        prom_califaciones_asg3+=notas[i][2]; // Suma todas las calificaciones de Materia 3
         if(notas[i][2]>=6){ //Evalua cuantos estudiantes aprobaron materia 3
            est_aprobados_asg3++;
        } else {            //Evalua cuantos estudiantes reprobaron materia 3
            est_reprobados_asg3++;
        }
        if(notas[i][2]>n_mayor_asg3){
            n_mayor_asg3=notas[i][2];
        } else if(n_menor_asg3>notas[i][2]){
            n_menor_asg3=notas[i][2];
        }
    }
    prom_califaciones_asg3= (prom_califaciones_asg3/5); // Calcula el promedio de todas las calificaciones Materia 3.

    //Imprimir promedio, y nota de estudiante mas alta y baja
    //Estudiante 1
    printf("El estudiante: %s\t tuvo un promedio de: %.2f \t su nota mas alta fue: %.2f\t su nota mas baja fue: %.2f\n", n_est_1, prom_est_1, n_mayor_est1, n_menor_est1);

    //Estudiante 2
    printf("El estudiante: %s\t tuvo un promedio de: %.2f \t su nota mas alta fue: %.2f\t su nota mas baja fue: %.2f\n", n_est_2, prom_est_2, n_mayor_est2, n_menor_est2);

    //Estudiante 3
    printf("El estudiante: %s\t tuvo un promedio de: %.2f \t su nota mas alta fue: %.2f\t su nota mas baja fue: %.2f\n", n_est_3, prom_est_3, n_mayor_est3, n_menor_est3);

    //Estudiante 4
    printf("El estudiante: %s\t tuvo un promedio de: %.2f \t su nota mas alta fue: %.2f\t su nota mas baja fue: %.2f\n", n_est_4, prom_est_4, n_mayor_est4, n_menor_est4);

    //Estudiante 5
    printf("El estudiante: %s\t tuvo un promedio de: %.2f \t su nota mas alta fue: %.2f\t su nota mas baja fue: %.2f\n\n", n_est_5, prom_est_5, n_mayor_est5, n_menor_est5);

    //Imprimir promedio de calificaciones por materia, nota mas alta y baja, num estudiantes aprobados y reprobados
    //Materia 1
    printf("El promedio de calificaciones en la materia: %s\t fue: %.2f\n La calificacion mas alta fue: %.2f\t calificacion mas baja: %.2f\n Estudiantes Aprobados: %i\t Estudiantes Reprobados: %i\n", n_asignatura_1, prom_califaciones_asg1, n_mayor_asg1, n_menor_asg1, est_aprobados_asg1, est_reprobados_asg1);
    //Materia 2
    printf("El promedio de calificaciones en la materia: %s\t fue: %.2f\n La calificacion mas alta fue: %.2f\t calificacion mas baja: %.2f\n Estudiantes Aprobados: %i\t Estudiantes Reprobados: %i\n", n_asignatura_2, prom_califaciones_asg2, n_mayor_asg2, n_menor_asg2, est_aprobados_asg2, est_reprobados_asg2);
    //Materia 3
    printf("El promedio de calificaciones en la materia: %s\t fue: %.2f\n La calificacion mas alta fue: %.2f\t calificacion mas baja: %.2f\n Estudiantes Aprobados: %i\t Estudiantes Reprobados: %i\n", n_asignatura_3, prom_califaciones_asg3, n_mayor_asg3, n_menor_asg3, est_aprobados_asg3, est_reprobados_asg3); 

    





    
    return 0;
}