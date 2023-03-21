#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    Pila pilita, menores, mayores;
    inicpila(&pilita);
    inicpila(&menores);
    inicpila(&mayores);

    for(int i=0;i<40;i++){
        apilar(&pilita,rand()%100);
    }
    printf("==================Pila Pilita================");

    mostrar(&pilita);
    while(!pilavacia(&pilita)){
            if(tope(&pilita)>50){
        apilar(&mayores, desapilar(&pilita));
            }else{
                apilar(&menores, desapilar(&pilita));
            }

    }
    printf("==================Pila Pilita================");
    mostrar(&pilita);

    printf("==================Pila Menores===================");
    mostrar(&menores);
    printf("==================Pila Mayores===================");
    mostrar(&mayores);

    return 0;
}
