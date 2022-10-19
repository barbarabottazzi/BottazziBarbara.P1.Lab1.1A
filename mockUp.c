#include "servicios.h"
#include <stdlib.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "tipo.h"
#include "color.h"

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

int hardcodearDatos(eServicios listaServicios[],int tam,eTipo listaTipos[],int tamTipos,eColor listaColores[],int tamColores,int cantidadTipos,int cantidadColores,int cantidadServicios)
{
    int contador =-1;
    if(listaServicios != NULL && tam > 0 && listaTipos != NULL && tamTipos > 0 && listaColores != NULL && tamColores > 0 )
    {
        contador=0;
        for(int i=0; i<cantidadTipos; i++)
        {


            listaTipos[i].id=tipos[i].id;
            strcpy(listaTipos[i].descripcion,tipos[i].descripcion);


        }

        for(int i=0; i<cantidadColores; i++)
        {

            listaColores[i].id=colores[i].id;



            strcpy(listaColores[i].nombreColor,colores[i].nombreColor);

        }

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


