#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int getInt( int *pVariableAInt, char mensaje[], char mensajeError[])
{
    int validado=0;
    int resultado;
    int auxResultado;
    if(pVariableAInt != NULL)
    {
        printf(mensaje);
        resultado=scanf("%d",&auxResultado);
        while(resultado !=1)
        {
            fflush(stdin);
            printf(mensajeError);
            resultado= scanf("%d",&auxResultado);
        }
        *pVariableAInt=auxResultado;
        validado=1;
    }

    return validado;
}

int getFloat(char mensaje[], char mensajeError[], float *pVariableAFloat)
{
    int validado=0;
    int resultado;
    float auxResultado;
    if(pVariableAFloat != NULL)
    {
        printf(mensaje);
        resultado=scanf("%f",&auxResultado);
        while(resultado !=1)
        {
            fflush(stdin);
            printf(mensajeError);
            resultado= scanf("%f",&auxResultado);
        }
        *pVariableAFloat=auxResultado;
        validado=1;
    }

    return validado;
}
int getChar(char mensaje[])
{
    char auxiliar;
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%c",&auxiliar);
    return auxiliar;
}
void getString(char mensaje[],char mensajeError[],char input[],int sizeString)
{
    char auxInput[sizeString];
    int inputLen;
    fflush(stdin);
    printf(mensaje);
    gets(auxInput);
    inputLen=strlen(auxInput);
    while(inputLen >(sizeString-1))
    {
        fflush(stdin);
        printf(mensajeError);
        gets(auxInput);
        inputLen=strlen(auxInput);
    }
    strcpy(input,auxInput);
};

int getFecha(int *pMes,int *pAnio,int *pDia,char mensaje[],char mesajeError[])
{
    int validado=0;
    if(pMes != NULL && pAnio != NULL && pDia != NULL)
    {

        printf("Ingrese fecha en formato dd/mm/aaaa");
        scanf("%d,%d,%d",pDia,pAnio,pMes);

        validado=1;


    }
    return validado;
}

