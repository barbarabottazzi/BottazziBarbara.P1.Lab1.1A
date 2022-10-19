#ifndef TIPO_H_INCLUDED
#define TIPO_H_INCLUDED

typedef struct{
int id;
char descripcion[21];
}eTipo;

#endif // TIPO_H_INCLUDED
/** \brief muestra los tipos de bicicleta
 *
 * \param listaTipos[] eTipo array tipos
 * \param tam int tamanio array tipos
 * \return int devuelve 0 si no se pudo resolver la funcion, 1 si se resolvio bien
 *
 */

int mostrarTipos(eTipo listaTipos[], int tam);




/** \brief muestra la descripcion de un tipo  a traves de su id
 *
 * \param listaMarcas[] eTipo array tipos
 * \param tamMarcas int tamanio array tipos
 * \param idTipo int id de bici a buscar descripcion
 * \param tipoAmostrar[] char donde se guarda la descripcion
 * \return int
 *
 */
int cargarDescripcionTipos(eTipo listaMarcas[],int tamMarcas, int idTipo,char tipoAmostrar[]);



/** \brief valida si existe o no un tipo a traves de su id
 *
 * \param listaTipos[] eTipo array tipos
 * \param tamTipos int tamanio array tipos
 * \param idTipo int id de tipo a buscar descripcion
 * \return int 0 si no existe el tipo, 1 si existe
 *
 */
int existeTipo(eTipo listaTipos[],int tamTipos,int idTipo);
