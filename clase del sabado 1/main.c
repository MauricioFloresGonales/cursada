#include <stdio.h>
#include <stdlib.h>
#include "funcionesPuntero.h"
int main()
{
    int sePudo;
    float respuesta;
    int primeraEdad;
    int segundaEdad;
    pedirEdad(&primeraEdad);
    pedirEdad(&segundaEdad);

   sePudo=dividir(primeraEdad,segundaEdad, &respuesta);
   if(sePudo==1)
   {
       printf("respuesta es %f " , respuesta);

   }else{
        printf("no se pudo");
   }



    /*
   int sePudo;

   float respuesta;

   sePudo=dividir(10,2, &respuesta);
   if(sePudo==1)
   {
       printf("respuesta es %f " , respuesta);

   }else{
        printf("no se pudo");
   }


*/










    /*
    int pedirEdad(int *edad)

    int aux;
   // int sePudo;
    int retorno;
    retorno= 0;
    printf("ingrese su edad");
    if(scanf("%d",&aux)== 1)
    {
        if(aux>0 && aux<150)
        {
            *edad=aux;
            retorno=1;
        }
    }
    */
   /* int miEdad;

    retorno=pedirEdad(&edad);
    while(pedirEdad(&miEdad)== 0)
    {
        //nada
    }
    printf("su edad es %d",miEdad);*/
    /*
    if(retorno==1)
    {
        printf("su edad es %d", miEdad);
    }else{
        printf("no se pudo");
    }
    */// while(pedirEdad(&miEdad)== 0)





    /*
    printf("Hello world!\n");
    verSiAnda();
    int sueldo;
   // printf("%d", &sueldo);imprimir direccion de memoria
    printf("\n lugar sueldo %d", &sueldo);
    sueldo= 10000;
    cambiarValor(sueldo);
    printf("Por valor :%d\n",sueldo);
    cambiarReferncia(&sueldo);
    printf("Por referencia :%d\n",sueldo);



    return 0;
    */
}
