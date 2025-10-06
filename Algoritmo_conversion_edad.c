#include<stdio.h>
// 1 year = 12 meses
//1 mes = 4 semanas
// 1 semana = 7 dias
// 1 dia = 24 horas
int years;
int meses;
int semanas;
int dias;
int horas;


int main(){
    printf("Ingresa tu edad in years\n");
    scanf("%i", &years);
    meses = years*12;
    semanas = meses*4;
    dias = semanas*7;
    horas = semanas*24;
    printf("Tu edad in years %i\nTu edad en meses %i\nTu edad en semanas %i\nTu edad en dias %i\nTu edad en horas %i\n", years, meses, semanas, dias, horas);

    return 0;
}