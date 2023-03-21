#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
///Cargar desde el teclado la pila ORIGEN e inicializar en vacío la pila DESTINO.
///Pasar todos los elementos de la pila ORIGEN a la pila DESTINO


int main()
{
Pila origen,destino;
inicpila (&origen);
inicpila(&destino);
int i;
for (i=0;i<5;i++){
    leer (&origen);
    printf("Origen\n");
    mostrar (&origen);
    printf("Destino\n");
    mostrar(&destino);
apilar (&destino, desapilar(&origen));
    printf("Origen\n");
    mostrar (&origen);
printf("Destino\n");
mostrar(&destino);

}




    return 0;
}
