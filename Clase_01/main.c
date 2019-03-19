#include <stdio.h>
#include <stdlib.h>

int main()
{
    char hora;

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
    }


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
