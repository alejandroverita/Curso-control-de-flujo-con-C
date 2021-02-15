

## ESTRUCTURAS DE DECISIÓN

Un statement es una línea de código o un solo comando que el programa compila de a uno a la vez.
Ejemplo:

`printf("Hello world \n");`

Por su parte, un bloque de código es un conjunto de varios statements que se compilan juntos, estos se agrupan con los corchetes “{}”.
Ejemplo:
    
    statment1;
    statment2;
    .
    .
    .
    statmentx;

Ahora ¿Cómo funcionan los “if’s”?
Sencillo, estas estructuras tienen el siguiente formato:

    if (condicion1)
    {
        statment1;
        statment2;
    }
    else if (condicion2)
    {
        statment3;
        statment4;
        statment5;
    }
    else if (condicion3)
        statment6;
    else
    {
        statment7;
        statment8;
        .
        .
        .
        statmentn;
    }

Aunque esté escrito en pseudocódigo funciona para darnos una idea.
Los ciclos if siempre van acompañados de una condición, si esta se cumple se realizarán los statments o el bloque de código correspondiente, y si no se cumple, se procederá a comparar con en el siguiente comparativo else if y checará la condición de este nuevo comparativo, si se cumple entrará al bloque de código y si no seguirá comparando con los else if restantes hasta llegar al comparativo else final que es el bloque a ejecutar por defecto.

**Notas:**

Veamos que en el segundo “else if”, no se utilizan corchetes ya que solo se ejecutará un statment.

La programación es secuencial, es decir, si se cumple por ejemplo la condición del primer if se ejecutará el bloque de código correspondiente y no comparará con los demás “else if” ni “else”. Por lo que si tenemos condiciones repetidas, siempre se ejecutará el bloque de código correspondiente a la condición cumplida que esté “más arriba” en el código.

<br>
[========]

##  EXPRESIÓN IF
`
    #include <stdio.h>
    int n = -1;
    
    int main()
    {
        if(n > 10 && n < 20)
        printf("el numero es mayor que diez, pero menor que 20");
        else if (n == 10)
        printf("el numero es diez");
        else if (n > 20)
        printf("el numero es mayor que veinte");
        else if(n < 10 && n >= 0)
        printf("el numero esta en el rango de 0 a 9");
        else
        printf("ERROR no quiero numeros negativos");
        return 0;
        
    }

Codigo de la clase: 
    
    `#include <stdio.h>
    int n = -1;
    
    int main()
        {
            if(n > 10 && n < 20)
            printf("el numero es mayor que diez, pero menor que 20");
            else if (n == 10)
            printf("el numero es diez");
            else if (n > 20)
            printf("el numero es mayor que veinte");
            else if(n < 10 && n >= 0)
            printf("el numero esta en el rango de 0 a 9");
            else
            printf("ERROR no quiero numeros negativos");
            return 0;
            
        }```

<br>
[========]



## IF ANIDADOS


    
    
    #include <stdio.h>
    int opt1;
    int opt2;
    
    int main(){
    printf("bienvenid a platzi store : \n");
    printf("opcion 0 para platzi bebidas \n");
    printf("opcion 1 para platzi comidas \n");
    printf("opcion 2 para platzi postres \n");
    
    scanf("%i", &opt1);
    
    // este programa genera menus segun lo que el usuario elija
    if(opt1 == 0){
        printf("usted eligio la opcion 0, vera nuestro menu de bebidas elija una:\n");
        printf("opcion 0 para platzi cola cero \n");
        printf("opcion 1 para platzi cola normal \n");
        printf("opcion 2 para platzi pina colada \n");
    
        scanf("%i", &opt2);
    
        if (opt2 == 0)
            printf("usted eligio una platzi cola cero, mmm rico");
        else if (opt2 == 1)
            printf("usted eligio una platzi cola cpn azucar, mmm rico");
        else if (opt2 == 2)
            printf("usted eligio una platzi pina colada con azucar, mmm rico");
        else
            printf("opcion invalida");
    }
    else if(opt1 ==1){
    
    
        printf("opcion 0 para encebollado \n");
        printf("opcion 1 para tonga \n");
        printf("opcion 2 para ceviche \n");
    
        scanf("%i", &opt2);
        if (opt2 == 0)
            printf("usted eligio un platzi encebollado, provecho buen hombre");
        else if (opt2 == 1)
            printf("usted eligio una rica tonga, lo máximo");
        else if (opt2 == 2)
            printf("usted eligio un buen ceviche, mmm rico");
        else
            printf("opcion invalida");
    }
    else if(opt1 ==2){
        printf("opcion 0 para arroz con leche \n");
        printf("opcion 1 para gelatina con helado \n");
        printf("opcion 2 para dulces de rocafuerte \n");
    
        scanf("%i", &opt2);
    
        if (opt2 == 0)
            printf("usted eligio un arroz con leche");
        else if (opt2 == 1)
            printf("usted eligio una gelatina con helado, excelente");
        else if (opt2 == 2)
            printf("usted eligio unos dulces de rocafuerte, bien ahi");
        else
            printf("opcion invalida");
    }
    else {
        printf("opcion invalida");
    }
    
    return 0;
    }
    




<br>
[========]


## EXPRESION SWITCH CASE 

    #include <stdio.h>
    
    int opt1 = 0;
    int opt2 = 0;
    
    int main()
    {
        // Este programa genera menus con Switch segun lo que el usuario elija
        printf("Bienvenido a Platzi Store \n");
        printf("Opcion 0 para Platzi Bebidas\n");
        printf("Opcion 1 para Platzi Comida \n");
        printf("Opcion 2 para Platzi Postres \n\n");
    
        switch(opt1)
        {
            case 0:
                printf("Usted eligio la opcion 0, vera nuestro menu de bebidas, elija una \n\n");
                printf("Opcion 0 para Platzi cola 0 \n");
                printf("Opcion 1 para Platzi Cola normal \n");
                printf("Opcion 2 para Platzi Cola colada \n\n");
    
                switch(opt2)
                {
                    case 0:
                        printf("Usted eligio una platzi cola cero \n");
                    break;
    
                    case 1:
                        printf("Usted eligio una platzi cola con azucar \n");
                    break;
    
                    case 2:
                        printf("Usted eligio una platzi colada \n");
                    break;
    
                    default:
                        printf("Opcion invalida");
                    break;
                }
    
            break;
    
            case 1:
                printf("Usted eligio la opcion 1, vera nuestro menu de comida, elija una \n\n");
                printf("Opcion 0 para Platzi sopa 0 \n");
                printf("Opcion 1 para Platzi guisado \n");
                printf("Opcion 2 para Platzi arroz \n\n");
    
                switch(opt2)
                {
                    case 0:
                        printf("Usted eligio una platzi sopa \n");
                    break;
    
                    case 1:
                        printf("Usted eligio un platzi guisado \n");
                    break;
    
                    case 2:
                        printf("Usted eligio un platzi arroz \n");
                    break;
    
                    default:
                        printf("Opcion invalida");
                    break;
                }
    
            break;
    
            case 2:
                printf("Usted eligio la opcion 2, vera nuestro menu de postres, elija uno \n\n");
                printf("Opcion 0 para Platzi helado \n");
                printf("Opcion 1 para Platzi pastel \n");
                printf("Opcion 2 para Platzi galletas \n\n");
    
                switch(opt2)
                {
                    case 0:
                        printf("Usted eligio un platzi helado \n");
                    break;
    
                    case 1:
                        printf("Usted eligio un platzi pastel \n");
                    break;
    
                    case 2:
                        printf("Usted eligio una platzi galletas \n");
                    break;
    
                    default:
                        printf("Opcion invalida");
                    break;
                }
    
            break;
    
            default:
                printf("Opcion invalida");
            break;
        }
    
        return 0;
    }



<br>
[========]



## BUCLE WHILE


While es considerado un ciclo 0.X, es decir que puede ejecutarse muchas veces (incluso infinitas cuando la condición siempre es verdadera), o puede que no se ejecute ni una sola vez (cuando la condición es falsa antes de iniciar el ciclo)

while es particularmente útil cuando la cantidad de repeticiones del ciclo es desconocida. Ej Contar la cantidad de días sin lluvia, Determinar la cantidad de vehículos que pasarán por una avenida en una hora, imprimir la palabra “error” hasta que el usuario ingrese el password correcto.


Sintaxis:

    while(expression)
    {
    expressions;
    }

Código:

    #include <stdio.h>
    int n = 10;
    int main()
    {
    while (n > 10){
    printf(“n es igual a %d\n”, n);
    n = n-1;
    }
    printf(“hemos salido del bucle porque n es igual o menor que 10”);
    return 0;
    }

<br>
[========]


## BUCLE DO WHILE

    #include <stdio.h>
    int num = 11;
    
    int main(){
        do{
            printf("num es igual a %d\n", num);
            num -= 1;
        } while (num>=10);
    
        printf("Ciclo terminado!");
    
        return 0;
    }


<br>
[========]

## BUCLE FOR

    #include <stdio.h>
    
    int main()
    { 
      int n = 11;
      int i;
      printf("Numeros del 1 al 10\n");
    
      for(i = 1; i < 11; i++)
      {
        printf("n es: %i \n", i);
      }
    }

<br>
[========]

## EXPRESIÓN BREAK
Con el break podemos detener el flujo de datos si se cumple en la sentencia while

<br>
[========]



## EXPRESIÓN CONTINUE

Continue: Salta unicaménte una iteración, pero el ciclo continua

Continue nos sirve para cuando algo muy especifico que se esta detectando con un if dentro de un ciclo (while, Do while, for), quieres que se salte, es decir que no se ejecute y que siga la siguiente iteración.
<br>
[========]

## EXPRESIÓN GOTO

En el libro de Algoritmos a fondo con implementaciones en C y Java, escrito por el Ing. Pablo Augusto Sznajdleder.

Dice, la estructura “ir a” o, en inglés, “go to” o “goto”. Esta estructura quedó descartada luego de que el teorema de la programación estructurada demostrara que con una adecuada combinación de las **tres estructuras de control **(secuenciales, selectivas e iterativas) es posible resolver cualquier algoritmo sin tener que recurrir al **“goto" ** (o estructura “ir a”). Esta estructura se quedó en desuso porque trae grandes problemas de mantenibilidad.


<br>
[========]


## CONTINUA PRACTICANDO

[Ejercicios practicos](https://platzi.com/clases/1957-flujo-c/29840-continua-practicando/ "Ejercicios practicos")
