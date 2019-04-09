#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define T 3

void pedirCadena(char[], char[]);

int main()
{
    int legajos[T];
    float sueldos[T];
    char sexos[T];
    char nombres[T][20];
    int i, j;
    int auxEnteros;
    float auxFlotante;
    char auxCarater;


    for(i=0; i<T; i++)
    {
        printf("ingrese legajo: ");
        scanf("%d", &legajos[i]);

        printf("ingrese sueldo: ");
        scanf("%f", &sueldos[i]);

        printf("ingrese sexo (m o f): ");
        fflush(stdin);
        scanf("%c", &sexos[i]);

        pedirCadena("nombre: ", nombres[i],20);

        sueldoNeto[i]= suledoBruto[i]-0.85;
    }

    for(i=0; i=T; i++)
    {
        for(j=i+1; j<T; j++)
        {
            if(legajos[i]>legajos[j])
            {
                auxEnteros = legajos[i];
                legajos[i] = legajos[i];
                legajos[j] = auxEnteros;

                auxFlotante = sueldoBruto[i];
                sueldobruto[i] = sueldoNeto[j];
                sueldoBruto[j] = auxFlotante;


             }
        }
    }

    for(i=0; i=T; i++)
    {
        printf("%d-%s-%f-%c", legajos[i],sueldos[i],sexos[i],nombres[i]);
    }

    return 0;
}


    void pedirCadena(char mensaje[], char cadena[])
    {
        printf("%s", mensaje);
        scanf("%[^\n]", cadena);
    }
