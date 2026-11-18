#include <stdio.h>
#include <stdlib.h>
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
/*
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
*/

//es8 ordinamento delle stringhe per lunghezza
/*
int lunghezza (char *s){
	int i = 0;
	while (s[i] != '\0'){
		i++;
	}
	return i;

}

void ordina (char **s, int n){
	bool scambio = true;
	char *temp;
	while (scambio == true){
	   scambio = false;
        for (int i=0; i<=n-2; i++ ){
            if (lunghezza(s[i])>lunghezza(s[i+1])){
                temp = s[i];
                s[i] = s[i+1];
                s[i+1] = temp;
                scambio =true;
            }
		}
	}


}

int main(void){
	char str1[BUFSIZ];
	char *c[5];
	int i = 0;
	for (i = 0; i < 5; i++){
	c[i] = malloc(BUFSIZ * sizeof(char));
	if(c[i]==NULL){
		printf("errore allocazione di memoria\n");
		return -1;

	}
	printf("Inserisci una stringa: ");
		if( fgets (c[i], BUFSIZ, stdin) == NULL ){
			printf("Errore in lettura!\n");
			return -1;

		}
	c[i][strcspn(c[i], "\n")] = '\0';
	
	}

	//for (i = 0; i < 5; i++) {
    //	printf("Stringa: %s - Lunghezza: %d\n", c[i], lunghezza(c[i]));
    //}

	ordina(c, 5);
	
	for (i = 0; i < 5; i++){
		printf("stringa ordinata %d: %s\n", i+1 ,c[i]);
	
	}
	for (i = 0; i < 5; i++){
		free(c[i]);
	}

	

    return 0;
}
*/

//es9 ordinamento lessicografico delle stringhe
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


void ordina (char **s, int n){
	bool scambio = true;
	char *temp;
	while (scambio == true){
	   scambio = false;
        for (int i=0; i<=n-2; i++ ){
            if (lex(s[i], s[i+1]) < 0){
                temp = s[i];
                s[i] = s[i+1];
                s[i+1] = temp;
                scambio =true;
            } 
		}
	}


}

int main(void){
	char *c[5];

	int i = 0;
	for (i = 0; i < 5; i++){
	c[i] = malloc(BUFSIZ * sizeof(char));
	if(c[i]==NULL){
		printf("errore allocazione di memoria\n");
		return -1;

	}
	printf("Inserisci una stringa: ");
		if( fgets (c[i], BUFSIZ, stdin) == NULL ){
			printf("Errore in lettura!\n");
			return -1;

		}
	c[i][strcspn(c[i], "\n")] = '\0';
	
	}

	//for (i = 0; i < 5; i++) {
    //	printf("Stringa: %s - Lunghezza: %d\n", c[i], lunghezza(c[i]));
    //}

	ordina(c, 5);
	
	for (i = 0; i < 5; i++){
		printf("stringa %d ordinata lessicograficamente: %s\n", i+1 ,c[i]);
	
	}
	for (i = 0; i < 5; i++){
		free(c[i]);
	}

	

    return 0;
}
*/

//es10 trova l’errore1.
/*
void reverseEasy(char *s, char *srev) {
    int length, c;
    char *end = s;
    length = strlen(s);

    for (c = 0; c < length - 1; c++)
        end++;

    for (c = 0; c < length; c++) {
        *srev = *end;
        srev++;
        end--;
    }
	
    *srev = '\0';
}
*/

//es11

void reverse(char *s, char *t) {
    int i = 0, j = 0;
    int cont = 0;

    while (*(s+i) != '\0')
        i++;

    while (i > 0) {
		t[j] = s[i-1];
        j++;
        i--;
        cont++;
    }
	t[j] = '\0';
}
