#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

typedef struct{
int id;
char nombre[30];
char sexo;
}eCliente;

#endif // CLIENTE_H_INCLUDED


/** \brief completa el nombre del cliente en la param nombreamostrar pasado por referencia
 *
 * \param listaClientes[] eCliente array de clientes
 * \param tamClientes int tamanio array clientes
 * \param idCliente int id cliente a cargar
 * \param nombreAMostrar[] char donde se guarda el nombre
 * \return int
 *
 */
int cargarDescripcionClientes(eCliente listaClientes[],int tamClientes, int idCliente,char nombreAMostrar[]);

/** \brief
 *
 * \param listaClientes[] eCliente
 * \param tam int
 * \return int
 *
 */
int mostrarClientes(eCliente listaClientes[], int tam );
/** \brief
 *
 * \param clienteInd eCliente
 * \return void
 *
 */
void mostrarCliente(eCliente clienteInd);
