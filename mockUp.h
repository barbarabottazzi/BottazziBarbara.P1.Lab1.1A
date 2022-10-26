#ifndef MOCKUP_H_INCLUDED
#define MOCKUP_H_INCLUDED
#include "tipo.h"
#include "color.h"
#include "servicios.h"
#include "bicicleta.h"
#include "trabajo.h"
#include "cliente.h"

#endif // MOCKUP_H_INCLUDED


/** \brief carga datos iniciales
 *
 * \param listaServicios[] eServicios array de servicios a inicializar
 * \param tam int tamano del array servicios
 * \param listaTipos[] eTipo array de tipos a inicializar
 * \param tamTipos int tamano tamano del array tipos
 * \param listaColores[] eColor array de colores a inicializar
 * \param tamColores int tamano tamano del array colores
 *\param cantidadTipos valor de la cantidad de datos que queremos cargar de tipos
 *\param cantidadColores valor de la cantidad de datos que queremos cargar de colores
 *\param cantidadServicios valor de la cantidad de datos que queremos cargar de servicios
 * \return int devuelve 1 si esta todo bien, 0 si hay error
 *
 */
int hardcodearDatos(eServicios listaServicios[],int tam,eTipo listaTipos[],int tamTipos,eColor listaColores[],int tamColores,int cantidadTipos,int cantidadColores,int cantidadServicios);
/** \brief
 *
 * \param pNextIdBicicletas int* direccion de memoria de proximo id de bicicletas
 * \param listadoBicicletas[] eBicicleta array de biciciletas existente
 * \param pNextIdTrabajo int* direccion de memoria de proximo id trabajo
 * \param listaTrabajos[] eTrabajo array de listados trabajos
 * \return int
 *
 */
int harcodearBicicletasyTrabajos(int *pNextIdBicicletas,eBicicleta listadoBicicletas[],int *pNextIdTrabajo,eTrabajo listaTrabajos[]);




int harcodearClientes(eCliente listaClientes[],int tamClientes);
