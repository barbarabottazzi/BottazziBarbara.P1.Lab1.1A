#include "cliente.h"
#include "tipo.h"
#include "bicicleta.h"
#include "color.h"
#include "servicios.h"
#include "trabajo.h"

#ifndef INFORMES_H_INCLUDED
#define INFORMES_H_INCLUDED



#endif // INFORMES_H_INCLUDED


/** \brief ejecuta una funcion segun la opcion ingresada por el usuario
 *
 * \param listadoBicicletas[] eBicicleta array de bicicletas
 * \param tamBicicletas int tamanio del array de bicicletas
 * \param [] eCliente listadoClientes array de clientes
 * \param tamClientes int tamanio de array de clientes
 * \param listadoColores[] eColor array de colores
 * \param tamColores int tamanio array de colores
 * \param listadoServicios[] eServicios array de servicios
 * \param tamServicios int tamanio array de servicios
 * \param listadoTipos[] eTipo array tipos
 * \param tamTipos int tamanio array de tipos
 * \param listadoTrabajos[] eTrabajo array de trabajos
 * \param tamTrabajos int tamanio array de trabajos
 * \return void
 *
 */
void informes(eBicicleta listadoBicicletas[],int tamBicicletas, eCliente listadoClientes [],int tamClientes,eColor listadoColores[],int tamColores,eServicios listadoServicios[],int tamServicios,eTipo listadoTipos[],int tamTipos,eTrabajo listadoTrabajos[],int tamTrabajos);


/** \brief se le pasa un id de color por param y muestra las bicicletas de ese color
 *
 * \param idColor int  id a filtrar las bicis
 * \param listadoBicicletas[] eBicicleta array de bicicletas
 * \param tamBicicletas int tamanio de array bicicletas
 * \param [] eColor listaColores array colores
 * \param tamColores int tamanio array colores
 * \param listadoTipos[] eTipo array tipos
 * \param tamTipos int tamanio array tipos
 * \param listaClientes[] eCliente array clientes
 * \param tamClientes int tamanio array clientes
 * \return int devuelve 1 si se pudo ejecutar bien la fucnion , 0 si hubo un error
 *
 */
int filtrarBicicletasColor(int idColor,eBicicleta listadoBicicletas[],int tamBicicletas, eColor listaColores [],int tamColores,eTipo listadoTipos[],int tamTipos,eCliente listaClientes[],int tamClientes);


/** \brief muestra bicicletas del color elegido por el usuario
 *
 * \param listadoBicicletas[] eBicicleta array bicicletas
 * \param tamBicicletas int tamanio array bicicletas
 * \param [] eColor listaColores array colores
 * \param tamColores int tamanio array colores
 * \param listadoTipos[] eTipo array tipo
 * \param tamTipos int tamanio array tipos
 * \param listaClientes[] eCliente array clientes
 * \param tamClientes int tamanio array clientes
 * \return int devuelve 1 si se pudo ejecutar bien la fucnion , 0 si hubo un error
 *
 */

int informes_mostrarBicicletaPorColor(eBicicleta listadoBicicletas[],int tamBicicletas, eColor listaColores [],int tamColores,eTipo listadoTipos[],int tamTipos,eCliente listaClientes[],int tamClientes);



/** \brief muestra bicicletas por tipo elegido por el usuario
 *
 * \param listadoBicicletas[] eBicicleta array bicicletas
 * \param tamBicicletas int tamanio array bicicletas
 * \param [] eColor listaColores array colores
 * \param tamColores int tamanio array colores
 * \param listadoTipos[] eTipo array tipo
 * \param tamTipos int tamanio array tipos
 * \param listaClientes[] eCliente array clientes
 * \param tamClientes int tamanio array clientes
 * \return int devuelve 1 si se pudo ejecutar bien la fucnion , 0 si hubo un error
 *
 */
int informes_mostrarBicicletasPorUnTipo(eBicicleta listadoBicicletas[],int tamBicicletas, eColor listaColores [],int tamColores,eTipo listadoTipos[],int tamTipos, eCliente listadoClientes[],int tamClientes);


/** \brief filtra array de bicicletas por un tipo de id de tipo recibido por params
 *
 * \param idTipo int id recibido por params
 * \param listadoBicicletas[] eBicicleta array bicicletas
 * \param tamBicicletas int tamanio array bicicletas
 * \param [] eColor listaColores array colores
 * \param tamColores int tamanio array colores
 * \param listadoTipos[] eTipo array tipo
 * \param tamTipos int tamanio array tipos
 * \param listaClientes[] eCliente array clientes
 * \param tamClientes int tamanio array clientes
 * \return int devuelve 1 si se pudo ejecutar bien la fucnion , 0 si hubo un error
 *
 */
int filtrarBicicletasTipo(int idTipo,eBicicleta listadoBicicletas[],int tamBicicletas, eColor listaColores [],int tamColores,eTipo listadoTipos[],int tamTipos, eCliente listadoClientes[],int tamClientes);
/** \brief muestra las bicicletas dividas por tipo
 *
 * \param listadoBicicletas[] eBicicleta array bicicletas
 * \param tamBicicletas int tamanio array bicicletas
 * \param [] eColor listaColores array colores
 * \param tamColores int tamanio array colores
 * \param listadoTipos[] eTipo array tipo
 * \param tamTipos int tamanio array tipos
 * \param listaClientes[] eCliente array clientes
 * \param tamClientes int tamanio array clientes
 * \return int devuelve 1 si se pudo ejecutar bien la fucnion , 0 si hubo un error
 *
 */
int informes_mostrarBicicletasPortipos(eBicicleta listadoBicicletas[],int tamBicicletas, eColor listaColores [],int tamColores,eTipo listadoTipos[],int tamTipos, eCliente listadoClientes[],int tamClientes);


/** \brief pide un color y un tipo al usuario y muestra las bicis que tienen ese color y ese tipo
 *
 * \param listadoBicicletas[] eBicicleta array bicicletas
 * \param tamBicicletas int tamanio array bicicletas
 * \param [] eColor listaColores array colores
 * \param tamColores int tamanio array colores
 * \param listadoTipos[] eTipo array tipo
 * \param tamTipos int tamanio array tipos
 * \param listaClientes[] eCliente array clientes
 * \param tamClientes int tamanio array clientes
 * \return int devuelve 1 si se pudo ejecutar bien la fucnion , 0 si hubo un error
 *
 */
int informes_mostrarBicicletasTipoyColor(eBicicleta listadoBicicletas[],int tamBicicletas, eColor listaColores [],int tamColores,eTipo listadoTipos[],int tamTipos, eCliente listadoClientes[],int tamClientes);


/** \brief muestra el color o los colores de bicicletas mas elegidos por los usuarios
 *
 * \param listadoBicicletas[] eBicicleta array bicicletas
 * \param tamBicicletas int tamanio array bicicletas
 * \param [] eColor listaColores array colores
 * \param tamColores int tamanio array colores
 * \param listadoTipos[] eTipo array tipo
 * \param tamTipos int tamanio array tipos
 * \param listaClientes[] eCliente array clientes
 * \param tamClientes int tamanio array clientes
 * \return int devuelve 1 si se pudo ejecutar bien la fucnion , 0 si hubo un error
 *
 */
int Informes_mostrarColoroColoresMasElegidos(eBicicleta listadoBicicletas[],int tamBicicletas, eColor listaColores [],int tamColores,eTipo listadoTipos[],int tamTipos, eCliente listadoClientes[],int tamClientes);



/** \brief muestra el material mas elegido por los usuarios y la cantidad
 *
 * \param listadoBicicletas[] eBicicleta array bicicletas
 * \param tamBicicletas int tamanio array bicicletas
 * \param [] eColor listaColores array colores
 * \param tamColores int tamanio array colores
 * \param listadoTipos[] eTipo array tipo
 * \param tamTipos int tamanio array tipos
 * \param listaClientes[] eCliente array clientes
 * \param tamClientes int tamanio array clientes
 * \return int devuelve 1 si se pudo ejecutar bien la fucnion , 0 si hubo un error
 *
 */
int informes_mayorMaterialyCantidad(eBicicleta listadoBicicletas[],int tamBicicletas, eColor listaColores [],int tamColores,eTipo listadoTipos[],int tamTipos, eCliente listadoClientes[],int tamClientes);

