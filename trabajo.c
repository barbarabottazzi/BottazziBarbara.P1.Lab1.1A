#include "trabajo.h"
#include "servicios.h"
#include "bicicleta.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "inputs.h"
#include "outputs.h"


//Inicializa todos los bicicletas en lugares vacios
int inicializarTrabajos(eTrabajo listaTrabajos[],int tam)
{
    int todoOk=0;
    if(listaTrabajos != NULL && tam >0)
    {
        for(int i=0; i<tam; i++)
        {
            listaTrabajos[i].isEmpty=1;
        }
        todoOk =1;
    }
    return todoOk;
}

// Busca indices libres en el array
int buscarLibreTrabajo(eTrabajo listaTrabajos[], int tam)
{
    int indice=-1;
    for (int i=0; i<tam; i++)
    {
        if(listaTrabajos[i].isEmpty)
        {
            indice=i;
            break;
        }

    }
    return indice;
}


int altaTrabajo(eTrabajo listaTrabajos[],int tam, int *pNextIDTrabajo,eServicios listaServicios[],int tamServicios,eBicicleta listaBicicletas[],int tamBicicletas, eTipo listaTipos[],int tamTipos, eColor listaColores[],int tamColores,int primerBicicleta, eCliente listaClientes[],int tamClientes )
{
    int todoOk=0;
    int indice;
    eTrabajo auxTrabajo;
    if(listaTrabajos != NULL &&tam >0 && listaServicios!= NULL && tamServicios>0 && listaBicicletas != NULL && tamBicicletas>0  && listaTipos != NULL && tamTipos>0 && listaColores != NULL && tamColores>0)
    {
        system("cls");
        printf("            ALTA TRABAJOS            \n");
        printf("-------------------------------------\n");
        indice=buscarLibreTrabajo(listaTrabajos,tam);
        if(indice == -1 )
        {
            printf("No hay lugar.../n");
        }
        else
        {
            if(primerBicicleta)
            {
                printf("---------------------------------ALTA DE TRABAJO---------------------------------");
                mostrarBiciletas(listaBicicletas,tam,listaColores,tamColores,listaTipos,tamTipos,listaClientes,tamClientes);
                getInt(&auxTrabajo.idBicicleta,"Ingrese id de Bicicleta\n","Error ingrese id valido\n");
                while((!existeBicicleta(listaBicicletas,tamBicicletas,auxTrabajo.idBicicleta)))
                {
                    getInt(&auxTrabajo.idBicicleta,"Error ingrese id valido\n","Error ingrese id valido\n");

                }
                mostrarServicios(listaServicios,tamServicios);
                getInt(&auxTrabajo.idServicio,"Ingrese id de Servicio\n","Error ingrese id valido\n");
                while((!buscarServicio(listaServicios,tamServicios,auxTrabajo.idServicio)))
                {
                    getInt(&auxTrabajo.idServicio,"Error ingrese id valido\n","Error ingrese id valido\n");

                }
                getFecha(&auxTrabajo.fecha.mes,&auxTrabajo.fecha.anio,&auxTrabajo.fecha.dia,"Ingrese una fecha en formato dd/mm/aaaa","Error,ingrese una fecha en formato valido");
                auxTrabajo.isEmpty=0;
                auxTrabajo.id=*pNextIDTrabajo;
                (*pNextIDTrabajo)++;
                //asigno los datos cargados en el aux deltro del array con posicion en indice vacio encontrado en buscarindice
                listaTrabajos[indice]=auxTrabajo;
                todoOk=1;
            }
            else
            {

                printf("Primero debe ingresar una bicicleta...\n");
            }


        }

    }
    return todoOk;
}



void mostrarTrabajo(eTrabajo trabajo, eServicios listaServicios[],int tamServicios, eBicicleta listaBicicletas[],int tamBicicletas)
{
    char servicioAMostrar[20];
    char marcaBicicleta[20];
    cargarDescripcionServicios(listaServicios,tamServicios,trabajo.idServicio,servicioAMostrar);
    cargarMarcaBicicleta(listaBicicletas,tamBicicletas,trabajo.idBicicleta,marcaBicicleta);

    printf("%-15d %-25s  %-27s %02d/%02d/%d \n\n",trabajo.id,marcaBicicleta, servicioAMostrar,trabajo.fecha.dia,trabajo.fecha.mes,trabajo.fecha.anio);
}
int mostrarTrabajos(eTrabajo listaTrabajos[], int tam,eServicios listaServicios[],int tamServicios, eBicicleta listaBicicletas[],int tamBicicletas)
{
    int todoOk=0;
    int flagTrabajo=0;
    // se verifica porque es un vector
    if(listaTrabajos != NULL && tam >0 && listaServicios != NULL && tamServicios >0 && listaBicicletas != NULL && tamBicicletas >0    )
    {
        system("cls");
        printf("                      ***Listado de Trabajos***         \n");
        printf("--------------------------------------------------------------------------------\n");
        printf("Id:         Marca Bicicleta:            Servicio:                       Fecha:          \n");
        printf("--------------------------------------------------------------------------------\n");
        for(int i=0; i<tam; i++)
        {
            if(listaTrabajos[i].isEmpty==0)
            {
                mostrarTrabajo(listaTrabajos[i],listaServicios,tamServicios,listaBicicletas,tamBicicletas);
                flagTrabajo=1;
            }

        }
        if(!flagTrabajo)
        {
            printf("No hay trabajos para mostrar...\n");
        }
        todoOk=1;
    }

    return todoOk;

}
