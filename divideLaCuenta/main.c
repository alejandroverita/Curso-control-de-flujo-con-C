#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Instrucciones: vas con tus amigos a tu restaurante favorito
    y acuerdan dividir la cuenta. Para facilitar las cosa pedirás
    al usuario que indique el total a pagar, entre cuantas
    personas se dvidirá la cuenta, porcentaje de propina a
    incluir, un porcentaje de impuestos, total a pagar
    incluyendo propina más impuestos y el total a pagar por cada
    persona.*/

    float totalAPagar;
    int division;
    float propina;
    float impuestos;
    float pagaCadaUno;

    printf("Divide la cuenta!\n");

    printf("Cuanto es el total a pagar?: \n");
    scanf("%f", &totalAPagar);

    printf("Entre cuantas persona se divide la cuenta?: \n");
    scanf("%i", &division);

    //propina igual al 10% del total a pagar;

    propina= totalAPagar*0.10;
    printf ("La propina es de: %.2f \n", propina);

    impuestos= totalAPagar*0.12;

    printf("El total de impuestos a pagar es de: %.2f \n", impuestos);

    totalAPagar+=propina+impuestos;

    pagaCadaUno=totalAPagar/division;

    printf("Cada uno le toca pagar: %.2f \n", pagaCadaUno);


    return 0;
}
