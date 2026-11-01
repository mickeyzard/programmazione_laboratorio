#include <stdio.h>
#include <stdlib.h>
#define N 100


int main() {
    char s [N+1];
    char c;
    int i;
	int conto = 0;
	int lunghezza = 0;
    double rapporto;

	printf("Inserisci stringa:\n");
   	fgets(s, sizeof(s), stdin);
	printf("Inserisci carattere da leggere:");
	printf("\n");
    c = getchar();
    getchar();
    for (i = 0; s[i] != '\n' && s[i] != '\0'; i++){
		if (s[i] == c){
			conto++;		
		}
	}
	lunghezza = i;
	rapporto = (double)conto / lunghezza;

    printf("La frequenza del carattere '%c' è: %lf\n",c , rapporto);

    return 0;
} 
