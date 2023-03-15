#include <stdio.h>
#include <stdlib.h>
///Leer 2 números; si son iguales que los multiplique,
///si el primero es mayor que el segundo que los reste y si no que los sume.
int main()
{
    int num1, num2, total;
    printf("Ingrese 2 numeros.\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    if(num1==num2){
        total=num1*num2;
        printf("\n Ya que el primer y segundo numero son iguales, el resultado de la multiplicacion de ambos es: %d", total);
    }
    if(num1<num2){
        total=num1+num2;
        printf("\n Ya que el primer numero es menor al segundo, el resuldao de la suma de ambos es: %d", total);
    }
    if(num1>num2){
    total=num1-num2;
    printf("\n Ya que el primer numero es mayor al segundo, el resultado de la resta de ambos es: %d", total);
    }
    return 0;
}
