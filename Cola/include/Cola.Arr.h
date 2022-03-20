#ifndef __COLA_H_ARR_H
#define __COLA_H_ARR_H
#include "Nodo.h"
#include <stdbool.h>//Biblioteca para la utilizacion de la funcion "bool"
#define MAX 20

struct _cola_arr{
    int datos[MAX];
    int* _frente;//Si el frente es tail, 
    int* _final;
    int lon;
};

typedef struct _cola_arr colarr;

colarr* cola_vacia_arr();
bool encolar_arr(colarr*, DATA);
bool desencolar_arr(colarr*);//Cima de la pila
int primero_arr(colarr*);
bool es_vacia_arr(colarr*);
bool esta_llena_arr(colarr*);
int cuantos_arr(colarr*);
bool anular_arr(colarr*);
void imprimir_colarr(colarr*);

#endif //__COLA_H_ARR_H
