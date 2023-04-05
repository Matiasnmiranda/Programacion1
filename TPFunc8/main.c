#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
#include <conio.h>
#define ESC 27

///Hacer una función que sume y retorne los dos primeros elementos de una pila (tope y anterior), sin alterar su contenido.
void cargaPila(Pila* a);
void sumaTope(Pila* a, int* nro);

int main()
{   int nro=0;
    Pila Pila1;
    inicpila(&Pila1);
    cargaPila(&Pila1);
    sumaTope(&Pila1, &nro);
    printf("\n El resultado de la suma del tope y anterior es: %d", nro);
    mostrar(&Pila1);


    return 0;
}



void cargaPila(Pila* a){
int nro=0;
char option;

do{
        printf("\nIngrese un valor: ");
        scanf("%d", &nro);
        apilar(a, nro);

        printf("\n Desea continuar? Pulse ESC para salir.");
        option=getch();
        system("cls");
}while (option!=ESC);

}

void sumaTope(Pila* a, int* nro){
    Pila aux;
    inicpila(&aux);
    apilar(&aux, desapilar(a));
    *nro=(tope(a)+tope(&aux));
    apilar(a, desapilar(&aux));


}
