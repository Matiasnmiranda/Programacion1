#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
#include <conio.h>
#define ESC 27

///Hacer una función que pase los elementos de una pila a otra, de manera que se genere una nueva pila ordenada.
///Usar la función del ejercicio 6.  (Ordenamiento por inserción)
void cargaPila(Pila* a);
void acomodarPila(Pila* b, int nro);
void clonarPila(Pila* a, Pila* b);
int main()
{
    int nro=0;
    Pila Pila1, Pila2;
    inicpila (&Pila1);
    inicpila (&Pila2);
    cargaPila(&Pila1);
    clonarPila(&Pila1, &Pila2);
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
void clonarPila(Pila* a, Pila* b){
    Pila aux, aux2;
    inicpila(&aux);
    inicpila(&aux2);
    while(!pilavacia(a)){
        apilar(b, tope(a));
        apilar(&aux, desapilar(a));
        }
    while(!pilavacia(&aux)){
        apilar(&aux2, desapilar(&aux));
    }
    while(!pilavacia(&aux2)){
        apilar(a, desapilar(&aux2));
}
}





