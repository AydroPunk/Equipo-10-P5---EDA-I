#include <pila.h>
#include <stdlib.h>
#include <stdio.h>

Pila* vacia(){
    Pila *p = (Pila*)malloc(sizeof(Pila));
    p -> Ultimo = p -> Primero = &p ->datos[0];
    p ->lon;
    return p;
}
void meter (Pila* p, Item dato){
    if (es_vacia(p)){
        *p -> Ultimo = dato;
        p -> lon;
    }else if (!esta_llena(p))
    {
        p -> Ultimo++;
        *p -> Ultimo =dato;
        p -> lon;
    }
}
void sacar(Pila* p){
    if (!es_vacia(p))
    {
        p -> Ultimo -= 1;
        p -> lon--;
    }
}
bool es_vacia(Pila* p){
    return p -> lon == 0;
}
bool esta_llena(Pila* p){
    return p -> Ultimo == p -> datos[MAX -1];
}
Item cima(Pila* p){
    if (!es_vacia(p)) return *p -> Ultimo;
        return -1;
}
void imprimir (Pila* p){
    printf("{ ");
    for (int *tmp = p -> Ultimo; tmp >= p -> Primero && p -> lon > 0; tmp--)
    {
        printf("%d", *tmp);
    }
    printf("} \n");
}   