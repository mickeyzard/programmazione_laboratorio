#include <stdio.h>
#include <stdlib.h>
#define N 23
#define TENTATIVI 5

int main() {
	int guess;
	int conta = 0;
	bool trovato = false;
	printf("Indovina il valore, hai %d tentativi.", TENTATIVI);
	do {
		conta++;
		printf("Inserisci il valore della tua stima:\n");
		scanf("%d", &guess);	
	if(guess>N){
		printf("Valore troppo alto!\n");
	} else if (guess<N) {
		printf("Valore troppo basso!\n");
	} else {
		trovato = true;
		printf("hai azzeccato, bravo sigma\n");	
	}
	
	} while (conta < TENTATIVI && !trovato);
	if(trovato){
		printf("Hai trovato il valore %d in %d tentativi\n", N, conta);
	} else {
		printf("Non hai trovato il valore, era %d\n.", N);
	}
	return 0;
}
