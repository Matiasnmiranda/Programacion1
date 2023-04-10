#include <stdio.h>
#include <stdlib.h>

///Desarrollar una función que devuelva un valor RANDOM en el rango de 0 a 100.
void random(int* a);
int copiaNumRandom();


int main()
{
    int nro=0;
    int nro2;
    random(&nro);
    nro2= copiaNumRandom();
    printf(" El valor aleatorio es: %d", nro);
    printf(" El valor aleatorio es: %d", nro2);
    return 0;
}


void random(int* a){
    *a=rand()%100;
}

int copiaNumRandom(){
    int nro=rand()%100;
    return nro;

}

