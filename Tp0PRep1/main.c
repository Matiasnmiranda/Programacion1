#include <stdio.h>
#include <stdlib.h>
///Calcular el promedio de un alumno que tiene 7 calificaciones en la materia de Programación 1.
int main()
{
    int cont, acum, nota;
    float prom;
    acum=0;
    cont=0;
    prom=0;
    do{
            system("cls");
    printf("Ingrese las calificaciones del alumno\n");
    scanf("%d", &nota);
    acum=nota+acum;
    cont++;


    }while(cont!=7);
    prom=acum/7;
    printf("El promedio del alumno es de: %f", prom);
    return 0;
}
