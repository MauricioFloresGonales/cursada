#include <stdio.h>
#include <stdlib.h>
int pedirNota(void);
float sacarPromedio(int ,int);
int aprobarMateria(int,int);
void ejercicioUno(void);

/*int(main)
{
    int valor

    valor= pedirNota()
}*/
int main()
{
    int nota;
    int resultado;
    int i;

/*    do{
        printf("ingrese una nota entre 0  y 10:");
        scanf("%d", &notaUno);
    } while(nota<0 && nota>10);

    resultado= promedio(notaUno, numeroDos);
    printf("el resultado es: %d", resultado);*/

    printf("ingrese una nota:\n");
    scanf("%d", &nota);

   while()
    //valorUno= aprobomateria(6,2)
    return nota;
}

float sacarPromedio(int suma ,int cantidad)
{
    float promedio;
    promedio = (float) suma/cantidad;
    return promedio;
}
int aprobarMateria(int notaminima,int nota)
{
    int valor;
    if(nota>6)

        valor=1;
    else
        valor=0;

    return valor;
}
