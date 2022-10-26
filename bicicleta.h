

#ifndef BICILETA_H_INCLUDED
#define BICILETA_H_INCLUDED
#include "tipo.h"
#include "color.h"
#include "cliente.h"

typedef struct
{
    int id;
    char marca[20];
    int idColor;
    int idTipo;
    char material;
    int idCliente;
    int isEmpty;
} eBicicleta;

#endif // BICICLETA_H_INCLUDED
/** \brief Da de alta una nueva bicicleta
 *
 * \param listaBicicletas[] eBicicleta array de bicicletas a guardar nueva bici
 * \param tam int tamanio array bicis
 * \param pNextIDAuto int* proximo id de bicicleta
 * \param listaColores[] eColor array de colores
 * \param tamColores int tamano de array de colores
 * \param listaTipos[] eTipo array de tipos de bicis
 * \param tamTipos int tamanio de array de tipos
 * \return int 0 si no se pudo realizar 1 si salio todo bien
 *
 */



int altaBicicleta(eBicicleta listaBicicletas[],int tam, int *pNextIDAuto,eColor listaColores[],int tamColores,eTipo listaTipos[], int tamTipos , int *pPrimerBicicletaeCliente ,eCliente listaClientes[],int tamClientes);
/** \brief realiza la baja de una bicicleta
 *
 * \param listaBicicletas[] eBicicleta array donde se guardan las bicis
 * \param tam int tamanio de array de biciletas
 * \param listaColores[] eColor array de colores
 * \param tamColores int tamano de array de colores
 * \param listaTipos[] eTipo array de tipos de bicis
 * \param tamTipos int tamanio de array de tipos
 * \return int 0 si no se pudo realizar 1 si salio todo bien
 *
 */
int bajaBicicleta(eBicicleta listaBicicletas[],int tam,eColor listaColores[], int tamColores, eTipo listaTipos[], int tamTipos,eCliente listaClientes[],int tamClientes);



/** \brief modifica los datos de una bicicleta
 *
 * \param listaBicicletas[] eBicicleta array donde se guardan las bicis
 * \param tam int tamanio de array de biciletas
 * \param listaColores[] eColor array de colores
 * \param tamColores int tamano de array de colores
 * \param listaTipos[] eTipo array de tipos de bicis
 * \param tamTipos int tamanio de array de tipos
 * \return int 0 si no se pudo realizar 1 si salio todo bien
 *
 */
int modificarBicicleta(eBicicleta listaBicicletas[],int tam,eColor listaColores[], int tamColores, eTipo listaTipos[], int tamTipos,eCliente listaClientes[],int tamClientes);


/** \brief muestra los datos de una bicicleta
 *
 * \param autoInd eBicicleta datos de bicileta en un indice especifico a mostrar
 * \param listaColores[] eColor array de colores
 * \param tamColores int tamano de array de colores
 * \param listaTipos[] eTipo array de tipos de bicis
 * \param tamTipos int tamanio de array de tipos
 * \return void
 *
 */
void mostrarBicileta(eBicicleta autoInd,eColor listaColores[], int tamColores,eTipo listaTipos[],int tamTipos,eCliente listaClientes[],int tamClientes);


/** \brief muestra los datos de las bicicletas que existen en el array bicicletas
 *
 * \param listaBicicletas[] eBicicleta array de las bicis
 * \param tam int tamanio de array de biciletas
 * \param listaColores[] eColor array de colores
 * \param tamColores int tamano de array de colores
 * \param listaTipos[] eTipo array de tipos de bicis
 * \param tamTipos int tamanio de array de tipos
 * \return int 0 si no se pudo realizar la funcion , 1 si salio todo bien
 *
 */
int mostrarBiciletas(eBicicleta listaBicicletas[], int tam,eColor listaColores[],int tamColores,eTipo listaTipos[],int tamTipos ,eCliente listaClientes[],int tamClientes);



/** \brief inicializa todas las posiciones del array bicicletas en vacias
 *
 * \param listaBicicletas[] eBicicleta array de las bicis
 * \param tam int tamanio de array de biciletas
 * \return int 0 si no se pudo realizar la funcion , 1 si salio todo bien
 *
 */

int inicializarBicicletas(eBicicleta listaBicicletas[],int tam);
/** \brief busca una posicion libre en el array bicicletas
 *
 * \param listaBicicletas[] eBicicleta array bicicletas
 * \param tam int tamanio array bicicletas
 * \return int el indice libre
 *
 */


int buscarLibreBicicleta(eBicicleta listaBicicletas[], int tam);


/** \brief devuelve el indice de una bicicleta a traves de su id
 *
 * \param listaBicicletas[] eBicicleta array bicicletas
 * \param tam int tamanio array bicicletas
 * \param id int id de bicicleta a buscar indice
 * \return int indice de bicicleta
 *
 */
int buscarIndiceBicicletaId(eBicicleta listaBicicletas[],int tam,int id);



/** \brief valida si existe o no una bicicleta a traves de su id
 *
 * \param listaBicicletas[] eBicicleta array biciletas
 * \param tam int tamanio array bicicletas
  * \param idBicicleta id de bicicleta a verificar
 * \return int 1 si existe la bicicleta , 0 si no existe
 *
 */
int existeBicicleta(eBicicleta listaBicicletas[], int tam,int idBicicleta);


/** \brief muestra la marca de una bicicleta filtrando a traves del id
 *
 * \param listaBicicleta[] eBicicleta array bicicletas
 * \param tamBicicletas int tamanio bicicletas
 * \param idBicicleta int id bicicleta a filtrar
 * \param nombreAMostrar[] char direcion de memoria donde se guarda la marca de la bici
 * \return int
 *
 */
int cargarMarcaBicicleta(eBicicleta listaBicicleta[],int tamBicicletas, int idBicicleta,char nombreAMostrar[]);
