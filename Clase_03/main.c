#include <stdio.h>
#include <stdlib.h>


//int sumar (int numeroUno ,int numeroDos);
//int dividirEnteros(int numeroUno, int numeroDos);
    /** \brief
     *
     * \param
     * \param
     * \return
     *
     */
    int getEntero (char* mensaje);

int main()
{
    int numero;
    numero=getEntero("ingrese su edad");
    printf("en entero ingresado es : %d",numero);

  // int numero;
  //float numero;

   //numero=sumar(3,3);
    //numero=dividirEnteros(10,3);
     printf("%f",numero);
    //return 0;
}
 int getEntero (char* mensaje)
 {
     int entero;
     printf("%s",mensaje);
     scanf("%d",entero);
     return entero;
 }
/*int dividirEnteros(int numeroUno, int numeroDos)
{
    float resultado=0;

    resultado=numeroUno/numeroDos;
    return resultado;
}
*/

/*int sumar (int numeroUno ,int numeroDos)
{
    int resultado=0;

    resultado=numeroUno+numeroDos;
    return resultado;
}
*/
