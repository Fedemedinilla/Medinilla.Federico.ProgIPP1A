#include <stdio.h>
#include <stdlib.h>

///1. Crear una funci�n llamada aplicarDescuento que reciba como par�metro el precio de un producto y
///devuelva el valor del producto con un descuento del 5%. Realizar la llamada desde el main.

int aplicarDescuento(int);

int main()
{
    int valor;
    float valorConDescuento;

    printf("\nIngrese el valor del producto: ");
    scanf("%d",&valor);

    valorConDescuento=aplicarDescuento(valor);

    printf("\nTotal a pagar: %.2f",valorConDescuento);
}
int aplicarDescuento(int valorProducto)
{
    float resultado;

    resultado=(float)valorProducto*0.95;

    return resultado;
}
