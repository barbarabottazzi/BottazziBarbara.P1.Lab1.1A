#include "tipo.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void mostrarTipo(eTipo tipo)
{

    printf("%d      %-10s                 \n\n",tipo.id,tipo.descripcion);
}
int mostrarTipos(eTipo listaTipos[], int tam)
{
    int todoOk=0;
    // se verifica porque es un vector
    if(listaTipos != NULL && tam >0 )
    {
        system("cls");
        printf("          ***Listado de Tipos***         \n");
        printf("---------------------------------------------\n");
        printf("Id:         Desripcion:               \n");
        printf("---------------------------------------------\n");
        for(int i=0; i<tam; i++)
        {
            mostrarTipo(listaTipos[i]);

        }

        todoOk=1;
    }

    return todoOk;

}
int cargarDescripcionTipos(eTipo listaMarcas[],int tamMarcas, int idTipo,char tipoAmostrar[]){

 int todoOk=0;
    if(listaMarcas != NULL && tamMarcas > 0 && tipoAmostrar != NULL )
    {
        for(int i=0; i<tamMarcas; i++)
        {
            if(listaMarcas[i].id == idTipo)
            {
                strcpy(tipoAmostrar,listaMarcas[i].descripcion);
                break;
            }
        }
        todoOk=1;
    }
    return todoOk;


}
int existeTipo(eTipo listaTipos[],int tamTipos,int idTipo)
{
    int existe=0;
    if(listaTipos!= NULL && tamTipos>0)
    {
        for(int i=0; i<tamTipos; i++)
        {
            if(listaTipos[i].id == idTipo)
            {
                existe=1;
                break;
                break;
            }
        }
    }
    return existe;
}
