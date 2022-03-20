#include "Cola.Arr.h"
#include <stdlib.h>//Biblioteca para la utilizacion de la funcion "malloc"
#include <stdio.h>
/**
 * @brief Funcion que se encarga de crear la cola
 * 
 * @return colarr* 
 */

colarr* cola_vacia_arr(){
    colarr *c;
    c = (colarr*)malloc(sizeof(colarr));//Se crea una cola con la funcion malloc
    c -> _final = c -> _frente = NULL;
    c -> lon = 0;
    return c; //Se retura c
}
/**
 * @brief Funcion encargada de agregar datos a la cola
 * 
 * @param c Es la cola
 * @param dato De tipo entero
 * @return true Si se pudo encolar o añadir
 * @return false Si no se pudo encolar o añadir
 */
bool encolar_arr(colarr* c, DATA dato){
    if(es_vacia_arr(c))
    {
        c -> datos [0] = dato;
        c -> _frente = c -> _final = &c -> datos[0]; //Apuntamos a datos, que este mismo sera de 20 datos enteros
        c -> lon++;//Aumentamos su 
        return true;
    }else if (!esta_llena_arr(c))
    {
        if (c -> _final < &c -> datos [MAX -1]){
            c -> _final++;
            *(c ->_final) = dato;
            c -> lon ++;
            return true;
        }else{
            c -> _final = &c -> datos[0];
            *(c -> _final) = dato;
            c -> lon++;
            return true;
        }
    }
    return false;
}
/**
 * @brief Funcion que sirve para quitar elementos
 * 
 * @param c Cola
 * @return true Si se pudo eliminar de la cola
 * @return false Si no se pudo eliminar
 */
bool desencolar_arr(colarr *c){
    if (!es_vacia_arr(c))//Llamamos a nuestra funcion para asi verficar si esta vacia o no
    {
        if (c ->_final == c ->_frente)
        {
            c -> lon = 0;
            return true;
        }else if (c -> _frente < &c -> datos[MAX - 1])
        {
            c -> _frente++;
            c -> lon--;
            return true;
        }else{
            c -> _frente = &c -> datos [0];
            c -> lon--;
            return true;
        }
    }
    return false;
}

/**
 * @brief Funcion que verifica si es que la cola esta vacia 
 * 
 * @param c Cola
 * @return true Si es que la cola esta vacia  
 * @return false Si es que la cola no esta vacia 
 */
bool es_vacia_arr(colarr *c){
    return (c -> lon == 0 )? true : false; /*Este verifica si el parametro c que esta aputando a lon, no es igual a 0, si es el caso
    retorna true, afirmando que la cola esta vacia*/
}
/**
 * @brief Funcion que verifica si es que la cola esta llena
 * 
 * @param c Cola
 * @return true Si es que la cola esta llena 
 * @return false Si es que la cola no esta llena 
 */
bool esta_llena_arr(colarr *c){
    return (c -> lon == MAX)? true : false;/*Este verifica si el parametro c que esta aputando a lon, no es igual a MAX (20 datos de tipo entero), si es el caso retorna true, afirmando que la cola esta llena*/
}
/**
 * @brief Funcion que borra la cola
 * 
 * @param c Cola
 * @return true Si es que logro borrar la cola
 * @return false Si es que no logro borrar la cola
 */
bool anular_arr(colarr *c){
    if (c!=NULL){//Verifcamos si es que el parametro c es diferente a c mediante un if
        free(c);
        c = NULL;
        return true;
    }
    return false;
}
/**
 * @brief Funcion que imprime la cola en la pantalla del usuario
 * @param c Cola
 */
void imprimir_colarr(colarr *c){
    printf("[ ");
    for (int *i = c -> _frente; i != c -> _final; i++)
    {
        printf("%d ", *i);
        if (i == &c -> datos[MAX - 1])
        {
            i = &c -> datos[0];
        }
    }
    printf("]\n");
}