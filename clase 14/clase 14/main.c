#include <stdio.h>
#include <stdlib.h>

int main()
{

/*
    int *x= NULL;
    int v = 10;
    x=&v;
    printf("%p\n",&v);//---- DIRECCION DE MEMORIA V

    printf("%p\n",&x);//---- DIRECCION DE MEMORIA X

    printf("%p\n",x);//---- VALOR DE X

    printf("%d\n",*x);//---- EL VALOR AL QUE APUNTA X       */

//--------------------------------------------------------------------------------------------------------------------------
 /*
    char letra;
    char* pLetra= NULL;
    pLetra=&letra;

    printf("ingrese una letra: ");
    fflush(stdin);
    scanf("%c",pLetra);

    if(pLetra!=NULL)
    {
        printf("%c",*pLetra);
    }else{
        printf("no es nulo");
    }
*/
//--------------------------------------------------------------------------------------------------------------------------


    int p;
    int* q;
    int* r;

    p=10;
    q=&p;

    r=q;

    printf("\n%d",&p);
    printf("\n%d",q);
    printf("\n%d",*r);

    return 0;
}
