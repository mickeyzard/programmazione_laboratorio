#include <stdio.h>
#include <stdlib.h>
#define A 100
#define B 46


int main() {
    int a = A;
    int b = B;
    int aux;

    while (b != 0){
        aux = b;
        b = a%b;
        a = aux;
    }
        
    printf("l'MCD tra %d e %d è %d", A, B, a);
    

    return 0;
}