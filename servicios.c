#include "servicios.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void mostrarServicio(eServicios servicio)
{

    printf("%d      %-10s             $%-10.2f      \n\n",servicio.id,servicio.descripcion,servicio.precio);
}
int mostrarServicios(eServicios listaServicios[], int tam)
{
    int todoOk=0;

    // se verifica porque es un vector
    if(listaServicios != NULL && tam >0 )
    {
        system("cls");
        printf("          ***Listado de Servicios***         \n");
        printf("---------------------------------------------\n");
        printf("Id:         Desripcion:         Precio:      \n");
        printf("---------------------------------------------\n");
        for(int i=0; i<tam; i++)
        {

            mostrarServicio(listaServicios[i]);

        }

        todoOk=1;
    }

    return todoOk;

}
int cargarDescripcionServicios(eServicios listaServicios[],int tamServicios, int idServicio,char servicioAMostrar[])
{

    int todoOk=0;
    if(listaServicios != NULL && tamServicios > 0 && servicioAMostrar != NULL )
    {
        for(int i=0; i<tamServicios; i++)
        {
            if(listaServicios[i].id == idServicio)
            {
                strcpy(servicioAMostrar,listaServicios[i].descripcion);
                break;
            }
        }
        todoOk=1;
    }
    return todoOk;
}


int buscarServicio(eServicios listaServicios[],int tamServicios,int idServicioABuscar){
int existe=0;
if(listaServicios!= NULL && tamServicios>0){
    for(int i=0;i<tamServicios;i++){
        if(listaServicios[i].id == idServicioABuscar){
            existe=1;
            break;
        }
    }
}
return existe;
}
