#ifndef __COLA_H__
#define __COLA_H__
#include "Nodo.h"
#include <stdbool.h>

struct _cola{
    NODO* _frente;//Si el frente es tail, 
    NODO* _final;
    int lon;
};

typedef struct _cola cola;

cola* pila_vacia();
bool encolar (cola*, DATA);
DATA desencolar(cola*);//Cima de la pila
DATA primero(cola*);
bool es_vacia(cola*);
int cuantos(cola*);
bool anular(cola*);

#endif //__PILA_H__