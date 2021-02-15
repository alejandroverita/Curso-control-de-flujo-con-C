#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Instrucciones: pide al usuario que indique su nombre
    y su edad. Como mensaje de salida le indicarás que edad
    tuvo el año pasado y cuantos años tendrá el siguiente año.
    Ejemplo: [nombre] el año pasado tenías X años y el próximo año
    cumplirás Y años.
    */

    int edad;

    printf("Edad futura y pasada!\n");

    printf("Ingresa tu edad: \n");

    scanf("%i", &edad);

    printf("El anio pasado tuviste %i y el proximo agno tendras %i", edad-1, edad+1);


    return 0;
}
