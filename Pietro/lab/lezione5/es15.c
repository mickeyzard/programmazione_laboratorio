#include <stdio.h>
#include <stdlib.h>
#define N 100


int main() {
    char s [N+1];
    int i;
	int max = 0;
	int conto;
   	while (fgets(s, sizeof(s), stdin) != NULL && s[0] != '\n') {
    	for (i = 0; s[i] != '\n' && s[i] != '\0'; i++);
		if (i > max){
			max = i;
		}
	}

    printf("lunghezza massima fra le lunghezze delle stringhe inserite: %d\n", max);

    return 0;
} 
