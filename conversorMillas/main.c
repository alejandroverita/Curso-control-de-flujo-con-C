#include <stdio.h>
#include <stdlib.h>

int main()
{

    float millasRecorridas;
    float millaKilimetro=1.609344;
    float conversion;

    printf("Conversor de millas \n");

    printf("Cuantas millas has recorrido?: \n");
    scanf("%f", &millasRecorridas);

    conversion= (millasRecorridas*millaKilimetro)/1;

    printf("Has recorrido %.2f km ", conversion);

    return 0;
}
