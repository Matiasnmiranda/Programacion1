#include <stdio.h>
#include <stdlib.h>
//Una tienda ofrece un descuento del 15% sobre el total de la compra
//y un cliente desea saber cuánto deberá pagar finalmente por su compra.
int main()
{
    int acum, valor, cont;
    float porcen, desc, total;
    porcen=0.15;
    acum=0;
    cont=0;
    valor=0;

    do{
    printf("Ingrese los valores individuales de cada prenda. Para finalizar pulse 0\n");
    scanf("%d", &valor);
    if(valor!=0){
    acum=valor+acum;
    cont++;
    }
    }while(valor!=0);

    total=acum*porcen;
    desc=acum-total;
    printf("Siendo el total de la compra de: %d pesos\n", acum);
    printf("El total a pagar es de: %f pesos\n", desc);
    printf("Siendo el descuento de: %f pesos\n", total);

    return 0;
}
