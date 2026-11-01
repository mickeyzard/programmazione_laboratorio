#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 10

int main() {
    int n;
    double d[N];
    double mean = 0;
    double media = 0;
    double somma_scarti_quadrati = 0;
    double varianza = 0;
    double deviazione = 0;
	bool scambio = true;
	double temp = 0;
	double mediana;
	
    do {
    printf("Inserisci dimensione array: \n");
    scanf("%d",&n);
    } while (n>N);


    printf("inserire %d double:\n", n);
    for(int i=0;i<n;i++){
        scanf("%lf",&d[i]);
        mean = mean + d[i];
    }

	printf("Pre bubble sort: ");
	for(int i = 0; i < n; i++){
        printf("%lf ",d[i]);

    }
	printf("\n");

    media = mean / n;
    
    for (int i = 0; i < n; i++) {
        somma_scarti_quadrati += pow(d[i] - media, 2);
    }
    varianza = somma_scarti_quadrati / n;
    deviazione = sqrt(varianza);
	
	while (scambio == true){
       scambio =false;
       for (int i=0; i<=n-2; i++)
          if (d[i]>d[i+1]){
                temp = d[i];
                d[i] = d[i+1];
                d[i+1] = temp;
                scambio =true;
          }
	}

    printf("media dei %d double: %lf\n", n,media);
    printf("varianza: %lf \n", varianza);
    printf("Scarto quadratico medio: %lf\n", deviazione);
	
	printf("\n");
	printf("Post bubble sort: ");

    for(int i = 0; i < n; i++){
        printf("%lf ",d[i]);

    }
	if (n % 2 == 1){
		mediana = d[n/2];
		printf("La mediana é: %lf\n",mediana);
	} else {
		mediana = (d[n/2 - 1] + d[n/2]) / 2;
		printf("La mediana é: %lf\n",mediana);
	}
    return 0;
}
