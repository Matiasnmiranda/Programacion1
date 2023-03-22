#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
//Pasar el último elemento (base) de la pila DADA a su primera posición (tope),
//dejando los restantes elementos en el mismo orden.


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
while(!pilavacia(&dada)){
    apilar(&aux1, desapilar(&dada));
    mostrar(&aux1);
}
apilar(&aux2, desapilar(&aux1));

while(!pilavacia(&aux1)){
    apilar(&dada, desapilar(&aux1));
    mostrar(&dada);
}
apilar(&dada, desapilar(&aux2));

mostrar(&dada);

    return 0;
}
