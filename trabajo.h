#include "servicios.h"
#include "tipo.h"
#include "color.h"
#include "bicicleta.h"
#include "fecha.h"

#ifndef TRABAJO_H_INCLUDED
#define TRABAJO_H_INCLUDED


typedef struct
{
    int id;
    int idBicicleta;
    int idServicio;
    eFecha fecha;
    int isEmpty;
} eTrabajo;

#endif // TRABAJO_H_INCLUDED
int altaTrabajo(eTrabajo listaTrabajos[],int tam, int *pNextIDTrabajo,eServicios listaServicios[],int tamServicios,eBicicleta listaBicicletas[],int tamBicicletas, eTipo listaTipos[],int tamTipos, eColor listaColores[],int tamColores,int primerBicicleta );
int buscarLibreTrabajo(eTrabajo listaTrabajos[], int tam);
int inicializarTrabajos(eTrabajo listaTrabajos[],int tam);
void mostrarTrabajo(eTrabajo trabajo, eServicios listaServicios[],int tamServicios, eBicicleta listaBicicletas[],int tamBicicletas);
int mostrarTrabajos(eTrabajo listaTrabajos[], int tam,eServicios listaServicios[],int tamServicios, eBicicleta listaBicicletas[],int tamBicicletas);
