#include "tipo.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "color.h"
void mostrarColor(eColor color)
{

    printf("%d      %-10s                 \n\n",color.id,color.nombreColor);
}
int mostrarColores(eColor listaColores[], int tam)
{
    int todoOk=0;
    // se verifica porque es un vector
    if(listaColores != NULL && tam >0 )
    {
        system("cls");
        printf("          ***Listado de Colores***         \n");
        printf("---------------------------------------------\n");
        printf("Id:         Nombre:               \n");
        printf("---------------------------------------------\n");
        for(int i=0; i<tam; i++)
        {
            mostrarColor(listaColores[i]);

        }

        todoOk=1;
    }

    return todoOk;

}

int cargarDescripcionColores(eColor listaColores[],int tamColores, int idColor,char colorAMostrar[])
{

    int todoOk=0;
    if(listaColores != NULL && tamColores > 0 && colorAMostrar != NULL )
    {
        for(int i=0; i<tamColores; i++)
        {
            if(listaColores[i].id == idColor)
            {
                strcpy(colorAMostrar,listaColores[i].nombreColor);
                break;
            }
        }
        todoOk=1;
    }
    return todoOk;
}
int existeColor(eColor listaColores[],int tamColores,int idColor)
{
    int existe=0;
    if(listaColores!= NULL && tamColores>0)
    {
        for(int i=0; i<tamColores; i++)
        {
            if(listaColores[i].id == idColor)
            {
                existe=1;
                break;
                break;
            }
        }
    }
    return existe;
}
