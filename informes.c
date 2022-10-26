#include "outputs.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"
#include "inputs.h"
#include "cliente.h"
#include "tipo.h"
#include "bicicleta.h"
#include "color.h"
#include "servicios.h"
#include "trabajo.h"
#include "informes.h"


void informes(eBicicleta listadoBicicletas[],int tamBicicletas, eCliente listadoClientes [],int tamClientes,eColor listadoColores[],int tamColores,eServicios listadoServicios[],int tamServicios,eTipo listadoTipos[],int tamTipos,eTrabajo listadoTrabajos[],int tamTrabajos)
{
    system("cls");
    switch(menuInformes())
    {
    case 1:
        informes_mostrarBicicletaPorColor(listadoBicicletas,tamBicicletas,listadoColores,tamColores,listadoTipos,tamTipos,listadoClientes,tamClientes);
        outputGoaback();
        break;
    case 2:
        informes_mostrarBicicletasPorUnTipo(listadoBicicletas,tamBicicletas,listadoColores,tamColores,listadoTipos,tamTipos,listadoClientes,tamClientes);
        outputGoaback();
        break;
    case 3:
        informes_mayorMaterialyCantidad(listadoBicicletas,tamBicicletas,listadoColores,tamColores,listadoTipos,tamTipos,listadoClientes,tamClientes);
        outputGoaback();
        break;
    case 4:
        informes_mostrarBicicletasPortipos(listadoBicicletas,tamBicicletas,listadoColores,tamColores,listadoTipos,tamTipos,listadoClientes,tamClientes);
        outputGoaback();
        break;
    case 5:
        informes_mostrarBicicletasTipoyColor(listadoBicicletas,tamBicicletas,listadoColores,tamColores,listadoTipos,tamTipos,listadoClientes,tamClientes);
        outputGoaback();
        break;
    case 6:
        Informes_mostrarColoroColoresMasElegidos(listadoBicicletas,tamBicicletas,listadoColores,tamColores,listadoTipos,tamTipos,listadoClientes,tamClientes);
        outputGoaback();
        break;
    case 7:
        outputGoaback();
        break;
    case 8:
        outputGoaback();
        break;
    case 9:
        outputGoaback();
        break;
    case 10:
        outputGoaback();
        break;
    case 11:
        outputGoaback();
        break;
    }
};


int filtrarBicicletasColor(int idColor,eBicicleta listadoBicicletas[],int tamBicicletas, eColor listaColores [],int tamColores,eTipo listadoTipos[],int tamTipos,eCliente listaClientes[],int tamClientes)
{
    int validado;
    int flagBicicleta=0;
    char descripcionColor[30];
    if(listadoBicicletas!= NULL && tamBicicletas>0 && tamColores>0 && listaColores != NULL)
    {
        cargarDescripcionColores(listaColores,tamColores,idColor,descripcionColor);
        printf("Bicicletas de color %s\n",descripcionColor);
        printf("------------------\n\n");
        for(int i=0; i<tamBicicletas; i++)
        {
            if(listadoBicicletas[i].idColor == idColor && !listadoBicicletas[i].isEmpty )
            {

                mostrarBicileta(listadoBicicletas[i],listaColores,tamColores,listadoTipos,tamTipos,listaClientes,tamClientes);
                flagBicicleta=1;
            }
        }
        validado=1;
        if(!flagBicicleta)
        {
            printf("No hay Bicicletas de ese color..\n");
        }
    }

    return validado;
};
int informes_mostrarBicicletaPorColor(eBicicleta listadoBicicletas[],int tamBicicletas, eColor listaColores [],int tamColores,eTipo listadoTipos[],int tamTipos,eCliente listaClientes[],int tamClientes)
{
    int idColor;
    int validado=0;

    if(listadoBicicletas!= NULL && tamClientes>0 && tamColores>0 && listaColores != NULL && listaClientes != NULL && tamClientes >0 && listadoTipos!= NULL && tamTipos>0)
    {
        mostrarColores(listaColores,tamColores);
        getInt(&idColor,"Ingrese un id de color\n","Ingrese un id valido\n");

        while(!existeColor(listaColores,tamColores, idColor))
        {
            getInt(&idColor,"Error,ingrese un id de color valido\n","Ingrese un id valido\n");
        }
        filtrarBicicletasColor(idColor,listadoBicicletas,tamBicicletas,listaColores,tamColores,listadoTipos,tamTipos,listaClientes,tamClientes);
        validado=1;
    }
    return validado;
}





int filtrarBicicletasTipo(int idTipo,eBicicleta listadoBicicletas[],int tamBicicletas, eColor listaColores [],int tamColores,eTipo listadoTipos[],int tamTipos, eCliente listadoClientes[],int tamClientes)
{
    int validado;
    int flagBicicleta=0;
    char descripcionTipo[30];
    if(listadoBicicletas!= NULL && tamBicicletas>0 && tamColores>0 && listaColores != NULL)
    {
        cargarDescripcionTipos(listadoTipos,tamTipos,idTipo,descripcionTipo);
        printf("\nBicicletas por tipo %s\n",descripcionTipo);
        printf("------------------\n\n");
        for(int i=0; i<tamBicicletas; i++)
        {
            if(listadoBicicletas[i].idTipo == idTipo && !listadoBicicletas[i].isEmpty )
            {

                mostrarBicileta(listadoBicicletas[i],listaColores,tamColores,listadoTipos,tamTipos,listadoClientes,tamClientes);
                flagBicicleta=1;
            }
        }
        validado=1;
        if(!flagBicicleta)
        {
            printf("No hay Bicicletas de ese tipo..\n");
        }
    }

    return validado;
};


int informes_mostrarBicicletasPorUnTipo(eBicicleta listadoBicicletas[],int tamBicicletas, eColor listaColores [],int tamColores,eTipo listadoTipos[],int tamTipos, eCliente listadoClientes[],int tamClientes)
{
    int idTipo;
    int validado=0;
    if(listadoBicicletas!= NULL && tamBicicletas>0 && tamColores>0 && listaColores != NULL)
    {
        mostrarTipos(listadoTipos,tamTipos);
        getInt(&idTipo,"Ingrese un id de tipo\n","Ingrese un id valido\n");

        while(!existeTipo(listadoTipos,tamTipos, idTipo))
        {
            getInt(&idTipo,"Error,ingrese un id de tipo valido\n","Ingrese un id valido\n");
        }
        filtrarBicicletasTipo(idTipo,listadoBicicletas,tamBicicletas,listaColores,tamColores,listadoTipos,tamTipos,listadoClientes,tamClientes);
        validado=1;
    }
    return validado;
}



int informes_mostrarBicicletasPortipos(eBicicleta listadoBicicletas[],int tamBicicletas, eColor listaColores [],int tamColores,eTipo listadoTipos[],int tamTipos, eCliente listadoClientes[],int tamClientes)
{
    int validado=0;
    if(listadoBicicletas!= NULL && tamBicicletas>0 && tamColores>0 && listaColores != NULL && listadoTipos!= NULL && tamTipos >0 && listadoClientes != NULL && tamClientes>0)
    {
        for(int i=0; i<tamTipos; i++)
        {
            filtrarBicicletasTipo(listadoTipos[i].id,listadoBicicletas,tamBicicletas,listaColores,tamColores,listadoTipos,tamTipos,listadoClientes,tamClientes);
        }
        validado=1;
    }
    return validado;
}


int informes_mostrarBicicletasTipoyColor(eBicicleta listadoBicicletas[],int tamBicicletas, eColor listaColores [],int tamColores,eTipo listadoTipos[],int tamTipos, eCliente listadoClientes[],int tamClientes)
{

    int validado=0;
    int auxTipo;
    int auxColor;
    int flagPrimerBicicleta=0;
    int contadorBicicletas=0;
    char descripcionColor[30];
    char descripcionTipo[30];
    if(listadoBicicletas!= NULL && tamBicicletas>0 && tamColores>0 && listaColores != NULL && listadoTipos!= NULL && tamTipos >0 && listadoClientes != NULL && tamClientes>0)
    {
        mostrarTipos(listadoTipos,tamTipos);
        getInt(&auxTipo,"Ingrese un id de tipo","Ingrese un numero valido");
        while(!existeTipo(listadoTipos,tamTipos,auxTipo))
        {
            getInt(&auxTipo,"Error Ingrese un id de tipo valido","Ingrese un numero valido");

        }
        mostrarColores(listaColores,tamColores);
        getInt(&auxColor,"Ingrese un id de color","Ingrese un numero valido");
        while(!existeColor(listaColores,tamColores,auxColor))
        {
            getInt(&auxColor,"Error Ingrese un id de color valido","Ingrese un numero valido");

        }
        cargarDescripcionColores(listaColores,tamColores,auxColor,descripcionColor);
        cargarDescripcionTipos(listadoTipos,tamTipos,auxTipo,descripcionTipo);
        printf("Bicicletas de tipo  %s y de color  %s\n",descripcionTipo,descripcionColor);

        for(int i=0; i<tamBicicletas; i++)
        {
            if(!listadoBicicletas[i].isEmpty && listadoBicicletas[i].idColor == auxColor && listadoBicicletas[i].idTipo == auxTipo)
            {
                contadorBicicletas++;
                flagPrimerBicicleta=1;
            }

        }
        if(!flagPrimerBicicleta)
        {
            printf("No existe bicicleta de ese color y tipo\n");
        }
        else
        {
            printf("Existen %d bicicleta/s \n",contadorBicicletas);

        }

        validado=1;
    }

    return validado;

}

int Informes_mostrarColoroColoresMasElegidos(eBicicleta listadoBicicletas[],int tamBicicletas, eColor listaColores [],int tamColores,eTipo listadoTipos[],int tamTipos, eCliente listadoClientes[],int tamClientes)
{
    int validado=0;
    int idColorMasElegido;
    int totalesPorcolor[4]= {0};
    if(listadoBicicletas!= NULL && tamBicicletas>0 && tamColores>0 && listaColores != NULL && listadoTipos!= NULL && tamTipos >0 && listadoClientes != NULL && tamClientes>0)
    {

        for(int i=0; i<tamColores; i++)
        {
            int contador=0;

            for(int j=0; j<tamBicicletas; j++)
            {
                if(!listadoBicicletas[j].isEmpty && listadoBicicletas[j].idColor==listaColores[i].id)
                {
                    contador++;
                }
            }
            totalesPorcolor[i]=contador;
        }

        for(int i=0; i<tamColores; i++)
        {
            if(i==0 || totalesPorcolor[i]>idColorMasElegido)
            {
                idColorMasElegido=totalesPorcolor[i];
            }
        }

        printf("Color o colores mas elegidos:\n\n");
        for(int i=0; i<tamColores; i++)
        {

            if(totalesPorcolor[i]== idColorMasElegido)
            {
                printf("%s\n",listaColores[i].nombreColor);
            }
        }

        validado=1;
    }
    return validado;

}


int informes_mayorMaterialyCantidad(eBicicleta listadoBicicletas[],int tamBicicletas, eColor listaColores [],int tamColores,eTipo listadoTipos[],int tamTipos, eCliente listadoClientes[],int tamClientes)
{
    int validado=0;
    int contadorCarbono=0;
    int contadorAlumnio=0;
    if(listadoBicicletas!= NULL && tamBicicletas>0 && tamColores>0 && listaColores != NULL && listadoTipos!= NULL && tamTipos >0 && listadoClientes != NULL && tamClientes>0)
    {

        for(int i=0; i<tamBicicletas; i++)
        {
            if(!listadoBicicletas[i].isEmpty )
            {
                if(listadoBicicletas[i].material == 'c' )
                {
                    contadorCarbono++;
                }
                else
                {
                    contadorAlumnio++;
                }
            }
        }


        if(contadorCarbono>contadorAlumnio)
        {
            printf("La mayor cantidad de bicicletas son de carbono con el total de: %d\n",contadorCarbono);
        }
        else
        {
            if(contadorAlumnio>contadorCarbono)
            {
                printf("La mayor cantidad de bicicletas son de alumnio con el total de: %d\n",contadorCarbono);

            }
            else
            {
                printf("La cantidad de bicicletas de aluminio y carbono son iguales , respectivamente sus valores son: %d, %d\n",contadorAlumnio,contadorCarbono);
            }

        }
        validado=1;
    }
    return validado;
}


