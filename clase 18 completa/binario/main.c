#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int legajo;
    char nombre[20];
    float sueldo;

}eEmpleado;

int main()
{
    /*
    //ESCRITURA:
    FILE* miArchivo;
    int* x =(int*)malloc(sizeof(int));
    *X=4
    miArchivo=fopen("datos.dat","wb");
    fwrite(&x,sizeof(int),1,miArchivo);
    fclose(miArchivo);
    */
    //----------------------------------------------------------------------------------------------------------------------------

    //LECTURA:

    FILE* miArchivo;
    int* x;
    x=(int*)malloc(sizeof(int));
    miArchivo=fopen("datos.dat","rb");
    fread(x,sizeof(int),1,miArchivo);
    fclose(miArchivo);
    printf("%d",*x);


    return 0;

}
