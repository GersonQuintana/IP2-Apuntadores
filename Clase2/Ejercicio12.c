#include <stdio.h>

int main() {
    int lista_arr[5] = {10,20,30,40,50};
    int *lista_ptr;
    lista_ptr = lista_arr; //ambas variables apuntan a la misma dirección de memoria
    printf("%d\n", lista_arr[0]);
    printf("%d\n", lista_ptr[0]); //arreglo de apuntadores
    printf("%d\n", *lista_arr);
    printf("%d\n", *lista_ptr);
    return 0;
}