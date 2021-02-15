#include <stdio.h>
#include <stdlib.h>

int main()
{

    int dias;
    int diasAHoras;
    int diasAMinutos;
    int diasASegundos;
    const int HORASDELDIA=24;
    const int MINUTOSDELDIA= 1440;
    const int SEGUNDOSDELDIA=86400;


    printf("Calculando dias \n");

    printf("Ingresa la cantidad de dias que queres saber en horas y minutos: ");
    scanf ("%i", &dias);


    diasAHoras= (dias*HORASDELDIA)/1;
    diasAMinutos = (dias*MINUTOSDELDIA)/1;
    diasASegundos=(dias*SEGUNDOSDELDIA)/1;

    printf("\n La cantidad de hora en %i dias es de %i \n", dias, diasAHoras);
    printf("\n La cantidad de minutos en %i dias es de %i \n", dias, diasAMinutos);
    printf("\n La cantidad de hora en %i dias es de %i \n", dias, diasASegundos);


    return 0;
}
