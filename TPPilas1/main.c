#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
///Cargar desde el teclado una pila DADA con 5 elementos. Pasar los tres primeros elementos
///que se encuentren en el tope a la pila AUX1 y los restantes a la pila AUX2, ambas pilas inicializadas.

int main()
{
    Pila AUX1, AUX2, DADA;
    inicpila (&AUX1);
    inicpila (&AUX2);
    inicpila (&DADA);
    int i=0;
    for(i=0;i<5;i++){
                      leer(&DADA);
    if (i>=2){
            apilar(&AUX1, desapilar(&DADA));
    } else {
        apilar(&AUX2, desapilar(&DADA));

    }
    }
    printf("============Pila AUX1================");
    mostrar (&AUX1);
    printf("============Pila AUX2================");
    mostrar (&AUX2);

    return 0;
}
