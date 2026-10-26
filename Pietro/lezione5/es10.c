#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 5

int main() {
    int n,a[N];
    double d[N];
    double mean = 0;
    double media = 0;
    double somma_scarti_quadrati = 0;
    double varianza = 0;
    double deviazione = 0;
    do {
    printf("Inserisci dimensione array: \n");
    scanf("%d",&n);
    }
    while (n>N);


    printf("inserire %d double:\n", n);
    for(int i=0;i<n;i++){
        scanf("%lf",&d[i]);
        mean = mean + d[i];
    }

    media = mean / n;
    
    for (int i = 0; i < n; i++) {
        somma_scarti_quadrati += pow(d[i] - media, 2);
    }
    varianza = somma_scarti_quadrati / n;
    deviazione = sqrt(varianza);

    printf("media dei %d double: %lf\n", n,media);
    printf("varianza: %lf \n", varianza);
    printf("Scarto quadratico medio: %lf\n", deviazione);

    return 0;
}