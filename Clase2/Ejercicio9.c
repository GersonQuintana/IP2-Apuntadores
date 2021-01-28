#include <stdio.h>

//Ejercicio 9

int main() {
    
    char c = 'z';
    char *pc = &c;
    char **ppc = &pc;
    char ***pppc = &ppc;
    ***pppc = 'm';
    
    printf("El valor del último apuntador es: %c ", ***pppc);
    
    return 0;
}