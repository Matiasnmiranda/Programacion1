#include <stdio.h>
#include <stdlib.h>

///Desarrollar una funci�n que muestre la tabla de multiplicar de un n�mero entero recibido por par�metro.

void tablaMultiplicar(int a);

int main()
{
    int nro=0;
    printf("Ingrese que tabla desea ver");
    scanf("%d", &nro);
    tablaMultiplicar(nro);
    return 0;
}


void tablaMultiplicar(int a){
    int multi=0, cont=1;

    printf("===TABLA DEL %d===\n", a);
    do{
        cont++;
        multi=cont*a;

        printf("x%d = %d\n",cont ,multi);

    }while (cont<10);

}
