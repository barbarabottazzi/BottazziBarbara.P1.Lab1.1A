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
    printf("2-Modificar material \n");
    printf("3-Volver al menu principal \n");
    validaciones_ingresoRangoInt(&opcion,"Ingrese una opcion","Ingrese un numero valido\n",1,3);
    return opcion;

}

int menuInformes()
{
    int opcion;
    printf("Ingrese una opcion: \n");
    printf("1-Mostrar bicicletas de un color a seleccionar \n");
    printf("2-Mostrar bicicletas de un tipo \n");
    printf("3-Informar si hay bicicletas de carbon o de aluminio y cantidad \n");
    printf("4-Listado de bicicletas por tipo \n");
    printf("5-Elegir un color y un tipo y contar cuantas bicicletas hay de ese color y ese tipo. \n");
    printf("6-Mostrar colores o color mas elegidos de bicicletas \n");
    printf("7-Inrgesar una bicicleta y mostrar trabajos que se le hicieron a la bicicleta. \n");
    printf("8-Suma importes de una bicicleta \n");
    printf("9-Informar bicicletas que recibieron un servicio y fecha\n");
    printf("10-Pedir una fecha y mostrar servicios realizados en la misma\n");
    printf("11-Volver al menu principal \n");
    validaciones_ingresoRangoInt(&opcion,"Ingrese una opcion","Ingrese un numero valido\n",1,11);
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
     printf("J-INFORMES \n");
    printf("K-SALIR \n");
    validaciones_ingresoRangoChar(&opcion,"Ingrese una opcion\n","Error,ingrese opcion valida\n",'a','k');
    return opcion;
}
