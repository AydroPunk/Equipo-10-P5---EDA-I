#ifndef __PILA_H__
#define __PILA_H__
#define MAX 100
#include <stdbool.h>

typedef int Item;
typedef struct _Pila{
    Item datos [MAX];
    int *Primero;
    int *Ultimo;
    int lon;
}Pila;
Pila* vacia();
void meter (Pila*, Item);
void sacar(Pila*);
bool es_vacia(Pila*);
bool esta_llena(Pila*);
Item cima(Pila*);
void imprimir (Pila*);

#endif