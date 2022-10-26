#ifndef SERVICIOS_H_INCLUDED
#define SERVICIOS_H_INCLUDED

typedef struct{
int id;
char descripcion[26];
float precio;

}eServicios;

#endif // SERVICIOS_H_INCLUDED


/** \brief muestra un servicio del array servicios
 *
 * \param servicio eServicios el array de sercvicios en un indice especifico
 * \return void
 *
 */
void mostrarServicio(eServicios servicio);



/** \brief muestra todos los servicios
 *
 * \param listaServicios[] eServicios array servicios
 * \param tam int tamanio array servicios
 * \return int 0 si no se pudo resolver la funcion, 1 si salio todo bien
 *
 */
int mostrarServicios(eServicios listaServicios[], int tam);



/** \brief muestra la descripcion del servicio a traves de su id
 *
 * \param listaServicios[] eServicios array servicios
 * \param tamServicios int tamanio array servicios
 * \param idServicio int id servicio a buscar
 * \param servicioAMostrar[] char donde se guarda la descrpcion del servicio
 * \return int
 *
 */
int cargarDescripcionServicios(eServicios listaServicios[],int tamServicios, int idServicio,char servicioAMostrar[]);


/** \brief busca si existe o no un servicio a traves de su id
 *
 * \param listaServicios[] eServicios array servicios
 * \param tamServicios int tamanio array servicios
 * \param idServicioABuscar int id a buscar
 * \return int devuelve 0 si no existe el servciicio . 1 si existes
 *
 */
int buscarServicio(eServicios listaServicios[],int tamServicios,int idServicioABuscar);
