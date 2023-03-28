#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
///Contar los elementos de una pila (usar variables enteras)
int main()
{
    Pila PilA, PilB;
    inicpila(&PilA);
    inicpila(&PilB);
    int i=0, cant;
    cant=0;
for(i=0;i<10;i++){
    apilar(&PilA, rand()%10);
}
while(!pilavacia(&PilA)){
    cant++;
    apilar(&PilB, desapilar(&PilA));
}
printf("Hay %d elementos en la pila", cant);
    return 0;
}
