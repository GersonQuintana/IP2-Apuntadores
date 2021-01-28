#include <stdio.h>

//Referenciación: Es la btención de la dirección de una variable
int main() {
    int dir_var = 15;
    printf("La dirección de la memoria es: %p \n", &dir_var);
    return 0;
}