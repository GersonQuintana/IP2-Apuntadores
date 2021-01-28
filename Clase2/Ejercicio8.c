#include <stdio.h>

//Ejercicio 8

int *ptr_int, var;

void init_ptr(){
    int local = 57;
    ptr_int = &local;
    var = *ptr_int;
    *ptr_int = 27;
}

int main() {
    
    init_ptr();
    var = *ptr_int;
    *ptr_int = 20;
    
    return 0;
}