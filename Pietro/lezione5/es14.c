#include <stdio.h>
#include <stdlib.h>
#define N 100


int main() {
    char s [N+1];
    int i;
	int somma_lunghezze = 0;
	int numero_stringhe = 0;
	double media;
   	while (fgets(s, sizeof(s), stdin) != NULL && s[0] != '\n') {
    	for (i = 0; s[i] != '\n' && s[i] != '\0'; i++);
		somma_lunghezze += i;
		numero_stringhe++;
	}
	media = (double)somma_lunghezze/numero_stringhe;

    printf("lunghezza media delle stringhe inserite:%lf\n", media);

    return 0;
}
