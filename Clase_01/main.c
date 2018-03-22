#include <stdio.h>
#include <stdlib.h>
/**
*
*
*
*@param
*@return
*/
int main()
{
    char nombre;
    float sueldo;
    int aumento;
    float sueldoFinal;
    int porcentaje;

    printf("ingrese el nombre\n");
    scanf("%c",&nombre);

    printf("Ingrese el sueldo\n");
    scanf("%f",&sueldo);

    printf("Ingrese el aumento\n");
    scanf("%d",&aumento);

    porcentaje=(aumento*sueldo)/100;

    sueldoFinal=sueldo+porcentaje;

    printf("Su nombre es %c ", nombre);
    printf("su sueldo es %.f ", sueldo);
    printf("El porcentaje de aumento es %d ", aumento);
    printf(" Su sueldo final es  %.f ", sueldoFinal );



    return 0;
}
