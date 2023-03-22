#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
///Pasar el primer elemento (tope) de la pila DADA a su última posición (base),
///dejando los restantes elementos en el mismo orden.

int main()
{
Pila dada, aux1, aux2;
inicpila (&dada);
inicpila (&aux1);
inicpila (&aux2);
char control = 's';

while(control=='s'){

    system("cls");
    leer(&dada);
    printf("======DADA======");
    mostrar(&dada);
    printf("Desea ingresar otro numero? s / n \n");
    fflush(stdin);
    scanf("%c", &control);

}
apilar(&aux2, desapilar(&dada));

while(!pilavacia(&dada)){
    apilar(&aux1, desapilar(&dada));
    mostrar(&aux1);
}
apilar(&dada, desapilar(&aux2));

while(!pilavacia(&aux1)){
    apilar(&dada, desapilar(&aux1));
    mostrar(&dada);
}

mostrar(&dada);
    return 0;
}
