#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
///Cargar desde teclado una pila DADA y pasar a la pila DISTINTOS todos aquellos elementos distintos al valor 8.

int main()

{
Pila DADA, DISTINTOS;
inicpila (&DADA);
inicpila (&DISTINTOS);
int i=0;
for(i=0;i<10;i++){
    leer(&DADA);
    if(tope(&DADA)!=8){
        apilar(&DISTINTOS, desapilar(&DADA));
    }
    printf("===========Pila DADA==========");
    mostrar(&DADA);


    printf("===========Pila DISTINTOS==========");
    mostrar(&DISTINTOS);


}


    return 0;
}
