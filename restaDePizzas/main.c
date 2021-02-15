#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rebanadasInicio;
    int rebanadasFinal;
    int total;

    printf("Resta de pizzas!\n");

    printf("Has llegado a la fiesta. \n Cuantas rebanadas de pizza hay? \n");
    scanf("%i", &rebanadasInicio);

    printf("Ha pasado media hora. \n Cuantas rebanadas de pizza hay ahora? \n");
    scanf("%i", &rebanadasFinal);

    total = rebanadasInicio - rebanadasFinal;

    printf("Se han comido: %i en media hora \n", total);
    return 0;
}
