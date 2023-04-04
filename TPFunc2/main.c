#include <stdio.h>
#include <stdlib.h>

#include <conio.h>
#include "pila.h"

///Hacer una funci�n que pase todos los elementos de una pila a otra.

#define ESC 27

void cargaPila(Pila* a);
void cambiaPila(Pila* c, Pila* d);

int main()
{
    Pila Pila1, Pila2;
    inicpila(&Pila1);
    inicpila(&Pila2);
    cargaPila(&Pila1);
    cambiaPila(&Pila1, &Pila2);
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

void cambiaPila(Pila* c, Pila* d){
while(!pilavacia(c)){
    apilar(d, desapilar(c));


}

}
