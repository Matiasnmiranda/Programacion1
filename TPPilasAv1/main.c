#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
///Sumar los elementos de una pila (usar variables enteras)

int main()
{
    Pila PilA, PilB;
    inicpila (&PilA);
    inicpila (&PilB);
    int i=0, suma;
    suma=0;

    for(i=0;i<5;i++){
    apilar(&PilA, rand()%10);
    }
    while(!pilavacia(&PilA)){
            suma=suma+tope(&PilA);
        apilar(&PilB, desapilar(&PilA));

    }
    printf("====Pila====\n");
    mostrar(&PilB);
    printf("el resultado de la suma de la pila s: %d\n", suma);


    return 0;
}
