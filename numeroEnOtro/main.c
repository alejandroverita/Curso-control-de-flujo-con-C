#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Instrucciones: pide al usuario ingresar un número mayor
    a 1000 y otro menor a 100. Indica de una forma sencilla
    de entender al usuario cuantas veces cabe el número menor
    a 100 en el número mayor a 1000 */
    int highestNumber;
    int lowerNumber;
    float amount;


    printf("Cuantas veces un numero en otro!\n");

    printf ("Ingresa un entero mayor a 1000 \n");
    scanf("%i", &highestNumber);

    printf("Ingresa un entero menor a 100: \n");
    scanf("%i", &lowerNumber);

    amount=highestNumber/lowerNumber;

    printf("La cantidad de veces que cabe %i en %i es de %.2f \n", lowerNumber, highestNumber, amount );

    return 0;
}
