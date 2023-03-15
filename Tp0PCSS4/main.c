#include <stdio.h>
#include <stdlib.h>
///Desarrolle un algoritmo que lea dos números y los imprima en forma ascendente
int main()
{
    int num1, num2;
    printf("Ingrese 2 numeros.\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    if(num1<num2){
        printf("\n%d", num1);
        printf("\n%d", num2);

    }else{
        printf("\n%d", num2);
        printf("\n%d", num1);
    return 0;
}
}
