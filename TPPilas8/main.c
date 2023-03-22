#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
///Repartir los elementos de la pila MAZO en las pilas JUGADOR1 y JUGADOR2 en forma alternativa.
int main()
{
Pila mazo, jugador1, jugador2, deshecho;
inicpila (&mazo);
inicpila (&jugador1);
inicpila (&jugador2);
inicpila (&deshecho);
int i=0;
for (i=0;i<13;i++){
apilar(&mazo, (rand()%12)+1);

}
for(i=0;i<3;i++){
    apilar(&jugador1, desapilar(&mazo));
    apilar(&jugador2, desapilar(&mazo));
}
printf("====Cartas==Jugador==1====");
mostrar(&jugador1);
printf("====Cartas==Jugador==2====");
mostrar(&jugador2);



    return 0;
}
