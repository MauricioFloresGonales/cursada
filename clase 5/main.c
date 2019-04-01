#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define T 5

int main()
{
   //int vector[5];
   /* 1ªint numeros[5];
        numeros[2]=23;
        printf("%d",numeros[2]);*/

    /*    int numero[5];
        int i;

        for(i=0; i<5; i++)
        {
            printf("ingrese un numero: ");
            scanf("%d", &numero[i]);//----------- direccion de memoriaº
        }

          for(i=0; i<5; i++)
        {
            printf("%d\n", numero[i]);

        }*/

/*        int numero[T];
        int i;

        for(i=0; i<T; i++)
        {
            printf("ingrese un numero: ");
            scanf("%d", &numero[i]);//----------- direccion de memoriaº
        }

          for(i=0; i<T; i++)
        {
            printf("%d\n", numero[i]);

        }*/




/*        int numero[Q];
        int i;
        int const
        for(i=0; i<Q; i++)
        {
            printf("ingrese un numero: ");
            scanf("%d", &numero[i]);//----------- direccion de memoriaº
        }

          for(i=0; i<Q; i++)
        {
            printf("%d\n", numero[i]);

        }
*/

/*

        int numero[5];
        int cargar;
        int mostrar;

        cargar= cargarVector(numero);
        mostrar= mostrarVector(numero);*/


    int numero[T];
    int i;
    int maximo;

    cargarVector(numero,T);
    mostrarVector(numero,T);
    maximo= buscarMaximos(numero,T);

    printf("el maxiomo es: %d");

    return 0;
}
