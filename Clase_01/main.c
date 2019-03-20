#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

    int nro,max,min;
    int flag=0;
    char rta;

    do
    {
        printf("Ingrese un numero:");
        scanf("%d",& nro);

        if(flag==0 || nro>max)

        {
                min=nro;

                flag=1;
        }

        do{
            printf("Continuar? [S/N]");

            fflush(stdin);

            scanf("%c",&rta);

            rta=toupper(rta);

        }while(rta!='S' && rta != 'N');


    }   while(rta=='S');

    system("cls");

    printf("El numero maximo es %d\n El numero minimo es %d\n",max,min);


/*
    char hora;

    printf("ingrese una hora:");

    fflush(stdin);

    scanf("%c",&hora);

    switch(hora)
    {
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
            printf("levantate");
            break;
        case '6':
        case '7':
        case '8':
        case '9':
            printf("es de noche");
            break;

        default :
            printf("te pasaste");
    }






*/


  /*
    int hora;

    printf("ingrese una hora:");

    scanf("%d",&hora);

    switch(hora)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("levantate");
            break;
        case 6:
        case 7:
        case 8:
        case 9:
            printf("es de noche");
            break;

        default :
            printf("te pasas");
    }
*/

    /*int i=0;

    do
    {
        i++;
        printf("%d\n",i);

    }while(i<10);

*/

  /* ///////////// W H I L E ///////////////////////
    int i=0;

    while(i<10)

    {
        i++;
        printf("%d\n",i);
    }
*/

/*
///////////// F O R ///////////////////////
    int i;

    for(i=0; i<10; i++)
    {
        printf("%d\n",(i+1));
    }

  */
    return 0;
}
