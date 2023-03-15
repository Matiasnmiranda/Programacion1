#include <stdio.h>
#include <stdlib.h>
int main()
{
    int acum, nota, cont, may, men;
    float prom;
    cont=0;
    acum=0;
    do{
            system("cls");
    printf("Ingrese las notas de los parciales. Para salir pulse 0\n");
    scanf("%d",&nota);
    if(nota!=0){
         acum=nota+acum;
         cont++;
    if(nota<men)(
                 men=nota
                 );
    if (nota>may)(
                  may=nota
                  );
    }
    }
    while(nota!=0);

    prom= (float)acum/cont;

    printf("El porcentaje de las notas es de: %.2f \n", prom);
    printf("La nota mayor fue de: %d \n", may);
    printf("La nota menor fue de: %d \n", men);

    return 0;
}
