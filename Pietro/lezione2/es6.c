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
        s = s + i*i;
    }
    
    ss = n*(n+1)*(2*n+1)/6;

    printf("la somma dei quadrati con ciclo for è %d\n", s);
    printf("la somma dei quadrati con espressione matematica è %d\n", ss);

    return 0;
}