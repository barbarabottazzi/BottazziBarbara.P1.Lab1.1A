#ifndef COLOR_H_INCLUDED
#define COLOR_H_INCLUDED

typedef struct
{
    int id;
    char nombreColor[21];
} eColor;

#endif // COLOR_H_INCLUDED


/** \brief muestra todos los colores del array colores

* \param listaColores[] eColor array colores
* \param tam int tamanio array colores
* \return int 0 si no se pudo realizar, 1 si salio todo bien
*
*/
int mostrarColores(eColor listaColores[], int tam);

/** \brief muestra el dato de un color del  array colores

* \param color eColor array colores
* \return void
*
*/
void mostrarColor(eColor color);
/** \brief muestra la desripcion de un color a traves de su id
 *
 * \param listaColores[] eColor array colores recibido por param
 * \param tamColores int tamanio array colores
 * \param idColor int id a cargar descripcion
 * \param colorAMostrar[] char donde se guarda la descripcion del color
 * \return int
 *
 */
int cargarDescripcionColores(eColor listaColores[],int tamColores, int idColor,char colorAMostrar[]);

/** \brief valida si existe o no un color a traves de su id
 *
 * \param listaColores[] eColor array colores
 * \param tamColores int tamanio de array colores
 * \param idColor int id color a buscar
 * \return int 0 si no existe el color, 1 si existe
 *
 */
int existeColor(eColor listaColores[],int tamColores,int idColor);
