#include <stdio.h>
#include <stdlib.h>
///Un obrero necesita calcular su salario semanal, el cual se obtiene de la sig. manera:
///Si trabaja 40 horas o menos se le paga $300 por hora
///Si trabaja más de 40 horas se le paga $300 por cada una de las primeras 40 horas y $400 por cada hora extra.
int main()
{
    int horas, horasMin, sueldo, extra, pago, recarg, sueldoA, sueldoB;
    horasMin=40;
    sueldo=300;
    extra=0;
    recarg=400;
    printf("Ingrese Cantidad de horas trabajadas.\n");
    scanf("%d",&horas);
    if (horas>=horasMin){
        extra=horas-horasMin;
        sueldoA=horasMin*sueldo;
        sueldoB=extra*recarg;
        pago=sueldoA+sueldoB;
    } else{
    pago=horas*sueldo;
    }
    printf("\n Siendo trabajadas %d horas", horas);
    printf("\n El sueldo del empleado es de: %d", pago);

    return 0;
}
