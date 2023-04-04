#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
#include "conio.h"

#define ESC 27
void cargaPila(Pila* a);
///Hacer una función que permita ingresar varios elementos a una pila, tanto como quiera el usuario.


int main()
{
    Pila Pila1;
    inicpila(&Pila1);
cargaPila(&Pila1);
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
