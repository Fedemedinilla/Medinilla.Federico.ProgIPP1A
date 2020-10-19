#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 4
///3. Dada la estructura Notebook(id, procesador, marca, precio) generar una función que permita ordenar un array de dicha estructura por marca.
///Ante igualdad de marca deberá ordenarse por precio. Hardcodear datos y mostrarlos desde el main.

typedef struct
{
    int id;
    char procesador[20];
    char marca[20];
    int precio;
}sNotebook;

void hardcodeoInit(sNotebook[]);
void showNotebook(sNotebook);
void showNotebooks(sNotebook[],int);

int main()
{
    sNotebook listNotebooks[4];

    hardcodeoInit(listNotebooks);
    showNotebooks(listNotebooks,TAM);

}
void hardcodeoInit(sNotebook lista[])
{
    int idList[TAM]={100,101,102,103};
    char procesadorList[TAM][20]={"Procesador01","Procesador02","Procesador03","Procesador04"};
    char marcaList[TAM][20]={"Compaq","Asus","Acer","HP"};
    int preciosList[TAM]={120,150,200,300};


    for(int i=0;i<TAM;i++)
    {
        lista[i].id=idList[i];
        strcpy(lista[i].procesador,procesadorList[i]);
        strcpy(lista[i].marca,marcaList[i]);
        lista[i].precio=preciosList[i];
    }
}

void showNotebook(sNotebook notebook)
{
    printf("%d   %s   %s   %d  \n",notebook.id,notebook.procesador,notebook.marca,notebook.precio);
}
void showNotebooks(sNotebook list[],int tam)
{
    if(list!=NULL&&tam>0)
    {
        for(int i=0;i<tam;i++)
        {
            showNotebook(list[i]);
        }
    }
}
