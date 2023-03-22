#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
///Suponiendo la existencia de una pila MODELO (vacía o no),
///eliminar de la pila DADA todos los elementos que existan en MODELO.

int main()
{
    Pila dada, modelo, aux1, aux2, deshecho;
    inicpila (&dada);
    inicpila (&modelo);
    inicpila (&aux1);
    inicpila (&aux2);
    inicpila (&deshecho);
    int i=0;
    for(i=0;i<10;i++){
        apilar(&dada, rand()%10);
        apilar(&modelo, rand()%10);
        if(tope(&modelo)==tope(&dada)){
            apilar(&deshecho, desapilar(&dada));
        }
    }
        while(!pilavacia(&modelo)){
        if(tope(&modelo)==tope(&dada)){
            apilar(&deshecho, desapilar(&dada));
        }else{
            apilar(&aux1, desapilar(&dada));
        }

    }


    printf("dada\n");
    mostrar(&dada);
    printf("modelo\n");
    mostrar(&modelo);
    printf("Quitados\n");
    mostrar(&deshecho);


    return 0;
}
