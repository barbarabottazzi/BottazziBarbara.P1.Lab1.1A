

#ifndef TRABAJO_H_INCLUDED
#define TRABAJO_H_INCLUDED
#include "servicios.h"
#include "tipo.h"
#include "color.h"
#include "bicicleta.h"
#include "fecha.h"

typedef struct
{
    int id;
    int idBicicleta;
    int idServicio;
    eFecha fecha;
    int isEmpty;
} eTrabajo;

#endif // TRABAJO_H_INCLUDED



/** \brief funcion que genera el alta de un trabajo
 *
 * \param listaTrabajos[] eTrabajo array de trabajos
 * \param tam int tamanio de array de trabajos
 * \param pNextIDTrabajo int* direccion de memoria de proximo id de trabajo
 * \param listaServicios[] eServicios array de servicios
 * \param tamServicios int tamanio de array de servicios
 * \param listaBicicletas[] eBicicleta array de bicicletas
 * \param tamBicicletas int tamanio de bicicletas
 * \param listaTipos[] eTipo array de tipos
 * \param tamTipos int tamanio de tipos
 * \param listaColores[] eColor array de colores
 * \param tamColores int tamanio de array de colores
 * \param primerBicicleta int "booleano" que indica 1 si ya se cargo una bicicleta y 0 si no
 * \return int
 *
 */
int altaTrabajo(eTrabajo listaTrabajos[],int tam, int *pNextIDTrabajo,eServicios listaServicios[],int tamServicios,eBicicleta listaBicicletas[],int tamBicicletas, eTipo listaTipos[],int tamTipos, eColor listaColores[],int tamColores,int primerBicicleta,eCliente listaClientes[],int tamClientes );

/** \brief busca el indice del array de trabajos que este libre
 *
 * \param listaTrabajos[] eTrabajo array de trabajos
 * \param tam int tamanio de array de trabajos
 * \return devuelve -1 si no encuentra indice libre y sino devuelve el indice que encuentra
 *
 */
int buscarLibreTrabajo(eTrabajo listaTrabajos[], int tam);


/** \brief inicializa todos los campos empty de arrays en 1
 *
 * \param listaTrabajos[] eTrabajo array de trabajos
 * \param tam int tamanio de array trabajos
 * \return int devuelve 1 si se pudo realizar la inicializacion y 0, si no.
 *
 */
int inicializarTrabajos(eTrabajo listaTrabajos[],int tam);


/** \brief muestra un trabajo
 *
 * \param trabajo eTrabajo el listado de trabajos en un indice particular
 * \param listaServicios[] eServicios array de servicios
 * \param tamServicios int tamanio del array de servicios
 * \param listaBicicletas[] eBicicleta array de bicicletas
 * \param tamBicicletas int tamanio del array de bicicletas
 * \return void
 *
 */
void mostrarTrabajo(eTrabajo trabajo, eServicios listaServicios[],int tamServicios, eBicicleta listaBicicletas[],int tamBicicletas);


/** \brief muestra todos los trabajos existentes
 *
 * \param listaTrabajos[] eTrabajo array de trabajos
 * \param tam int tamanio de array de trabajos
 * \param listaServicios[] eServicios array de servicios
 * \param tamServicios int tamanio de array de servicios
 * \param listaBicicletas[] eBicicleta lista de arrays bicicletas
 * \param tamBicicletas int tamanio array bicicletas
 * \return int devuelve 1 si pudo realizarse la funcion bien y 0 si no.
 *
 */
int mostrarTrabajos(eTrabajo listaTrabajos[], int tam,eServicios listaServicios[],int tamServicios, eBicicleta listaBicicletas[],int tamBicicletas);
