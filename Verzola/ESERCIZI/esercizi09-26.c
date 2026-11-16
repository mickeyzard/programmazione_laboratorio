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
