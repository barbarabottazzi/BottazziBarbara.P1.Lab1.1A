#ifndef INPUTS_H_INCLUDED
#define INPUTS_H_INCLUDED

#endif // INPUTS_H_INCLUDED

/** \brief pide al usuario un numero entero y lo valida
 *
 * \param pVariableAInt int* direccion de memoria a guardar el valor del numero validado
 * \param mensaje[] char mensaje a mostrar al usuario
 * \param mensajeError[] char mensaje de error a mostrar al usuario
 * \return devuelve 0 si hay un error en la validacion y 1 si se resuelve bien
 *
 */
int getInt( int *pVariableAInt,char mensaje[], char mensajeError[]);


/** \brief  pide al usuario un numero flotante y lo valida
 *
 * \param mensaje[] char mensaje a mostrar al usuario
 * \param mensajeError[] char mensaje de error a mostrar al usuario
 * \param pVariableAFloat float*  direccion de memoria a guardar el valor del numero validado
 * \return int devuelve 0 si hay un error en la validacion y 1 si se resuelve bien
 *
 */
int getFloat(char mensaje[],char mensajeError[],float *pVariableAFloat);


/** \brief pide al usuario un dato tipo char
 *
 * \param mensaje[] char mensaje a mostrar al usario
 * \return char retorna el char que inrgeso el usuario
 *
 */
char getChar(char mensaje[]);



/** \brief pide al usuario un string y valida que cumpla con un size
 *
 * \param mensaje[] char mensaje a mostrar al usuario
 * \param mensajeError[] char  mensaje de error a mostrar al usuario
 * \param input[] char donde se guarda el valor del string ingresado ya validado
 * \param sizeString int tamano a validar
 * \return void
 *
 */
void getString(char mensaje[],char mensajeError[],char input[],int sizeString);

/** \brief consulta una fecha al usuario
 *
 * \param pMes int* direccion de memoria a guardar el mes
 * \param pAnio int* direccion de memoria a guardar el anio
 * \param pDia int* direccion de memoria a guardar el dia
 * \param mensaje[] char mensaje a mostrar al usuario
 * \param mesajeError[] char char mensaje de error a mostrar al usuario
 * \return int devuelve 0 si la funcion no se pudo realizar, 1 si se realizo correctamente
 *
 */
int getFecha(int *pMes,int *pAnio,int *pDia,char mensaje[],char mesajeError[]);
