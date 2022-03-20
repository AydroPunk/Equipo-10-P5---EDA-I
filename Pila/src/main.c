#include <stdio.h>
#include <pila.h>
#include <stdlib.h>


int main()
{
	printf("a");
    Pila *p;
    p = vacia();
    imprimir(p);
    meter(p,1);
    meter(p,3);
    imprimir(p);
    sacar(p);
    imprimir(p);
	return 0;
}