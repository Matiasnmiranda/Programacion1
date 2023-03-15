#include <stdio.h>
#include <stdlib.h>
///Hacer un algoritmo que calcule el total a pagar por la compra de camisas.
///Si se compran tres camisas o más se aplica un descuento del 20% sobre el total de la compra
///y si son menos de tres camisas un descuento del 10%
int main()
{
    int cant, acum, total, precio, porcen;
    float desc1, desc2;
    cant=0;
    porcen=0;
    acum=0;
    total=0;
    desc1=0.1;
    desc2=0.2;
    do {
            system("cls");
    printf(" Ingrese el valor de las camisas una por una. Para finalizar pulse 0.\n");
    scanf("%d", &precio);
    if (precio!=0){
        acum=acum+precio;
        cant++;
    }
    }while(precio!=0);
    if(cant<3){
        porcen=acum*desc1;
        total=acum-porcen;
        }else{
        porcen=acum*desc2;
        total=acum-porcen;
    }

    printf("\n ===========================");
    printf("\n El total de su compra de:%d", total);
    printf("\n Siendo el descuento de %d", porcen);
    printf("\n El valor anterior de %d", acum);
    printf("\n Y la cantidad de camisas %d", cant);
    printf("\n ===========================");
    return 0;
}
