#include <stdio.h>
#include <stdlib.h>

void ordenarVector(int[], int);
int main()
{
    int valores[10]= {1,2,3,,4,5,6,7,8,9,10};
    void ordenarVector(int numeros[], int tam);

    return 0;
}

    ordenarVector( numeros[], int tam)
{
    int i, j;
    int aux;
    for(i=0 ; i<tam-1 ; i++)
    {
        for(j=i+1 ; j<tam ; j++)
        {
            printf("para i=%d, con j=%d\n", numeros);
            if(numeros[i]>numeros[j])//CRITERIO
            {
                aux= numeros[i];
                numeros[i]=numeros[j];
                nuemros[j]= aux;
            }
        }
    }
}
