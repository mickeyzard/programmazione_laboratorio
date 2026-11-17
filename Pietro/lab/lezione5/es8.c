#include <stdio.h>
#include <stdlib.h>
#define N 5


int main() {
    double d[N];
    double mean = 0;

    printf("inserire 5 double:\n");
    for(int i=0;i<5;i++){
        scanf("%lf",&d[i]);
        mean = mean + d[i];
    }

    mean = mean / N;
    
    printf("media dei 5 double: %lf\n",mean);

    return 0;
}