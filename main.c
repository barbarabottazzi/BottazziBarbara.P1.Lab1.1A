#include <stdio.h>
#include <stdlib.h>
#include "servicios.h"
#include "tipo.h"
#include "color.h"
#include "bicicleta.h"
#include "trabajo.h"
#include "mockUp.h"
#include "menu.h"
#include "validaciones.h"
#include "informes.h"
#include "outputs.h"
#include "cliente.h"
#define TAM_SERVICIOS 4
#define TAM_COLORES 4
#define TAM_TIPOS 4
#define TAM_BICICLETAS 10
#define TAM_TRABAJOS 10
#define TAM_CLIENTES 5


int main()
{
    eServicios listaServicios[TAM_SERVICIOS];
    eTipo listaTipos[TAM_TIPOS];
    eColor listaColores[TAM_COLORES];
    eBicicleta listaBicicletas[TAM_BICICLETAS];
    eTrabajo listaTrabajos[TAM_TRABAJOS];
    eCliente listaClientes[TAM_CLIENTES];
    char confirmaSalida='n';
    int nextIDBicicleta=20000;
    int nextIdTrabajo=40000;
    int primerBicicleta=0;
    int cargarBicisYTrabajos=1;




    if((!inicializarBicicletas(listaBicicletas,TAM_BICICLETAS) || (!inicializarTrabajos(listaTrabajos,TAM_TRABAJOS))  ))
    {
        printf("Problema al inicializar...\n");
    }


    hardcodearDatos(listaServicios,TAM_SERVICIOS,listaTipos,TAM_TIPOS,listaColores,TAM_COLORES,4,4,4);
    harcodearClientes(listaClientes,TAM_CLIENTES);
    if(cargarBicisYTrabajos)
    {
        harcodearBicicletasyTrabajos(&nextIDBicicleta,listaBicicletas,&nextIdTrabajo,listaTrabajos);
        primerBicicleta=1;
    }


    do
    {
        switch(menu())
        {
        case 'a':
            altaBicicleta(listaBicicletas,TAM_BICICLETAS,&nextIDBicicleta,listaColores,TAM_COLORES,listaTipos,TAM_TIPOS,&primerBicicleta,listaClientes,TAM_CLIENTES);
            outputGoaback();
            break;
        case 'b':
            if(primerBicicleta)
            {
                modificarBicicleta(listaBicicletas,TAM_BICICLETAS,listaColores,TAM_COLORES,listaTipos,TAM_TIPOS,listaClientes,TAM_CLIENTES);
            }
            else
            {
                printf("Error, primero cargue una bicicleta\n");
            };
            outputGoaback();
            break;
        case 'c':
            if(primerBicicleta)
            {
                bajaBicicleta(listaBicicletas,TAM_BICICLETAS,listaColores,TAM_COLORES,listaTipos,TAM_TIPOS,listaClientes,TAM_CLIENTES);

            }
            else
            {
                printf("Error,primero debe cargar una bici\n");
            }
            outputGoaback();
            break;
        case 'd':
            if(primerBicicleta)
            {
                mostrarBiciletas(listaBicicletas,TAM_BICICLETAS,listaColores,TAM_COLORES,listaTipos,TAM_TIPOS,listaClientes,TAM_CLIENTES);

            }
            else
            {
                printf("Error, primero debe cargar una bicicleta\n");
            }
            outputGoaback();

            break;
        case 'e':
            mostrarTipos(listaTipos,TAM_TIPOS);
            outputGoaback();
            break;
        case 'f':
            mostrarColores(listaColores,TAM_COLORES);
            outputGoaback();
            break;
        case 'g':
            mostrarServicios(listaServicios,TAM_SERVICIOS);
            outputGoaback();
            break;
        case 'h':
            if(primerBicicleta)
            {
                altaTrabajo(listaTrabajos,TAM_TRABAJOS,&nextIdTrabajo,listaServicios,TAM_SERVICIOS,listaBicicletas,TAM_BICICLETAS,listaTipos,TAM_TIPOS,listaColores,TAM_COLORES,primerBicicleta,listaClientes,TAM_CLIENTES);

            }
            else
            {
                printf("Error, primero debe ingresar una bicicleta\n");


            };
            outputGoaback();
            break;
        case 'i':

            mostrarTrabajos(listaTrabajos,TAM_TRABAJOS,listaServicios,TAM_SERVICIOS,listaBicicletas,TAM_BICICLETAS);
            outputGoaback();
            break;
        case 'j':
            informes(listaBicicletas,TAM_BICICLETAS,listaClientes,TAM_CLIENTES,listaColores,TAM_COLORES,listaServicios,TAM_SERVICIOS,listaTipos,TAM_TIPOS,listaTrabajos,TAM_TRABAJOS);
            break;
        case 'k':
            validaciones_confirma(&confirmaSalida,"Esta seguro que quiere salir del programa?\nIngrese 's' para si, 'n' para cancelar\n",'s','n');
        }
    }
    while(confirmaSalida == 'n');
    return 0;
}
