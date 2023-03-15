#include <stdio.h>
#include <stdlib.h>
//Determinar si un alumno aprueba a reprueba un curso,
//sabiendo que aprobara si su promedio de tres calificaciones es mayor o igual a 7; reprueba en caso contrario.
int main()
{
    int nota1, nota2, nota3, cant;
    float prom;
    cant=3;
    printf("Ingrese las calificaciones del alumno.\n");
    scanf("%d", &nota1);
    scanf("%d", &nota2);
    scanf("%d", &nota3);
        prom=(nota1+nota2+nota3)/cant;
    if (prom>=7){
        printf("Felicitaciones, has aprobado con un promedio de: %.2f", prom);
    }    else{
        printf("Lamentablemente has desaprobado con un promedio de: %.2f", prom);

    }




    return 0;
}
