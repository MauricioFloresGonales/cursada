/*
int main()
{
    char palabra[20];
    int len;


    printf("ingrese nombre y apellido: ");
    //scanf("%s", palabra);
    /*gets(palabra);//equivale a scanf.*/
    /*scanf("%^\n", palabra)//Cambio manalmente la mascara por una que creo yo*/
    /*fgets(palabra,20,stdin);*/

  /*  gets(palabra);



    len= strlen(palabra);
    printf("la palabra es: %s\dCantidad: %d", palabra, len);

    printf("%s", palabra);

    return 0;
}
*/

/*

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palabra[100]="philipa", otraPalabra;
    int comp;
    /*strncpy(palabra, otraPalabra, 4);*/
    /*comp = strcmp(palabra,"asony");*///comparar
    comp = stricmp(palabra,"asony");
    printf("%d", comp);

 /*  if(palabra=="philipa")
    {
        printf("es igual");
    }else{

        printf("no es igual");
    }*/

/*

    return 0;
}
*/
