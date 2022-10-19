#ifndef VALIDACIONES_H_INCLUDED
#define VALIDACIONES_H_INCLUDED


/**
 * @brief confirma si el usuario quiere continuar ejecutando el programa o no
 *
 * @param p direccion de memoria de la variable donde se va a guardar la respuesta del usuario.
 * @param confirma el valor de confirmacion por ej 's'
 * @param Noconfirma el valor de confirmacion por ej 'n'
 * @return devuelve 0 para no, 1 para si
 */
int validaciones_confirma(char *pVariable,char *mensaje, char confirma,char noConfirma);




/** \brief Pregunta un numero al usuario y valida si un numero entero,pertenece a un rango.
 *
 * \param pResultado int* direccion de memoria donde se guarda el numero a validar
 * \param mensaje char* mensaje a mostrar al usuario
 * \param mensajeError char* mensaje en caso de error, a mostrar al usuario
 * \param minimo int rango minimo a validar
 * \param maximo int rango maximo a validar
 * \return int devuelve 0 si haye error en la validacion, 1 si no hay error
 *
 */
int validaciones_ingresoRangoInt(int *pResultado, char *mensaje, char *mensajeError,int minimo, int maximo);




/** \brief Pregunta un numero al usuario y valida si un numero flotante,pertenece a un rango.
 *
 * \param pResultado float* direccion de memoria donde se guarda el numero a validar
 * \param mensaje char mensaje a mostrar al usuario
 * \param mensajeError char* mensaje en caso de error, a mostrar al usuario
 * \param minimo float rango minimo a validar
 * \param maximo float rango maximo a validar
 * \return int devuelve 0 si haye error en la validacion, 1 si no hay error
 *
 */
int validaciones_ingresoRangoFloat(float *pResultado, char *mensaje, char *mensajeError,float minimo, float maximo);




/** \brief Pregunta un char al usuario y valida si pertenece a un rango.
 *
 * \param pResultado char* direccion de memoria donde se guarda el char a validar
 * \param mensaje char* char mensaje a mostrar al usuario
 * \param mensajeError char*  mensaje en caso de error, a mostrar al usuario
 * \param minimo char rango minimo a validar
 * \param maximo char rango maximo a validar
 * \return int devuelve 0 si haye error en la validacion, 1 si no hay error
 *
 */
int validaciones_ingresoRangoChar(char *pResultado, char *mensaje, char *mensajeError,char minimo, char maximo);


/** \brief Pregunta un char al usuario y valida si pertenece a alguna de 2 opciones.
 *
 * \param pResultado char* direccion de memoria donde se guarda el char a validar
 * \param mensaje char* mensaje a mostrar al usuario
 * \param mensajeError char* ensaje en caso de error, a mostrar al usuario
 * \param opcionUno char opcion 1 a validar
 * \param opcionDos char opcion 2 a validar
 * \return int devuelve 0 si haye error en la validacion, 1 si no hay error
 *
 */
int validaciones_ingresoChar(char *pResultado, char *mensaje, char *mensajeError,char opcionUno, char opcionDos);


/** \brief devuelve si un array de strings contiene o no letras
 *
 * \param str[] char string a evaluar
 * \return int devuelve 0 si tiene al menos un caracter que no sea letras validas y 1 si tiene letras
 *
 */

int validaciones_letras(char str[]);


/** \brief pide al usuario un string y valida que unicamente sean letras
 *
 * \param pResultado[] char direccion de memoria donde se guarda el string a evaluar
 * \param mensaje char* mensaje a mostrar al usuario
 * \param mensajeError char* mensaje a mostrar al usuario en caso de error
 * \return int devuelve 0 si no es validado, 1 si es valida la letra
 *
 */
int validaciones_ingresoLetras(char pResultado[], char *mensaje, char *mensajeError);


#endif // VALIDACIONES_H_INCLUDED


