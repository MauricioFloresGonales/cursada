#include "funcionesPuntero.h"


    //sePudo= scanf("%d", &aux);
   /* if(scanf("%d", &aux)== 1)
    {
        if(aux>0 && aux<150)
        {
            *edad=aux;
            retorno=1
           // return 1;
        }else{
            return 0
        }
    }else{
        return 0;
    }//logica de flujo de datos.*/
    //return retorno;


void verSiAnda(void)
{
    printf("funciona\n");
}
int cambiarValor(int dato)
{
    dato= 0;
    printf("\n lugar valor %d", &dato);

}
int cambiarReferncia(int *dato)
{
    *dato=0;
    printf("\n lugar rederencia %p", &*dato);
}
int dividir(int datoUno, int datoDos, float *resultado)
{

  /*float aux;
  if(datoDos==0)
     {
         return 0;
     }else{
        aux= (float)datoUno/datoDos;
        *resultado=aux;
        return 1;
     }
    */
    float aux;
    int retorno;
    retorno=0;
    if(datoDos!=0)
     {
        aux= (float)datoUno/datoDos;
        *resultado=aux;
        retorno= 1;
     }
     return retorno;
}
