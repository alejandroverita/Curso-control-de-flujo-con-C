#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Instrucciones: pide al usuario que indique su nombre
    y su edad. Como mensaje de salida le indicar�s que edad
    tuvo el a�o pasado y cuantos a�os tendr� el siguiente a�o.
    Ejemplo: [nombre] el a�o pasado ten�as X a�os y el pr�ximo a�o
    cumplir�s Y a�os.
    */

    int edad;

    printf("Edad futura y pasada!\n");

    printf("Ingresa tu edad: \n");

    scanf("%i", &edad);

    printf("El anio pasado tuviste %i y el proximo agno tendras %i", edad-1, edad+1);


    return 0;
}
