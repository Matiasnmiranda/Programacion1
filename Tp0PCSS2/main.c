#include <stdio.h>
#include <stdlib.h>
///En un almacén se hace un 20% de descuento a los clientes cuya compra supere los $5000
/// ¿Cuál será la cantidad que pagará una persona por su compra?
int main()
{
    int prod, min, acum, cant;
    float porcen, total, desc;
    porcen=0.2;
    cant=0;
    acum=0;
    min=5000;
    do{
    printf("Ingrese el valor de los productos comprados. Pulse 0 para finalizar.\n");
    scanf("%d", &prod);
    if (prod!=0){
                 acum=(prod+acum);
                 cant++;
                };
    }while(prod!=0);
    if(acum>min){
                  desc=(acum*porcen);
                  total=(acum-desc);
    }else{
            total=acum;
    }

    printf("\n ===============================================");
    printf("\n El total de su compra es de: %.2f", total);
    printf("\n El valor del descuento en su compra es de: %.2f", desc);
    printf("\n Su total anterior era: %d", acum);
    printf("\n Cantidad de ropa comprada: %d", cant);
    printf("\n ===============================================");
    return 0;
}
