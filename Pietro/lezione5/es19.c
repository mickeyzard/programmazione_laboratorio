#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define N 100


int main() {
	int i, j;
	int trovato = 0;
	int lunghezza_s2 = 0;
	char s1[N+1];
	char s2[N+1];
	printf("Inserisci prima stringa:\n");
   	fgets(s1, sizeof(s1), stdin);
	printf("Inserisci seconda stringa:\n");
   	fgets(s2, sizeof(s2), stdin);	
	for (lunghezza_s2 = 0; s2[lunghezza_s2] != '\n' && s2[lunghezza_s2] != '\0'; lunghezza_s2++);
	for (i=0;s1[i]!='\n' && s1[i]!='\0';i++){
		for (j=0;s2[j]!='\0';j++){
			if (s1[i+j]!=s2[j]){
				break;
			}

        }
		if (j == lunghezza_s2) {
            trovato = 1;
            break;
		}	
	}
	if (trovato == 1) {
        printf("si la s2 è una sottostringa\n");
    } else {
        printf("no la s2 non è una sottostringa\n");
    }
    return 0;
} 
