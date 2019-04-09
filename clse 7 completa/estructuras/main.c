#include <stdio.h>
#include <stdlib.h>


/*1º manera:
struct eEmpleado
{
    int tlegajo;
    char nombre[20];
    char sexo;
    float sueldoBruto:
    float sueldoNeto;
};*/

//2º manera
typedef struct
{
    int tlegajo;
    char nombre[20];
    char sexo;
    float sueldoBruto;
    float sueldoNeto;
} eEmpleado;



int main()
{
    /*1º manera:
    struct eEmpleado unEmpleado;  */

    //2º manera:
    eEmpleado unEmpleado //= {1000,"martin",'m',15000,12000};// ---- 1
    eEmpleado unEmpleado //= {5000,"juan",'m',10000,14000};//--- 2

    puts(unEmpleado.nombre);// ---- 1
    puts(unEmpleado.nombre);//--- 2

    printf("ingrese legajo: ");
    scanf("%d", &unEmpleado);
    printf("ingrese nombre: ");
    fflush(stdin);

    printf("ingrese sexo: ");
    scanf("%c", &unEmpleado,sexo);
    printf("ingrese suledo bruto: ");
    scanf("%f",&unEmpleado.sueldoBruto);
    unEmpleado.suledoNeto = unEmpleado.seldoBruto

    return 0;
}
