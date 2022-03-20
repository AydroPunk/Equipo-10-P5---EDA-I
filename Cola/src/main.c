#include <stdio.h>
#include <Cola.Arr.h>
int menu ();

int main(){
    int op = 0;
    colarr *c;
    DATA info;
    do{
        op = menu();
        switch (op)
        {
        case 1:
            c = cola_vacia_arr();
            break;
        case 2:
            printf("Ingresa el dato a insertar en la Cola\n");
            scanf("%d ", &info);
            encolar_arr(c, info);
            imprimir_colarr(c);
            break;
        case 3:
            desencolar_arr(c);
            imprimir_colarr(c);
            break;
        case 4:
            anular_arr(c);
            break;
        default:
            break;
        }
    }while (op != 5);//op es diferente de 5
    return (0);
}
int menu (){
    int opcion;
    printf("\n");  
    printf("██████╗░██╗███████╗███╗░░██╗██╗░░░██╗███████╗███╗░░██╗██╗██████╗░░█████╗░░██████╗ \n");
    printf("██╔══██╗██║██╔════╝████╗░██║██║░░░██║██╔════╝████╗░██║██║██╔══██╗██╔══██╗██╔════╝ \n");
    printf("██████╦╝██║█████╗░░██╔██╗██║╚██╗░██╔╝█████╗░░██╔██╗██║██║██║░░██║██║░░██║╚█████╗░ \n");
    printf("██╔══██╗██║██╔══╝░░██║╚████║░╚████╔╝░██╔══╝░░██║╚████║██║██║░░██║██║░░██║░╚═══██╗ \n");
    printf("██████╦╝██║███████╗██║░╚███║░░╚██╔╝░░███████╗██║░╚███║██║██████╔╝╚█████╔╝██████╔╝ \n");
    printf("╚═════╝░╚═╝╚══════╝╚═╝░░╚══╝░░░╚═╝░░░╚══════╝╚═╝░░╚══╝╚═╝╚═════╝░░╚════╝░╚═════╝░ \n");
    printf("\n");
    printf("Selecciona una opcion: \n");
    printf("1. Crear cola\n");
    printf("2. Encolar\n");
    printf("3. Desencolar\n");
    printf("4. Anular\n");
    printf("5. Salir\n");
    scanf("%d", &opcion);
    return opcion;
}
