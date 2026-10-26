#include <stdio.h>
#include <stdlib.h>
#define N 5


int main() {
    int n,a[N];
    double d[N];
    double mean = 0;
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

    mean = mean / n;
    
    printf("media dei %d double: %lf\n", n,mean);

    return 0;
}