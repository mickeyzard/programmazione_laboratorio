#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int s;
    int ss;

    do {
        printf("Inserisci intero >=1: ");
        scanf("%d", &n);
    } while (n <1);

    for(int i=0; i<=n; i++){
        s = s + i*i*i;
    }
    
    ss = n*n*(n+1)*(n+1)/4;

    printf("la somma dei cubi con ciclo for è %d\n", s);
    printf("la somma dei cubi con espressione matematica è %d\n", ss);

    return 0;
}