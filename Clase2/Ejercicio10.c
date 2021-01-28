#include <stdio.h>

//Ejercicio 10

int main() {
    
    int a = 0, b = 15;
    int *const ptr = &a;
    *ptr = 3;
    ptr = &b; //Genera error
    
    return 0;
}