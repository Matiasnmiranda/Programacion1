#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

///Suponiendo la existencia de una pila MODELO que no esté vacía
///eliminar de la pila DADA todos los elementos que sean iguales al tope de la pila MODELO.


int main()
{
    Pila modelo, dada, aux1, igual;
    inicpila (&modelo);
    inicpila (&dada);
    inicpila (&aux1);
    inicpila (&igual);
    int i=0;

    for(i=0;i<10;i++){
        apilar(&modelo, rand()%4);
        apilar(&dada, rand()%4);
    }
    while(!pilavacia(&dada)){
    if(tope(&modelo)==tope(&dada)){
        apilar(&igual, desapilar(&dada));
    }else{
        apilar(&aux1, desapilar(&dada));
    }
    }
    while(!pilavacia(&aux1)){
        apilar(&dada, desapilar(&aux1));
    }
    printf("===MODELO===\n");
    mostrar(&modelo);
    printf("===DADA===\n");
    mostrar(&dada);
    printf("===Valores=Iguales===\n");
    mostrar(&igual);
    return 0;
}
