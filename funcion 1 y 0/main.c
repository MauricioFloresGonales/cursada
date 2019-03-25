#include <stdio.h>
#include <stdlib.h>

void sumar(int, int);

int main()
{
    int numeroUno;
    int numeroDos;
    int resultado;

    printf("Ingrese un numero:");
    scanf("%d", &numeroUno);
    printf("ingrese otro numero:");
    scanf("%d", &numeroDos);
   // resultado= sumar(numeroUno, numeroDos);
    resultado= numeroUno + numeroDos;
    printf("el resultado es: %d", resultado);
    return 0;
}

void sumar(int unNumero ,int otroNumero)
{
    int resultado;

    resultado= unNumero + otroNumero;

}
