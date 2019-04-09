#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char nombre[20];
    char apellido[20];
    char apellidoNombre[41]= "";
    int i=0;

    pedirCadena("nombre: ", nombre, 20);
    pedirCadena("apellido: ", apellido, 20);

    strcat(apellidoNombre, apellido);
    strcat(apellidoNombre, ", ");
    strcat(apellidoNombre, nombre);

    strlwr(apellidoNombre);

    apellidoNombre[0]=toupper(apellidoNombre[0]);

    while(apellidoNombre[i]!= '\0')
    {
        if(apellidoNombre[i]== '' )
        {
            apellidoNombre[i+1]=toupper(apellidoNombre[i+1]))
        }
        i++;
    }

    putc(apellidoNombre);


    return 0;
}


    void pedirCadena(char[], char[];
    void pedirCadena(char mensaje[], char cadena[])
    {
        printf("%s", mensaje);
        scanf("%[^\n]", cadena);
    }

    void valorCadena(char[], char);
    void valorCadena(char mensaje error[], char cadena)
    {
        while(strlen(cadena)>tam)
        {
            printf("reintente %s", mensajeError);
            fflush();
            scanf("")
        }
    }

