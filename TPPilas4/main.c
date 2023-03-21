#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
///Cargar desde el teclado la pila ORIGEN e inicializar en vacío la pila DESTINO.
///Pasar los elementos de la pila ORIGEN a la pila DESTINO, pero dejándolos en el mismo orden.

int main()
{
Pila ORIGEN, INTERMEDIO, DESTINO;
inicpila (&ORIGEN);
inicpila (&INTERMEDIO);
inicpila (&DESTINO);
char control ='s';
while(control=='s'){

    leer (&ORIGEN);
    mostrar(&ORIGEN);
    printf("Quiere cargar mas datos? s / n");
    fflush(stdin);
    scanf("%c",&control);
    system("cls");
}
while(!pilavacia(&ORIGEN)){
    apilar(&INTERMEDIO, desapilar(&ORIGEN));
    mostrar(&ORIGEN);
}
while(!pilavacia(&INTERMEDIO)){
    apilar(&DESTINO, desapilar(&INTERMEDIO));
    mostrar(&INTERMEDIO);
}
printf("========ORIGEN=========");
mostrar(&ORIGEN);
printf("========INTERMEDIO=========");
mostrar(&INTERMEDIO);
printf("========DESTINO=========");
mostrar(&DESTINO);
    return 0;
}
