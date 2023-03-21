#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
///Cargar desde el teclado la pila DADA.
///Invertir la pila de manera que DADA contenga los elementos cargados originalmente en ella, pero en orden inverso
int main()
{
Pila DADA, AUX1, AUX2;
inicpila (&DADA);
inicpila (&AUX1);
inicpila (&AUX2);
char control ='s';
while(control=='s'){

    leer (&DADA);
    printf("=====DADA=====");
    mostrar(&DADA);
    printf("Quiere cargar mas datos? s / n");
    fflush(stdin);
    scanf("%c",&control);
    system("cls");
}
while(!pilavacia(&DADA)){
    apilar(&AUX1, desapilar(&DADA));
    mostrar(&AUX1);
}
while(!pilavacia(&AUX1)){
    apilar(&AUX2, desapilar(&AUX1));
    mostrar(&AUX2);
}
while(!pilavacia(&AUX2)){
    apilar (&DADA, desapilar(&AUX2));
    printf("=====DADA=====");
    mostrar(&DADA);
}





    return 0;
}
