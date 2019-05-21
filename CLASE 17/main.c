#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int* pNumero;

    pNumero = (int*) malloc(sizeof (int));
    *pNumero = 99;
    printf("Heap ---> pNumero: %d\n",pNumero);
    printf("Stack ---> &pNumero: %d\n",&pNumero);

    if(pNumero!=NULL)
    {
        printf("Valor ---> *pNumero: %d\n",*pNumero);
        system("pause");
        printf("Luego de hacer el FREE: %d\n");
        free(pNumero);
        printf("Heap ---> pNumero: %d\n",pNumero);
        printf("Stack --->&pNumero: %d\n",&pNumero);
        printf("Valor ---> *pNumero: %d\n",*pNumero);
    }

    */
//-----------------------------------------------------------------------------------------------------------------
/*
        int* pNumeros;
        int i;
        pNumeros = (int*) malloc(sizeof(int)*5);
        if(pNumeros!=NULL)
        {
            for(i=0;i<5;i++)
            {
                *(pNumeros+i)=i+1;
            }

            for(i=0;i<5;i++)
            {
                printf("%d\n",*(pNumeros+i));
            }
        }
*/
//-----------------------------------------------------------------------------------------------------------------

        int* pNumeros;
        int i;
        pNumeros = (int*) malloc(sizeof(int)*5);
        if(pNumeros!=NULL)
        {
            for(i=0;i<5;i++)
            {
                printf("ingrese un numero: ");
                scanf("%d",pNumeros+1);
            }

            for(i=0;i<5;i++)
            {
                printf("%d\n",pNumeros+i);
            }
        }




    return 0;
}
