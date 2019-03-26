#include <stdio.h>
#include <stdlib.h>

int sacarPromedio(int, int);

int main()
{
   // void ejerUno(void)

    /*int datoResivido= pedirNota();
    printf("ingrese una nota:%d", datoResivido);*/ //pedirNota.

    int nota= aprovoMateria(6,8);


}

int pedirNota(void)
{
     int notaIngresada;

    do{
        printf("ingrese una nota entre 0 y 10:");
        scanf("%d", &notaIngresada);
        printf("ingrese otra nota entre 0 y 10:");
        scanf("%d", &notaIngresada);
    }while(notaIngresada<0 || notaIngresada>10);

    return notaIngresada;
}

float sacarPromedio(int suma, int cantidad)
{
    float promedio;

    promedio= (float)suma/cantidad;

    return promedio;
}

int aprovarMateria(int notaMinima, int nota)
{
    if(nota>=notaMinima)
        return 1;
       else
        return 0;
}


