#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
#include "conio.h"
#define ESC 27
///Hacer una función que encuentre el menor elemento de una pila y lo retorna. La misma debe eliminar ese dato de la pila.

void cargaPila(Pila* a);
void menorPila(Pila* b, Pila* c);

int main()
{
    Pila Pila1, Pila2;
    inicpila(&Pila1);
    inicpila(&Pila2);
    cargaPila(&Pila1);
    menorPila(&Pila1, &Pila2);
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
void menorPila(Pila* b, Pila* c){
    Pila aux;
    inicpila(&aux);
    apilar(c, desapilar(b));
    while(!pilavacia(b))
        if(tope(b)>tope(c)){
        apilar(&aux, desapilar(b));
        }else{
        apilar(&aux, desapilar(c));
        apilar(c, desapilar(b));
}
while(!pilavacia(&aux)){
    apilar(b, desapilar(&aux));
}


}
