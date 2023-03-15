#include <stdio.h>
#include <stdlib.h>
///Leer 10 números y obtener su cubo y su cuarta.
int main()
{
    int numero, cubo, cuarta, i;
    i=0;
    for(i=0;i<10;i++){
    printf("Ingrese el numero\n0");
    scanf("%d", &numero);
    cubo=numero*numero*numero;
    cuarta=numero*numero*numero*numero;
    printf("\nEl cubo de %d, es: %d", numero, cubo);
    printf("\nLa cuarta de %d, es: %d", numero, cuarta);
    return 0;
}
}
