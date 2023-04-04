#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
#include <conio.h>
#define ESC 27

///Hacer una función que inserta en una pila ordenada un nuevo elemento, conservando el orden de ésta.

void cargaPila(Pila* a);
void acomodarPila(Pila* b, int nro);

int main()
{
    int nro=0;
    Pila Pila1, Pila2;
    inicpila (&Pila1);
    inicpila (&Pila2);
    cargaPila(&Pila1);
    printf("\nIngrese numero a acomodar:");
    scanf("%d",&nro);
    acomodarPila(&Pila1, nro);
    mostrar(&Pila1);
    mostrar(&Pila2);

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
void acomodarPila(Pila* b, int nro){
    Pila aux;
    inicpila(&aux);
    while ((tope(b)>nro) && (!pilavacia(b))){
            apilar(&aux, desapilar(b));
    }
    apilar(b, nro);
    while(!pilavacia(&aux)){

        apilar(b, desapilar(&aux));
    }
}

