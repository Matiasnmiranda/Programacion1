#include <stdio.h>
#include <stdlib.h>
//Un maestro desea saber qué porcentaje de hombres y que porcentaje de mujeres hay en un grupo de estudiantes.
int main()
{
    int homb, muj, total;
    float porhomb, pormuj;
    printf("Ingrese cantidad de hombres en el grupo.\n");
    scanf("%d",&homb);
    printf("Ingrese cantidad de mujeres en el grupo.\n");
    scanf("%d",&muj);
    total=homb+muj;
    porhomb=(homb*total)/100;
    pormuj=(muj*total)/100;

    printf("============================================\n");
    printf("Siendo un total de %d estudiantes\n",total);
    printf("El porcentaje de hombres es de: %.1f porciento\n", porhomb);
    printf("El porcentaje de mujeres es de: %.1f porciento\n", pormuj);
    printf("============================================\n");

    return 0;
}
