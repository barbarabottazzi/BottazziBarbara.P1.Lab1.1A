
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "tipo.h"
#include "color.h"
#include "bicicleta.h"
#include "trabajo.h"
#include "servicios.h"
#include "cliente.h"


#define TAM_BICI_TRAB 5

eTipo tipos[4]=
{
    {1000,"Rutera"},
    {1001,"Carrera"},
    {1002,"Mountain"},
    {1003,"BMX"},
};

eColor colores[4]=
{
    {5000,"Negro"},
    {5001,"Blanco"},
    {5002,"Azul"},
    {5003,"Rojo"},

};



eBicicleta bicicletas[TAM_BICI_TRAB]=
{
    {
        1,"Holanda",5000,1000,'c',0
    },
    {
        1,"Diversion",5002,1001,'a',0
    },
    {
        1,"Aventura",5003,1002,'c',0
    },
    {
        1,"Montania",5001,1003,'a',0
    },
    {
        1,"Europa",5003,1002,'c',0
    },
};

eServicios servicios[4]=
{
    {
        20000,"Limpieza",30
    },
    {
        20001,"Parche",400
    },
    {
        20002, "Centrado",500
    },
    {
        20003,"Cadena", 450
    }
};

eTrabajo trabajos[TAM_BICI_TRAB]=
{
    {
        1,1,20000,{24,10,22},0
    },
    {
        1,1,20001,{25,10,22},0
    },
    {
        1,1,20003,{26,10,22},0
    },
    {
        1,1,20002,{27,10,22},0
    },
    {
        1,1,20001,{28,10,22},0
    },
};

eCliente clientes[5]=
{
    {
        1,"Luis",'m',
    },
    {
        2,"Marta",'f'
    },
    {
        3,"Jose",'m'
    },
    {
        4,"Ana",'f'
    },
    {
        5,"Pepe",'m'
    }
};

int harcodearClientes(eCliente listaClientes[],int tamClientes)
{
    int validado=0;
    if(listaClientes != NULL && tamClientes > 0)
    {
        for(int i=0; i<5; i++)
        {
            strcpy(listaClientes[i].nombre,clientes[i].nombre);
            listaClientes[i].id=clientes[i].id;
            listaClientes[i].sexo=clientes[i].sexo;
        }



        validado=1;
    }
    return validado;
};

int harcodearBicicletasyTrabajos(int *pNextIdBicicletas,eBicicleta listadoBicicletas[],int *pNextIdTrabajo,eTrabajo listaTrabajos[])
{
    int validado=0;
    if(listadoBicicletas != NULL)
    {
        for(int i=0; i< TAM_BICI_TRAB; i++)
        {
            // cargar bicicletas
            listadoBicicletas[i].id =*pNextIdBicicletas;
            listadoBicicletas[i].idColor=bicicletas[i].idColor;
            listadoBicicletas[i].idTipo=bicicletas[i].idTipo;
            strcpy(listadoBicicletas[i].marca,bicicletas[i].marca);
            listadoBicicletas[i].material=bicicletas[i].material;
            listadoBicicletas[i].idCliente=clientes[i].id;
            listadoBicicletas[i].isEmpty=0;

            //cargar trabajos
            listaTrabajos[i].id=*pNextIdTrabajo;
            listaTrabajos[i].idBicicleta=*pNextIdBicicletas;
            listaTrabajos[i].idServicio=trabajos[i].idServicio;
            listaTrabajos[i].isEmpty=0;
            listaTrabajos[i].fecha=trabajos[i].fecha;
            (*pNextIdBicicletas)++;
            (*pNextIdTrabajo)++;
        };
        validado=1;
    };


    return validado;
};

int hardcodearDatos(eServicios listaServicios[],int tam,eTipo listaTipos[],int tamTipos,eColor listaColores[],int tamColores,int cantidadTipos,int cantidadColores,int cantidadServicios)
{
    int contador =-1;
    if(listaServicios != NULL && tam > 0 && listaTipos != NULL && tamTipos > 0 && listaColores != NULL && tamColores > 0 )
    {
        contador=0;

        //CARGO DATOS DE TIPOS
        for(int i=0; i<cantidadTipos; i++)
        {
            listaTipos[i].id=tipos[i].id;
            strcpy(listaTipos[i].descripcion,tipos[i].descripcion);
        }
        //CARGO DATOS DE COLORES
        for(int i=0; i<cantidadColores; i++)
        {
            listaColores[i].id=colores[i].id;
            strcpy(listaColores[i].nombreColor,colores[i].nombreColor);
        }
        //CARGO DATOS DE SERVICIOS
        for(int i=0; i<cantidadServicios; i++)
        {
            listaServicios[i].id=servicios[i].id;
            strcpy(listaServicios[i].descripcion,servicios[i].descripcion);
            listaServicios[i].precio=servicios[i].precio;
            contador++;
        }

    }
    return contador;
}


