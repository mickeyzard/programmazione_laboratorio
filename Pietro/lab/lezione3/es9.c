#include <stdio.h>
#include <stdlib.h>


int main() {
    int A=0;
    int B=0;

   
        printf("calcolo MCD tra intero >0: ");
        scanf("%d", &A);
        if(A <= 0){
            printf("sei un coglionazzo\n");
            return -1;
        }

        printf("e intero >0: ");
        scanf("%d", &B);
        if(B <=0){
            printf("sei un coglionazzo\n");
            return -1;
        }

    int a = A;
    int b = B;
    int aux;

    while (b != 0){
        aux = b;
        b = a%b;
        a = aux;
    }
        
    printf("l'MCD tra %d e %d è %d\n", A, B, a);
    

    return 0;
}