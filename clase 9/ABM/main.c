#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Empleado.h"
#define T 3


int main()
{
    eEmpleado lista[T];
    inicializarEmpleados(lista,T);

{
    int opcion;
    char seguir='s';

    hardcodearDatosEmpleados(lista,T);

   do{
        printf("1.Alta\n2.Baja\n3.Modificar\n4.Mostrar\n5.Salir\nElija una opcion: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                cargarEmpleados(lista,T);
                break;
            case 2:
                darDeBaja(lista,T,9);
                break;
            case 3:
                    modificar(lista,T,1);
                break;
            case 4:
                mostrarLista(lista,T);
                break;
            case 5:
                seguir='n';
                break;
            default:
                printf("ERROR. Ingrese una opcion valida.\n");
                system("pause");
                break;
        }
        system("pause");
        system("cls");

    }while(seguir=='s');
}


    return 0;
}
