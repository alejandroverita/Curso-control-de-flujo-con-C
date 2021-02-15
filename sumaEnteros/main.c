#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    donde pedirás al usuario que ingrese 2 números y
    muestre en pantalla el resultado. Si quieres añadir
    más dificultad puedes utilizar números con punto decimal
    y especificar el número de decimales después del punto.
    Ejemplo: 2.5633 + 5.6883 = 8.25
    */

    int numero1;
    int numero2;
    int resultado;

    printf("Suma de enteros!\n");
    printf("Ingresa el primer numero \n");
    scanf("%i", &numero1);

    printf("Ingresa el segundo numero: \n");
    scanf("%i", &numero2);

    resultado = numero1 + numero2;

    printf("El resultado es: %i ", resultado);



    return 0;
}
