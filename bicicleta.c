#include "bicicleta.h"
#include "tipo.h"
#include "color.h"
#include <stdlib.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "validaciones.h"
#include <ctype.h>
#include "inputs.h"
#include "menu.h"
#include "outputs.h"
#include "bicicleta.h"
#include "color.h"
#include "tipo.h"

//Inicializa todos los autos en lugares vacios
int inicializarBicicletas(eBicicleta listaBicicletas[],int tam)
{
    int todoOk=0;
    if(listaBicicletas != NULL && tam >0)
    {
        for(int i=0; i<tam; i++)
        {
            listaBicicletas[i].isEmpty=1;
        }
        todoOk =1;
    }
    return todoOk;
}

// Busca indices libres en el array
int buscarLibreBicicleta(eBicicleta listaBicicletas[], int tam)
{
    int indice=-1;
    for (int i=0; i<tam; i++)
    {
        if(listaBicicletas[i].isEmpty)
        {
            indice=i;
            break;
        }

    }
    return indice;
}

int buscarIndiceBicicletaId(eBicicleta listaBicicletas[],int tam,int id)

{
    int indice = -1;
    for (int i=0; i<tam; i++)
    {
        if(!listaBicicletas[i].isEmpty && listaBicicletas[i].id == id )
        {
            indice=i;
            break;
        }
    }
    return indice;

}
int existeBicicleta(eBicicleta listaBicicletas[], int tam,int idBicicleta)
{
   int existe=0;
    if(listaBicicletas!= NULL && tam>0)
    {
        for(int i=0; i<tam; i++)
        {
            if(listaBicicletas[i].id == idBicicleta)
            {
                existe=1;
                break;
            }
        }
    }
    return existe;
}
int buscarIndiceAutoId(eBicicleta listaBicicletas[],int tam, int id)
{
    int indice = -1;
    for (int i=0; i<tam; i++)
    {
        if(!listaBicicletas[i].isEmpty && listaBicicletas[i].id == id )
        {
            indice=i;
            break;
        }
    }
    return indice;
}




int altaBicicleta(eBicicleta listaBicicletas[],int tam, int *pNextIdBicicleta,eColor listaColores[],int tamColores,eTipo listaTipos[], int tamTipos,int *pPrimerBicicleta )
{
    int todoOk=0;
    int indice;
    eBicicleta auxBicicleta;
    if(listaBicicletas != NULL &&tam >0 && listaColores != NULL &&tamColores >0 && listaTipos != NULL &&tamTipos >0)
    {
        system("cls");

        indice=buscarLibreBicicleta(listaBicicletas,tam);
        if(indice == -1)
        {
            printf("No hay lugar.../n");
        }
        else
        {
            printf("---------------------------------ALTA DE BICICLETA---------------------------------\n");
            getString("Ingrese marca","Error,nombre muy largo",auxBicicleta.marca,20);
            mostrarColores(listaColores,tamColores);
            getInt(&auxBicicleta.idColor,"Ingrese Color\n","Error ingrese id valido\n") ;
            while(!existeColor(listaColores,tamColores,auxBicicleta.idColor))
            {

                getInt(&auxBicicleta.idColor,"Error,Ingrese Color valido\n","Error ingrese id valido\n") ;

            }
            mostrarTipos(listaTipos,tamTipos);
            getInt(&auxBicicleta.idTipo,"Ingrese id de tipo\n", "Error, ingrese numero valido");
            while(!existeTipo(listaTipos,tamTipos,auxBicicleta.idTipo))
            {
                getInt(&auxBicicleta.idTipo,"Ingrese id de tipo valido\n", "Error, ingrese numero valido");

            }
            validaciones_ingresoChar(&auxBicicleta.material,"Ingrese un material\n","Ingrese 'c' para carbono, 'a' para aluminio",'c','a');
            auxBicicleta.isEmpty=0;


            auxBicicleta.id=*pNextIdBicicleta;
            (*pNextIdBicicleta)++;
            //asigno los datos cargados en el aux deltro del array con posicion en indice vacio encontrado en buscarindice
            listaBicicletas[indice]=auxBicicleta;
            *pPrimerBicicleta=1;
            todoOk=1;
        }

    }
    return todoOk;
};

int bajaBicicleta(eBicicleta listaBicicletas[],int tam,eColor listaColores[], int tamColores, eTipo listaTipos[], int tamTipos)
{


    int todoOk=0;
    int id;
    int indice;
    char confirma;
    if(listaBicicletas != NULL && tam>0  && listaColores != NULL &&tamColores >0 && listaTipos != NULL &&tamTipos >0)
    {

        do
        {
            system("cls");
            printf("BAJA BICICLETA\n");
            mostrarBiciletas(listaBicicletas,tam,listaColores,tamColores,listaTipos,tamTipos);
            fflush(stdin);
            getInt(&id,"Ingrese el id de la bicilets a dar baja : \n","Error,ingrese un numero valido\n");
            indice=buscarIndiceBicicletaId(listaBicicletas,tam,id);
            if(indice == -1)
            {
                printf("Error,no se encuentra registrada ninguna bicicleta con id %d..\n",id);
                validaciones_confirma(&confirma, "quiere volver a intentarlo?\n",'s','n');
            };

            if(indice != -1)
            {
                printf("\n");
                mostrarBicileta(listaBicicletas[indice],listaColores,tamColores,listaTipos,tamTipos);
                validaciones_confirma(&confirma,"Confirma baja? escriba si para confirmar... \n",'s','n');
                confirma=tolower(confirma);
                if(confirma == 's')
                {
                    listaBicicletas[indice].isEmpty=1;
                    todoOk=1;
                    printf("Baja realizada exitosamente..\n");
                }
                else
                {
                    printf("Baja cancelada por el usuario..\n");
                }
                validaciones_confirma(&confirma, "quiere realizar otra baja?",'s','n');

            }
        }
        while(confirma == 's');

    }
    return todoOk;
};

int modificarBicicleta(eBicicleta listaBicicletas[],int tam,eColor listaColores[], int tamColores, eTipo listaTipos[], int tamTipos)
{
//material
//tipo
    int todoOk=0;
    int id;
    int indice;
    char confirma;
    char auxMaterial;
    int auxIdTipo;

    if(listaBicicletas != NULL && tam>0 && listaColores != NULL && tamColores >0 && listaTipos!= NULL && tamTipos>0)
    {
        do
        {
            system("cls");
            printf("Modificacion Bicileta\n");
            mostrarBiciletas(listaBicicletas,tam,listaColores,tamColores,listaTipos,tamTipos);
            fflush(stdin);
            getInt(&id,"Ingrese el id de la pers a modificar : \n","Error, ingrese un id valido\n");
            indice=buscarIndiceBicicletaId(listaBicicletas,tam,id);
            if(indice == -1)
            {
                printf("Error,no se encuentra registrada ninguna persona con id %d..\n",id);
                validaciones_confirma(&confirma, "Desea intentarlo nuevamente?",'s','n');
            }
            else
            {
                printf("\n");
                mostrarBicileta(listaBicicletas[indice],listaColores,tamColores,listaTipos,tamTipos);
                validaciones_confirma(&confirma,"Si es correcta la persona a modificar escriba si para continuar... \n", 's','n');
                while(confirma == 's')
                {
                    system("cls");
                    fflush(stdin);
                    switch(menuModificacion())
                    {
                    case 1:
                        mostrarTipos(listaTipos,tamTipos);
                        validaciones_ingresoRangoInt(&auxIdTipo,"Ingrese ID de marca...\n","Ingrese una marca valida\n",1000,1003);
                        listaBicicletas[indice].idTipo=auxIdTipo;
                        break;
                    case 2:
                        validaciones_ingresoChar(&auxMaterial,"Ingrese un modelo\n","Ingrese 'c' para carbono, 'a' para aluminio",'c','a');
                        listaBicicletas[indice].material=auxMaterial;

                        break;

                    default:
                        printf("Opcion invalida...");
                        outputGoaback();
                    }


                    validaciones_confirma(&confirma,"Desea modificar otro dato?\n",'s','n');
                    todoOk=1;
                }

                validaciones_confirma(&confirma,"Desea modificar otra bicicleta ?",'s','n');
            }


        }
        while(confirma == 's');


    }
    return todoOk;
}




//---------------------------------------------------------------------------------------------------------------------------------



void mostrarBicileta(eBicicleta autoInd,eColor listaColores[], int tamColores,eTipo listaTipos[],int tamTipos)
{
    char colorAMostrar[20];
    char tipoAmostrar[20];
    cargarDescripcionColores(listaColores,tamColores,autoInd.idColor,colorAMostrar);
    cargarDescripcionTipos(listaTipos,tamTipos,autoInd.idTipo,tipoAmostrar);
    printf("%-15d %-20s %-30s %-40s %-10c \n\n",autoInd.id,autoInd.marca,tipoAmostrar,colorAMostrar,toupper(autoInd.material));
}
int mostrarBiciletas(eBicicleta listaBicicletas[], int tam,eColor listaColores[],int tamColores,eTipo listaTipos[],int tamTipos )
{
    int todoOk=0;
    int flagBicicleta=0;
    // se verifica porque es un vector
    if(listaBicicletas != NULL && tam >0 )
    {
        system("cls");
        printf("          ***Listado de Bicicletas***                                    \n");
        printf("-------------------------------------------------------------------------\n");
        printf("Id:         Marca:         Tipo:              Color:        Material:     \n");
        printf("-------------------------------------------------------------------------\n");
        for(int i=0; i<tam; i++)
        {
            if(listaBicicletas[i].isEmpty == 0)
            {
                mostrarBicileta(listaBicicletas[i],listaColores,tamColores,listaTipos,tamTipos);

                flagBicicleta=1;
            }

        }
        if(!flagBicicleta)
        {
            printf("No hay bicicletas para mostrar...\n");
        }
        todoOk=1;
    }

    return todoOk;

}

