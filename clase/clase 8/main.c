#include <stdio.h>
#include <stdlib.h>
#define T 3


typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldoBruto;
    float sueldoNeto;
} eEmpleado;

void mostrarEmpleado(eEmpleado);//
void pedirEmpleados(eEmpleado[], int);
void mostrarListaDeEmpleado(eEmpleado[], int);
int buscarLibre(eEmpleado[], int);
void iniciarEmpleados()
int buscarUno(eEmpleado[],int,int);
int borrarUno(eEmpleado[],int,int);


int main()
{
    int pedirDatos;
    int mostraDatos;
    eEmpleado lista[T];

    //datos= pedirEmpleados(legajos[T], nombres[T][20], sexos[T], suledos[T]);--------- mal.
    pedirDatos= pedirEmpleados(eEmpleado[], T);
    mostraDatos= mostrarEmpleado(eEmpleado miEmpleado);

  /*  int i;
    for(i=0;i=T;i++)
    {
        printf("ingrese legajo: ");
        scanf("%d",&lista[i].legtajo);
        printf("ingrese nombre: ");
        scanf("%s",&lista[i].nombre);
        fflush(stdin);
        printf("ingrese sexo: ");
        scanf("%c",&lista[i].sexo);
        printf("ingrese sueldoBurto: ");
        scanf("%f",&lista[i].sueldoBurto);
    }

    unEmpleado.suledoNeto = unEmpleado.seldoBruto;
    otroEmpleado=unEmpleado;

)

    for(i=0;i=T;i++)
    {
        motrarEmpleado(lista[i])
    }

    */

    return 0;
}

    void mostrarEmpleado(eEmpleado)//
    {
        printf("%d-%s-%c-%f\n", eEmpleado.legajo,eEmpleado.nombre,eEmpleado.sexo,eEmpleado.sueldoBurto);
    }

    void pedirEmpleados(eEmpleado[], T)
    {
        int i;
        for(i=0;i=T;i++)
        {
            printf("ingrese legajo: ");
            scanf("%d",&lista[i].legtajo);
            printf("ingrese nombre: ");
            fflush(stdin);
            gets(unEmpleado.nombre);
            printf("ingrese sexo: ");
            fflush(stdin);
            scanf("%c",&lista[i].sexo);
            printf("ingrese sueldoBurto: ");
            scanf("%f",&lista[i].sueldoBurto);
        }
    }

/* ----------------esta mal porqueuse aray paralela:
    int pedirEmpleados(int[],char[],char[],float)
    int i;
    for(i=0;i=T;i++)
    {
        printf("ingrese legajo: ");
        scanf("%d",&lista[i].legtajo);
        printf("ingrese nombre: ");
        scanf("%s",&lista[i].nombre);
        fflush(stdin);
        printf("ingrese sexo: ");
        scanf("%c",&lista[i].sexo);
        printf("ingrese sueldoBurto: ");
        scanf("%f",&lista[i].sueldoBurto);
    }

*/
    int buscarLibre(eEmpleado[], int);
    {

    }

    void iniciarEmpleados()
    {

    }

    int buscarUno(eEmpleado[],int,int)
    {

    }
    int borrarUno(eEmpleado[],int,int)
    {

    }

