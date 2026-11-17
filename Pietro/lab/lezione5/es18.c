#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define N 100


int main() {
	int i;
	char s[N+1];
	printf("Inserisci stringa:\n");
   	fgets(s, sizeof(s), stdin);
	 for (i = 0; s[i] != '\n' && s[i] != '\0'; i++){
		s[i] = toupper(s[i]);
	}
	printf("stringa inserita in maiuscolo: %s\n", s);
    return 0;
} 
