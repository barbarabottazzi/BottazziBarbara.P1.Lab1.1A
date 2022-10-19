#include <stdio.h>
#include <stdlib.h>
#include "servicios.h"
#define TAM_SERVICIOS 4
#define TAM_COLORES 4
#define TAM_TIPOS 4
#define TAM_BICICLETAS 10
#define TAM_TRABAJOS 10
#include "tipo.h"
#include "color.h"
#include "mockUp.h"
#include "menu.h"
#include "validaciones.h"
#include "outputs.h"
#include "bicicleta.h"
#include "trabajo.h"
int main()
{
    eServicios listaServicios[TAM_SERVICIOS];
    eTipo listaTipos[TAM_TIPOS];
    eColor listaColores[TAM_COLORES];
    eBicicleta listaBicicletas[TAM_BICICLETAS];
    eTrabajo listaTrabajos[TAM_TRABAJOS];
    char confirmaSalida='n';
    int nextIDBicicleta=20000;
    int nextIdTrabajo=1;
    int primerBicicleta=0;



    if((!inicializarBicicletas(listaBicicletas,TAM_BICICLETAS)  ))
    {
        printf("Problema al inicializar...\n");
    }
    hardcodearDatos(listaServicios,TAM_SERVICIOS,listaTipos,TAM_TIPOS,listaColores,TAM_COLORES,4,4,4);

    do
    {
        switch(menu())
        {
        case 'a':
            altaBicicleta(listaBicicletas,TAM_BICICLETAS,&nextIDBicicleta,listaColores,TAM_COLORES,listaTipos,TAM_TIPOS,&primerBicicleta);
            outputGoaback();
            break;
        case 'b':
            modificarBicicleta(listaBicicletas,TAM_BICICLETAS,listaColores,TAM_COLORES,listaTipos,TAM_TIPOS);
            outputGoaback();
            break;
        case 'c':
            bajaBicicleta(listaBicicletas,TAM_BICICLETAS,listaColores,TAM_COLORES,listaTipos,TAM_TIPOS);
            outputGoaback();
            break;
        case 'd':
            mostrarBiciletas(listaBicicletas,TAM_BICICLETAS,listaColores,TAM_COLORES,listaTipos,TAM_TIPOS);
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
            altaTrabajo(listaTrabajos,TAM_TRABAJOS,&nextIdTrabajo,listaServicios,TAM_SERVICIOS,listaBicicletas,TAM_BICICLETAS,listaTipos,TAM_TIPOS,listaColores,TAM_COLORES,primerBicicleta);
            break;
        case 'i':
            mostrarTrabajos(listaTrabajos,TAM_TRABAJOS,listaServicios,TAM_SERVICIOS,listaBicicletas,TAM_BICICLETAS);
            outputGoaback();
            break;
        case 'j':
            validaciones_confirma(&confirmaSalida,"Esta seguro que quiere salir del programa?\nIngrese 's' para si, 'n' para cancelar\n",'s','n');
        }
    }
    while(confirmaSalida == 'n');
    return 0;
}
