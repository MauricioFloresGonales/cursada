#include <stdio.h>
#include <stdlib.h>


/*prototipo/firma: que resive y que devuelve
 tipo_de__dato identificador[(parametros)];*/

int sumarNumeros(int, int);

int main()
{
    int numeroUno;
    int numeroDos;
    int resultado;

    printf("ingrese un numero:");
    scanf("%d", &numeroUno);
    printf("ingrese otro numero:");
    scanf("%d", &numeroDos);

    resultado= sumarNumeros(numeroUno, numeroDos);
    printf("el resultado es: %d", resultado);

    return 0;
}

int sumarNumeros(int unNumero, int otroNumero)
{
    int resultado;

    resultado= unNumero + otroNumero;

    return resultado;
}
