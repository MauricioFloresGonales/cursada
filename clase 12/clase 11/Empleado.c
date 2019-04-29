
#include "Empleado.h"
#include <string.h>


void cargarEmpleado(eEmpleado lista[], int te,eSector lista sectores[],int ts)
{
    int i;
    int j;

    i = buscarLibre(lista, tam);
    if(i!=-1)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &lista[i].legajo);
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(lista[i].nombre);
        printf("Ingrese sexo: ");
        fflush(stdin);
        scanf("%c", &lista[i].sexo);

        printf("elesija sector:\n ");

        for(j=0;j<ts;j++)
        {
            printf("%d.\t%s\n",lista sectores[j].idSector,eSector[j].descripcion);
        }
        scanf("%d",&lsitaEmpleados[i].idSector);

      /*  printf("ingrese la cantidad de horas: ");
        scanf("%d",&lsitaEmpleados[i].cantidadHores);
        for(j=0;j<ts;j++)
        {
            if(lsitaEmpleados[i].cantidadHores)
            {
                valorHoraSector= listaSectores[j].valor
            }
        }

        listaEmpleados*/


        lista[i].sueldoNeto =lista[i].sueldoBruto*0.85;

        lista[i].estado = OCUPADO;

    }
    else
    {
        printf("No hay espacio");
    }



}

void mostrarListaEmpleados(eEmpleado lista[], int tam, eSector sectores[], int ts)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado!=LIBRE)
        {
            mostrarEmpleado(lista[i], sectores, ts);
        }

    }
}
void mostrarEmpleado(eEmpleado unEmpleado, eSector sectores[], int ts)
{

    char descripcionSector[20];
    int i;

    for(i=0; i<ts; i++)
    {
        if(unEmpleado.idSector==sectores[i].idSector)
        {
            strcpy(descripcionSector, sectores[i].descripcion);
            break;
        }
    }

    printf("%4d %10s %c %4f %4f   %s\n", unEmpleado.legajo,unEmpleado.nombre, unEmpleado.sexo, unEmpleado.sueldoBruto,unEmpleado.sueldoNeto,descripcionSector);






}
int buscarLibre(eEmpleado lista[], int tam)
{
    int i;
    int index=-1;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==LIBRE)
        {
            index = i;
            break;
        }
    }
    return index;
}
void inicializarEmpleados(eEmpleado lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        lista[i].estado = LIBRE;
    }
}

void hardcodearDatosEmpleados(eEmpleado lista[], int tam)
{
    int i;
    int legajos[]= {1,8,9,7,2,4};
    char nombres[][50]= {"Carlos","Maria","Carlos","Pedro","Carlos","Mateo"};
    char sexo[]= {'M','F','M','M','M','M'};
    float sueldosBruto[]= {22000,22000,15000,4000,21000,6000};
    int sector[]={1,2,3,1,2,2};

    eFecha unaFecha = {22,04,2019};

    for(i=0; i<tam; i++)
    {
        lista[i].legajo = legajos[i];
        strcpy(lista[i].nombre, nombres[i]);
        lista[i].sexo = sexo[i];
        lista[i].sueldoBruto = sueldosBruto[i];
        lista[i].sueldoNeto = sueldosBruto[i] * 0.85;
        lista[i].estado = OCUPADO;
        lista[i].idSector = sector[i];

    }


}
void modificar(eEmpleado lista[], int tam, int legajo)
{

    int i;
    int loEncontro = 0;
    printf("Ingrese legajo: ");
    scanf("%d", &legajo);

    for(i=0; i<tam; i++)
    {
        if(legajo == lista[i].legajo)
        {


            printf("Ingrese un nuevo sueldo bruto: ");
            scanf("%f", &lista[i].sueldoBruto);

            lista[i].sueldoNeto = lista[i].sueldoBruto*0.85;


            loEncontro = 1;
            break;//modifcar
        }

    }

    if(loEncontro==0)
    {
        printf("El dato no existe");
    }





}

void borrarEmpleado(eEmpleado lista[], int tam, int legajo)
{

    int i;
    int loEncontro = 0;
    printf("Ingrese legajo: ");
    scanf("%d", &legajo);

    for(i=0; i<tam; i++)
    {
        if(legajo == lista[i].legajo)
        {

            lista[i].estado = LIBRE;


            loEncontro = 1;
            break;//modifcar
        }

    }

    if(loEncontro==0)
    {
        printf("El dato no existe");
    }

}

float buscarSueldoMaximo(eEmpleado lista[], int tam)
{
    float maximo;
    int flag = 0;
    int i;

    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==OCUPADO)
        {
            if(flag==0 || lista[i].sueldoBruto>maximo)
            {
                maximo = lista[i].sueldoBruto;
                flag = 1;
            }
        }

    }



    return maximo;

}
void mostrarEmpleadosSueldoMaximo(eEmpleado lista[], int tam)
{
    float maximo;
    int i;

    maximo = buscarSueldoMaximo(lista, tam);

    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==OCUPADO && maximo == lista[i].sueldoBruto)
        {
            //mostrarEmpleado(lista[i]);

        }
    }

}

int contarCarlos(eEmpleado lista[], int tam)
{
    int contadorCarlos = 0;
    int i;

    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==OCUPADO)
        {
            if(stricmp(lista[i].nombre,"carlos")==0 && lista[i].sueldoBruto>20000)
            {
                contadorCarlos++;
            }
        }
    }

    return contadorCarlos;
}



int buscarLegajo(eEmpleado lista[], int tam, int legajo)
{

}
/*
float valorSector(float eSector.valor[],int tam)
{
    int i;
        for(i=0;i<tam;i++)
        {
            if(eSector.valor[] == 1)
            {
                eSector.valor[]=1000
            }else{
                if(eSector.valor[] == 2)
                {
                    eSector.valor[]=
                }
            }else{
                eSector.valor[]=1000
            }


        }
}

*/

//----------------------------------------------------------

void mostrarEmpleadoPorSector(eSector sectores[],int ts,eEmpleado empleados[],int te)
{
    int i;
    int j;

    for(i=0;i<ts;i++)
    {
        printf("%s:\n", sectores[i].descripcion);

        for(i=0;i<ts;i++)
        {
            if(sectores[i].idSecores== empleados[j] idSector)
            {
                mostrarEmpleado(empleados[j],sectores,ts);
            }
        }
    }
}

void mostrarSectorConMasEmpleados(eSector sectores[],int ts,eEmpleado empeados[],int te)
{
    eAuxiliar auxiliar[3];
    int i;
    int j;
    int maximo,

    for(i=0;i<ts,i++)
    {
        auxiliar[i].idSector = sectores[i].idSector;
        strcpy(auxiliar[i].descripcion,);
        auxiliar[i].contadorEmpleados=0;
    }

    for(i=0;i<ts;i++)
    {
        if(auxiliar[i].idSector == empeados[j].idSector)
        {
            auxiliar[i].contadorEmpleados;
        }
    }

    for(i=0;i<ts;i++)
    {
        if(flag==0 ||auxiliar[i].contadorEmpleados>maximo;)
        {
            maximo= auxiliar[i].contadorEmpleados;
            flag= 1;
        }
    }

    for(i=0;i<ts;i++)
    {
        if(auxiliar[i].contadorEmpleados == maximo)
        {
            printf("sector %d\n", auxiliar[i].descripcion);
        }
    }
}
