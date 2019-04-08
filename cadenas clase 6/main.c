#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palabra[100]="PHIlipa", otraPalabra[100]=";
    int comp;
    strcat(otraPalabra, palabra);
    strcat(otraPalabra,"fin");
    printf("%d", otraPalabra);


    return 0;
}

//strncpy(palabra, otraPalabra, 4);
