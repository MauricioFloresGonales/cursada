#include <stdio.h>
#include <stdlib.h>

//void sumarNumeros(void, void);
int main()
{
    int numeroUno;
    int numeroDos;
    int resultado;

    printf("ingrese un numero:");
    scanf("%d", &numeroUno);
    printf("ingrese otro numero:");
    scanf("%d", &numeroDos);

    resultado= numeroUno + numeroDos;

    printf("el resultado es: %d", resultado);
    return 0;
}

/*void sumarNumeros(void unNumero, void otroNumero);
{
    int resultado;

    resultado= unNumero + otroNumero;

    return resultado;
}*/
