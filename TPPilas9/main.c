#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
///Comparar la cantidad de elementos de las pilas A y B. Mostrar por pantalla el resultado.

int main()
{
    Pila pila1, pila2, aux1, aux2;
    inicpila (&pila1);
    inicpila (&pila2);
    inicpila (&aux1);
    inicpila (&aux2);

    apilar(&pila1, 5);
    apilar(&pila2, 3);
    apilar(&pila1, 3);
    apilar(&pila2, 3);
    apilar(&pila1, 3);
    apilar(&pila2, 3);
    apilar(&pila1, 3);
    apilar(&pila2, 3);
    apilar(&pila1, 3);
    apilar(&pila2, 3);


    while(!pilavacia(&pila1) && !pilavacia(&pila2)){
        apilar(&aux1, desapilar (&pila1));
        apilar(&aux2, desapilar (&pila2));

        }
        if (!pilavacia(&pila1) && pilavacia(&pila2)){
            printf("Pila 1 tiene mas valores que Pila2.\n");
        }
        if(pilavacia(&pila1) && !pilavacia(&pila2)){
                printf("Pila 1 tiene menos valores que Pila2.\n");
            }
        if (pilavacia(&pila1) && pilavacia(&pila2)){
            printf("Ambas pilas tienen la misma cantidad de valores\n");
        }


    return 0;
}
