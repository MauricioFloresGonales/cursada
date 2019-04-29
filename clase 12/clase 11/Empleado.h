#include <stdio.h>

#define LIBRE 0
#define OCUPADO 1

typedef struct
{
    int dia;
    int mes;
    int anio;
}eFecha;

typedef struct
{
    int idSector;

    char descripcion[20];
     float valor;

}eSector;

typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;

    int cantidadHoras;

    int idSector;

    float sueldoBruto;
    float sueldoNeto;

    int estado;

} eEmpleado;

//--------------------------------------------------------------------

typedef struct
{
    int idSector;
    int contadorEmpleados;
    char descripcion[50];
}eAuxiliar;

//--------------------------------------------------------------------

void mostrarEmpleado(eEmpleado, eSector[], int);
void cargarEmpleado(eEmpleado lista[], int,eSector lista[],int)<
void mostrarListaEmpleados(eEmpleado[], int, eSector[], int);

int buscarLibre(eEmpleado[], int);
void inicializarEmpleados(eEmpleado[], int);
void hardcodearDatosEmpleados(eEmpleado[], int);
void modificar(eEmpleado[], int, int);
int buscarLegajo(eEmpleado[], int, int);
void borrarEmpleado(eEmpleado[], int, int);

float buscarSueldoMaximo(eEmpleado[],int);
void mostrarEmpleadosSueldoMaximo(eEmpleado[],int);
int contarCarlos(eEmpleado[],int);

int valorSector(int eSector[],int)

//-----------------------------------------------------

void mostrarEmpleadoPorSector(eSector[],int,eEmpleado[],int);
void mostrarSectorConMasEmpleados(eSector[],int,eEmpleado[],int);




