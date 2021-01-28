#include <stdio.h>

//Ejercicio 7

int main() {
    
    float *ptr_float;
    
    printf("El valor apuntado por ptr_float es %f ", 
    *ptr_float);
    
    *ptr_float = 33;
    
    return 0;
}