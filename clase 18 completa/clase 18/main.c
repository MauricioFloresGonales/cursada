#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
  FILE * miArchivo;
  char nombre[20]= "mauricio";
  miArchivo = fopen("C:\\Users\\alumno\\Desktop\\clase 18\\misdatos.txt","w");
  fprintf(miArchivo,nombre);
  fclose(miArchivo);

  */
/*
  FILE * miArchivo;
  char nombre[20];
  miArchivo = fopen("C:\\Users\\alumno\\Desktop\\clase 18\\misdatos.txt","r");
  fgets(nombre,30,miArchivo);
  fclose(miArchivo);
  printf("%s",nombre);
  */

//----------------------------------------------------------------------------------------------------------------------------
/*
  FILE * miArchivo;
  char nombre[20]= "mauricio";
  miArchivo = fopen("C:\\Users\\alumno\\Desktop\\clase 18\\misdatos.txt","w");
  fprintf(miArchivo,"su nombre es: \n %s",nombre);
  fclose(miArchivo);
  miArchivo = fopen("C:\\Users\\alumno\\Desktop\\clase 18\\misdatos.txt","r");
  fgets(nombre,30,miArchivo);
  fgets(nombre,30,miArchivo);
  fclose(miArchivo);
  printf("%s",nombre);
*/
//----------------------------------------------------------------------------------------------------------------------------

    FILE * miArchivo;
    char nombre[20]= "mauricio";
    miArchivo = fopen("C:\\Users\\alumno\\Desktop\\clase 18\\misdatos.txt","w");
    miArchivo = fopen("C:\\Users\\alumno\\Desktop\\clase 18\\misdatos.txt","r");
    while(!feof(miArchivo))
    {
        fgets(nombre,30,miArchivo);
        printf("%s",nombre);
    }
    fclose(miArchivo);








    return 0;
}
