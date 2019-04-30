#include <stdio.h>
#include <stdlib.h>


/*1º manera:
struct eEmpleado
{
    int legajos;
    char nombre[20];
    char sexo;
    float sueldoBruto:
    float sueldoNeto;
};*/

//2º manera
typedef struct
{
    int legajos;
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
    eEmpleado unEmpleado;//= {1000,"martin",'m',15000,12000};// ---- 1
    /*eEmpleado otroEmpleado; //= {5000,"juan",'m',10000,14000};//--- 2

    puts(unEmpleado.nombre);
    puts(otroEmpleado.nombre);*/

    eEmpleado otroEmpleado;

    unEmpleado=otroEmpleado

    printf("ingrese legajo: ");
    scanf("%d", &unEmpleado.legajos);

    printf("ingrese nombre: ");
    fflush(stdin);
    gets(unEmpleado.nombre);

    printf("ingrese sexo (M o F): ");
    fflush(stdin);
    scanf("%c",&unEmpleado.sexo);

    printf("ingrese sueldo bruto: ");
    scanf("%f", &unEmpleado.sueldoBruto);

    unEmpleado.sueldoNeto= unEmpleado.sueldoBruto*0.85;

    printf("%d - %s - %c - %f - %f ",unEmpleado.legajos,unEmpleado.nombre,unEmpleado.sexo,unEmpleado.sueldoBruto,unEmpleado.sueldoNeto);

    return 0;
}
