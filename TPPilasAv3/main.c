#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
///Calcular el promedio de los valores de una pila (usar variables)
int main()
{
   Pila PilA, PilB;
    inicpila(&PilA);
    inicpila(&PilB);
    int i=0, cant, sum;
    float prom;
    prom=0;
    cant=0;
    sum=0;
for(i=0;i<3;i++){
    apilar(&PilA, rand()%10);
}
while(!pilavacia(&PilA)){
    cant++;
    sum=sum+tope(&PilA);
    apilar(&PilB, desapilar(&PilA));

}
prom=sum/cant;
printf("El promedio de los valores de la pila es de %f", prom);
mostrar(&PilB);
    return 0;
}
