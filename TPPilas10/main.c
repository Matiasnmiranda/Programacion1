#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

///Cargar las pilas A y B, y luego compararlas, evaluando si son completamente iguales
///(en cantidad de elementos, valores que contienen y posición de los mismos). Mostrar por pantalla el resultado.


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


    while(!pilavacia(&pila1) && !pilavacia(&pila2) && tope(&pila1)==tope(&pila2)){
        apilar(&aux1, desapilar (&pila1));
        apilar(&aux2, desapilar (&pila2));

        }
        mostrar(&pila1);
        mostrar(&pila2);
        system("pause");
        if (!pilavacia(&pila1) && pilavacia(&pila2)){
            printf("Pila 1 tiene mas valores que Pila2.\n");
        }
        if(pilavacia(&pila1) && !pilavacia(&pila2)){
                printf("Pila 1 tiene menos valores que Pila2.\n");
            }
        if (pilavacia(&pila1) && pilavacia(&pila2)){
            printf("Ambas pilas tienen la misma cantidad de valores y son iguales\n");
        }
        if (!pilavacia(&pila1) && !pilavacia(&pila2)){
            printf("Las pilas son distintas."\n);
        }



    return 0;
}
