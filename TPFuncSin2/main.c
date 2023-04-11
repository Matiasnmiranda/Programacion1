#include <stdio.h>
#include <stdlib.h>

///Diseñe una función que reciba 3 números enteros y muestre el mayor y el menor.
void muestraMayMen(int* a, int* b, int* c);

int main()
{
    int NumA=0, NumB=0, NumC=0;
    printf("Ingrese 3 numeros distintos.\n");
    scanf("%d",&NumA);
    scanf("%d",&NumB);
    scanf("%d",&NumC);
    muestraMayMen(&NumA, &NumB, &NumC);
    return 0;
}

void muestraMayMen(int* a, int* b, int* c){
    if(*a>*b && *a>*c){
        printf("\nEl numero mayor es: %d", *a);
    }
    if(*b>*a && *b>*c){
        printf("\nEl numero mayor es: %d", *b);
    }
    if(*c>*a && *c>*b){
        printf("\nEl numero mayor es: %d", *c);
    }
    if(*a<*b && *a<*c){
        printf ("\nEl numero menor es: %d", *a);
    }
    if(*b<*c && *b<*a){
        printf ("\nEl numero menor es: %d", *b);
    }
    if(*c<*a && *c<*b){
        printf ("\nEl numero menor es: %d", *c);
    }

}
