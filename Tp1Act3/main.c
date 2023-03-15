#include <stdio.h>
#include <stdlib.h>
//Suponga que un individuo desea invertir su capital en un banco
//y desea saber cuanto dinero ganará después de un mes, si el banco paga a razón de 2% mensual
int main()
{
    int cap, mes;
    float diff, ganan, porcen;
    cap=0;
    mes=0;
    porcen=0.2;
    printf("Ingrese capital a invertir \n");
    scanf("%d", &cap);
    printf("Ingrese por cuantos meses desea invertir, sabiendo que ganara a razon de 2 porciento mensual \n");
    scanf("%d", &mes);
    diff=cap * porcen;
    ganan=(diff * mes) + cap;
    printf("==========================================");
    printf("Siendo su inversion de: %d\n", cap);
    printf("Por %d meses\n", mes);
    printf("Su ganancia seria de:%f \n", diff);
    printf("Siendo su Total Obtenido:%f \n", ganan);
    printf("==========================================");

    return 0;






    return 0;
}
