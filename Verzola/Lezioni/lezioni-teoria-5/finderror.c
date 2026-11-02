#include <stdio.h>

double avg(double n1, double n2){
    return (n1 + n2)/2;
}

int main(){
    double n1, n2;
    double result = 0;

    printf("Inserisci i due numeri separati da spazio: ");
    scanf("%lf %lf", &n1, &n2);

    result = avg(n1, n2);
    printf("avg(%lf, %lf)=%lf\n", n1, n2, result);

    return 0;
}


