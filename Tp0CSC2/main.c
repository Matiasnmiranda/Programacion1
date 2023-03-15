#include <stdio.h>
#include <stdlib.h>
///Leer tres números diferentes e imprimir el número mayor de los tres.
int main()
{
    int num1, num2, num3;
    printf("Ingrese 3 numeros diferentes!\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    if(num1>num2 && num1>num3)
        printf("\nEl numero mayor es %d", num1);
    if(num2>num1 && num2>num3)
        printf("\nEl numero mayor es %d", num2);
    if(num3>num1 && num3>num2)
        printf("\nEl numero mayor es %d", num3);
    return 0;
}
