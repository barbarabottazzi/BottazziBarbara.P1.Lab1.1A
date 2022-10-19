#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "inputs.h"
#include "validaciones.h"
#include "outputs.h"
#include <ctype.h>
#include "menu.h"


int menuModificacion()
{
    int opcion;
    printf("Ingrese una opcion: \n");
    printf("1-Modificar tipo \n");
    printf("3-Modificar material \n");
    printf("4-Volver al menu principal \n");
    validaciones_ingresoRangoInt(&opcion,"Ingrese una opcion","Ingrese un numero valido\n",1,4);
    return opcion;

}



int menu()
{
    char opcion;
    system("cls");
    printf("                           ABM AUTOS                      \n");
    printf("-----------------------------------------------------------\n");
    printf("A-ALTA BICICLETA \n");
    printf("B-MODIFICAR BICICLETA \n");
    printf("C-BAJA BICICLETA \n");
    printf("D-LISTAR BICICLETA \n");
    printf("E-LISTAR TIPOS \n");
    printf("F-LISTAR COLORES \n");
    printf("G-LISTAR SERVICIOS \n");
    printf("H-ALTA TRABAJO \n");
    printf("I-LISTAR TRABAJO \n");
    printf("J-SALIR \n");
    validaciones_ingresoRangoChar(&opcion,"Ingrese una opcion\n","Error,ingrese opcion valida\n",'a','j');
    return opcion;
}
