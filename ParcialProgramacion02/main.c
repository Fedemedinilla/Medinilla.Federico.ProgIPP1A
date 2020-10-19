#include <stdio.h>
#include <stdlib.h>
#include <string.h>

///2. Crear una función que se llame contarCaracteres que reciba una cadena de caracteres como primer parámetro y un carácter como segundo y
///devuelva la cantidad de veces que ese carácter aparece en la cadena *

int contarCaracteres(char[],char);

int main()
{
    char palabra[25];
    char letra;
    int resultadoDeCantidad;

    printf("\nIngrese una palabra: ");
    fflush(stdin);
    gets(palabra);

    printf("\nIngrese una letra a buscar: ");
    fflush(stdin);
    scanf("%c",&letra);

    resultadoDeCantidad=contarCaracteres(palabra,letra);

    printf("\nLa letra %c se encontro %d veces en %s\n",letra,resultadoDeCantidad,palabra);

}
int contarCaracteres(char palabraARecorrer[],char caracter)
{
    int retornoResultado;
    int cadenaLargo;

    retornoResultado=0;
    cadenaLargo=strlen(palabraARecorrer);

    for(int i=0;i<cadenaLargo;i++)
    {
        if(palabraARecorrer[i]==caracter)
        {
            retornoResultado++;
        }
    }

    return retornoResultado;
}
