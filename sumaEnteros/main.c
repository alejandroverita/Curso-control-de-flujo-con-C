#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    donde pedir�s al usuario que ingrese 2 n�meros y
    muestre en pantalla el resultado. Si quieres a�adir
    m�s dificultad puedes utilizar n�meros con punto decimal
    y especificar el n�mero de decimales despu�s del punto.
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
