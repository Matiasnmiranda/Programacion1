#include <stdio.h>
#include <stdlib.h>

///Diseñe una función que reciba un número entero N
///y realice la suma de los números enteros positivos menores que N y lo retorne.
///N es un  dato ingresado por el usuario en el main.

int sumaValor(int a);

int main()
{
    int nro=0, suma=0;
    printf("Ingrese un numero: \n");
    scanf("%d", &nro);
    suma= sumaValor(nro);
    printf("La suma de sus enteros positivos menores de %d,  es: %d", nro, suma);
    return 0;
}

int sumaValor(int a){
    int suma=0;
    do{
        a=a-1;
        suma=suma+a;

    }while (a!=0);
    return suma;
}
