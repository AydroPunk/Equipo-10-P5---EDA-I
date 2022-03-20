#ifndef __NODO_H__
#define __NODO_H__

typedef int DATA;

struct _nodo
{
    DATA dato;
    struct _nodo *next;
};

typedef struct _nodo NODO;

NODO* nodo_nuevo (DATA d);
void borrar_nodo (NODO*);

#endif //__NODO_H__