#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Suma y multiplicacion \n");

    int numero1;
    int numero2;
    int numero3;
    int resultado;

    printf("Suma y multiplica el tercer valor!\n");
    printf("Ingresa el primer numero \n");
    scanf("%i", &numero1);

    printf("Ingresa el segundo numero: \n");
    scanf("%i", &numero2);

    printf("Ingresa el tercer numero: \n");
    scanf("%i", &numero3);

    resultado = numero1 + numero2;

    printf("El resultado de la suma es: %i \n", resultado);

    resultado*= numero3;

    printf("El resultado de multiplicar por el ultimo valor es: %i \n", resultado);


    return 0;
}
