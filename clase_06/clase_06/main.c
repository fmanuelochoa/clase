#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[20];//={'X','O','X','X','\0'}; // equivale a char nombre[257]="HOLA";
    //char nombre2[20];//="HOLA";
    char buffer[20];
    int i;

    printf("ingrese un nombre ");
    strncpy(buffer, nombre,sizeof(nombre));
    fgets(buffer,sizeof(buffer),stdin);
    for(i=0;i<20;i++)
    {
        if(buffer[i]>='a' && buffer[i]<='z')
        {
        nombre[i] = buffer[i];
        strncpy(nombre, buffer,sizeof(nombre));
        fgets(nombre,sizeof(nombre),stdin);
        printf("\n%s muy bien",nombre);
        return 0;


        }
        else
        {
        printf("\n ERROR");
        break;
        }

    }

    //sizeof(nombre) guarda el tamaño del array que puede estar en un define

    //strncpy(nombre, nombre2,sizeof(nombre));     // entre parentesis (destino origen y tamaño(sizeof(nombre)) es el tamaño con una funcion
    //fgets(nombre,sizeof(nombre),stdin); //reemplaza scanf con un maximo de caracteres que puede leer el programa
    //printf("\n%s",nombre);


    //strlen()//cuantos caracteres tiene adentro
    //strcmp()//compara arrays cual es mas grande y devuelve 1 o 0





    return 0;
}
