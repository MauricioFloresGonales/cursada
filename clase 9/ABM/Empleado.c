#include <stdio.h>
#include <string.h>
#include "Empleado.h"
#define LIBRE 0
#define OCUPADO 1

void cargarEmpleados(eEmpleado lista[],int tam)
{
    int i;
    i= buscarLibre(lista,tam);
    if(i!= -1)
    {
        printf("ingrese legajo: ");
        scanf("%d", &lista[i].legajos );

        printf("ingrese nombre: ");
        fflush(stdin);
        gets(lista[i].nombre);


        printf("ingrese sexo (M o F): ");
        fflush(stdin);
        scanf("%c",&lista[i].sexo);

        printf("ingrese sueldo bruto: ");
        scanf("%f", &lista[i].sueldoBruto);

        lista[i].sueldoNeto= lista[i].sueldoBruto*0.85;

        lista[i].estado= OCUPADO;
    }else{
        printf("no hay espacio\n");
    }
}

void mostrarUnEmpleado(eEmpleado lista[],int tam)
{
    printf("%d - %s - %c - %f - %f\n ",lista[tam].legajos,lista[tam].nombre,lista[tam].sexo,lista[tam].sueldoBruto,lista[tam].sueldoNeto);
}

void mostrarLista(eEmpleado lista[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        mostrarUnEmpleado(lista,i);
    }
}


void inicializarEmpleados(eEmpleado lista[],int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        lista[i].estado = LIBRE;
    }
}

int buscarLibre(eEmpleado lista[],int tam)
{
    int i;
    int index = -1;

    for(i=0;i<tam;i++)
    {
        if(lista[i].estado == LIBRE)
        {
            index= i;
            break;
        }
    }

    return index;
}

void hardcodearDatosEmpleados(eEmpleado lista[],int tam)
{
    int i;
    int legajos[]={1,8,9,7,2,4};
    char nombres[][50]={"maria","pedro","jose","pedro","pablo","mateo"};
    char sexo[]={'f','m','m','m','m','m'};
    float sueldoBruto[]={1000,2000,3000,4000,5000,6000};

    for(i=0;i<tam;i++)
    {
        lista[i].legajos = legajos[i];
        strcpy(lista[i].nombre, nombres[i]);
        lista[i].sexo = sexo[i];
        lista[i].sueldoBruto = sueldoBruto[i];
        lista[i].sueldoNeto = sueldoBruto[i] * 0.85;
        lista[i].estado = OCUPADO;
    }
}

void modificar(eEmpleado lista[],int tam, int legajo)
{
    int i;
    int loEncontro= 0;
    printf("ingrese legajo: ");
    scanf("%d",&legajo);

    for(i=0;i<tam;i++)
    {
        if(legajo== lista[i].legajos)
        {
            printf("ingrese nuevo sueldo bruto: ");
            scanf("%f",&lista[i].sueldoBruto);

            lista[i].sueldoNeto = lista[i].sueldoBruto*0.85;
            loEncontro=1;
            break;
        }
    }
    if(loEncontro==0)
    {
        printf("el dato no existe.\n");
    }
}
/*void modificar(eEmpleado lista[],int tam)
{
    //int modificarEmpleado;
    //modificarEmpleado=buacarLegajo
    if(buacarLegajo(lista,tam) ==1)
    {
        printf("ingrese nuevo sueldo bruto: ");
        scanf("%f",&lista[tam].sueldoBruto);

        lista[tam].sueldoNeto = lista[tam].sueldoBruto*0.85;

        lista[tam].sueldoBruto = lista[tam].sueldoBruto;
        lista[tam].sueldoNeto = lista[tam].sueldoNeto;
    }
}

int buacarLegajo(eEmpleado lista[],int tam)
{
    int i;
    int loEncontro= 0;
    int buscarLegajo;
    printf("ingrese legajo: ");
    scanf("%d",&buscarLegajo);

    for(i=0;i<tam;i++)
    {
        if(buscarLegajo== lista[i].legajos)
        {
            loEncontro=1;
            break;
        }
    }
    if(loEncontro==0)
    {
        printf("el dato no existe.\n");
    }
    return loEncontro;
}*/


void darDeBaja(eEmpleado lista[],int tam,int legajo)
{
    int i;
    int loEncontro= 0;
    printf("ingrese legajo: ");
    scanf("%d",&legajo);

    for(i=0;i<tam;i++)
    {
        if(legajo== lista[i].legajos)
        {
            lista[i].estado= LIBRE;
            loEncontro=1;
            break;
        }
    }
    if(loEncontro==0)
    {
        printf("el dato no existe.\n");
    }

}
