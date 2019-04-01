#include "funciones.h"

        void cargarVector(int numerosEnteros[] ,int tam)
        {
            int i;
            for(i=0; i<tam; i++)
            {
                printf("ingrese un numero: ");
                scanf("%d", &numerosEnteros[i]);
            }
        }

        void mostrarVector(int numeros[] ,int tam)
        {
            int i;
            for(i=0; i<tam; i++)
            {
                printf("%d\n", numeros[i]);
            }
        }


        int buscarMaximos(int numeros[], int tam)
        {
            int i;
            int flag= 0;
            int maximo;

            for(i=0; i<tam; i++)
            {
                if(flag==0 || numeros[i]>maximo)
                {
                    maximo= numeros[i];
                    flag= 1;
                }
            }
            return maximo;
        }

        int buscarValores(int numeros[] ,int tam ,int valor)
        {


        }
