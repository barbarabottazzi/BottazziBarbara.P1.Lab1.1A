#include "cliente.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int cargarDescripcionClientes(eCliente listaClientes[],int tamClientes, int idCliente,char nombreAMostrar[])
{

    int todoOk=0;
    if(listaClientes != NULL && tamClientes > 0 && nombreAMostrar != NULL )
    {
        for(int i=0; i<5; i++)
        {
            if(listaClientes[i].id == idCliente)
            {
                strcpy(nombreAMostrar,listaClientes[i].nombre);
                break;
            }
        }
        todoOk=1;
    }
    return todoOk;


}

void mostrarCliente(eCliente clienteInd)
{

    printf("%-10d %-15s %-17c  \n\n",clienteInd.id,clienteInd.nombre,clienteInd.sexo);

}
int mostrarClientes(eCliente listaClientes[], int tam )
{
    int todoOk=0;
    //int flagCliente=0;
    // se verifica porque es un vector
    if(listaClientes != NULL && tam >0 )
    {
        system("cls");
        printf("          ***Listado de Clientes***                                    \n");
        printf("----------------------------------------------------------------------------------------\n");
        printf("Id:         Nombre:         Sexo:                                                      \n");
        printf("----------------------------------------------------------------------------------------\n");
        for(int i=0; i<tam; i++)
        {
            //  if(listaClientes[i].isEmpty == 0)
            //{
            mostrarCliente(listaClientes[i]);

            // flagCliente=1;
            //       }

        }
        //if(!flagCliente)
//        {
//            printf("No hay clientes para mostrar...\n");
//        }
        todoOk=1;
    }

    return todoOk;

}

