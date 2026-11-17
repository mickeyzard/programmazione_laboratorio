#include <stdio.h>
#include <string.h>

//es1 funzione reverse
/*
void reverse (char *s, char *t){
	int i = 0, j = 0;
	while (s[i] != '\0'){
		i++;
	}

	while (i>0){
	t[j] = s[i-1];
	j++;
	i--;
	}

	t[j] = '\0';
	
}

int main(void){
	char str1[BUFSIZ], str2[BUFSIZ];
	
	printf("Inserisci una stringa: ");
	if( fgets (str1, BUFSIZ, stdin) == NULL ){
		printf("Errore in lettura!\n");
		return -1;
	}

	int i = 0;
	for(; str1[i]!='\n';i++);
	str1[i]='\0';

	reverse(str1, str2);

	printf("La stringa al contrario è: \n%s\n", str2);

    return 0;
}
*/

//es2 funzione equals
/*
int equals(char *s, char *t){
	int i = 0;
	while(s[i] == t[i] && s[i] != '\0'){
		i++;
	}
	if(s[i]== '\0' && t[i]== '\0'){
		return 1;
	}
	return 0;
}

int main(void){
	char str1[BUFSIZ], str2[BUFSIZ];
	
	printf("Inserisci prima stringa: ");
	if( fgets (str1, BUFSIZ, stdin) == NULL ){
		printf("Errore in lettura!\n");
		return -1;
	}
	str1[strcspn(str1, "\n")] = '\0';

	printf("Inserisci seconda stringa: ");
	if( fgets (str2, BUFSIZ, stdin) == NULL ){
		printf("Errore in lettura!\n");
		return -1;
	}
	str2[strcspn(str2, "\n")] = '\0';


	if (equals(str1, str2)){
		printf("Le due stringhe sono UGUALI!\n");
	} else {
		printf("Le due stringhe sono DIVERSE!\n");
	}

    return 0;
}
*/

//es3 funzione palindroma
/*
void reverse (char *s, char *t){
	int i = 0, j = 0;
	while (s[i] != '\0'){
		i++;
	}

	while (i>0){
	t[j] = s[i-1];
	j++;
	i--;
	}

	t[j] = '\0';
	
}

int equals(char *s, char *t){
	int i = 0;
	while(s[i] == t[i] && s[i] != '\0'){
		i++;
	}
	if(s[i]== '\0' && t[i]== '\0'){
		return 1;
	}
	return 0;
}

int main(void){
	char str1[BUFSIZ], str2[BUFSIZ];
	
	printf("Inserisci una stringa: ");
	if( fgets (str1, BUFSIZ, stdin) == NULL ){
		printf("Errore in lettura!\n");
		return -1;
	}

	int i = 0;
	for(; str1[i]!='\n';i++);
	str1[i]='\0';

	reverse(str1, str2);

	if (equals(str1, str2)){
		printf("è un palindromo\n");
	} else {
		printf("non è un palindromo\n");
	}

    return 0;
}
*/

//es4 confronto lessico grafico tra stringhe
/*
int lex(char *s, char *t){
	int i = 0;
	while(s[i] != '\0' && t[i] != '\0'){
		if (s[i] != t[i]){
			if(s[i] < t[i]){
			return 1;
			} else {
				return -1;			
			}
			
		}
		i++;                               
	}
	
	if(s[i]== '\0' && t[i]== '\0'){
		return 0;
	}
	if(s[i] == '\0'){
		return 1;
	} else {
		return -1;
	}

}

int main (void){
	char str1[BUFSIZ], str2[BUFSIZ];
	
	printf("Inserisci prima stringa: ");
	if( fgets (str1, BUFSIZ, stdin) == NULL ){
		printf("Errore in lettura!\n");
		return -1;
	}
	str1[strcspn(str1, "\n")] = '\0';

	printf("Inserisci seconda stringa: ");
	if( fgets (str2, BUFSIZ, stdin) == NULL ){
		printf("Errore in lettura!\n");
		return -1;
	}
	str2[strcspn(str2, "\n")] = '\0';

	int ris = lex(str1, str2);
	if (ris  == 1){
	printf("%s precede strettamente %s nell’ordinamento!\n", str1, str2);
	} else if (ris  == -1){
	printf("%s precede strettamente %s nell’ordinamento!\n", str2, str1);
	} else {
	printf("%s e %s sono uguali nell’ordinamento!\n", str1, str2);
	}	
	
	return 0;
	
}
*/
//es5 Funzione clean.
/*
void clean (char *s, char *t){
int i = 0, j = 0;
	while (s[i] != '\n' && s[i] != '\0'){
		if(s[i]!= ' '){
		t[j] = s[i];
		j++;
		}
	i++;
	}
	t[j] = '\0';

}

int main(void){
	char str1[BUFSIZ];
	
	printf("Inserisci una stringa: ");
	if( fgets (str1, BUFSIZ, stdin) == NULL ){
		printf("Errore in lettura!\n");
		return -1;
	}

	char str2[sizeof(str1)];

	clean(str1, str2);

	printf("la stringa dopo la funzione clean: %s\n" , str2);


    return 0;
}

*/

//es6 Funzione clean parametrica
/*
void clean (char *s, char *t, char c){
int i = 0, j = 0;
	while (s[i] != '\n' && s[i] != '\0'){
		if(s[i]!= c){
		t[j] = s[i];
		j++;
		}
	i++;
	}
	t[j] = '\0';

}

int main(void){
	char str1[BUFSIZ];
	char c;
	printf("Inserisci una stringa: ");
	if( fgets (str1, BUFSIZ, stdin) == NULL ){
		printf("Errore in lettura!\n");
		return -1;
	}
	
	printf("Inserisci carattere: ");
	c = getchar();

	char str2[sizeof(str1)];
	clean(str1, str2, c);

	printf("la stringa dopo la funzione clean: %s\n" , str2);


    return 0;
}
*/

//es7 funzione clean parametrica, con più caratteri.

void clean(char *s, char *t, char *u) {
    int i = 0, j = 0;

    while (s[i] != '\0') {

        int trovato = 0;
        int k = 0;

        while (u[k] != '\0') {
            if (s[i] == u[k]) {
                trovato = 1;
            }
            k++;
        }
		if (trovato == 0){
			t[j] = s[i];
			j++;
		}

        i++;
    }

    t[j] = '\0';
}

int main(void){
	char str1[BUFSIZ];
	char str3[BUFSIZ];
	printf("Inserisci una stringa: ");
	if( fgets (str1, BUFSIZ, stdin) == NULL ){
		printf("Errore in lettura!\n");
		return -1;
	}
	
	printf("Inserisci carattere: ");
	if( fgets (str3, BUFSIZ, stdin) == NULL ){
		printf("Errore in lettura!\n");
		return -1;
	}
	str3[strcspn(str3, "\n")] = '\0';

	char str2[sizeof(str1)];
	clean(str1, str2, str3);

	printf("la stringa dopo la funzione clean: %s\n" , str2);


    return 0;
}
