#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//PARTE 1

//es 1 lunghezza di una stringa: implementazione ricorsiva.
/*
#define N 100
int lung (char *s){
	if (s == NULL){
		printf("puntatore nullo\n");
		return -1;	
	}
	if (s[0] == '\0'){
		return 0;	
	}
	return 1 + lung(s + 1);
	
}

int main(int argc, char *argv[]){
	
	char *s;
	s = malloc(N *sizeof(char));
	printf("inserisci parola: ");
	fgets(s, N, stdin);
	s[strcspn(s, "\n")] = '\0';
	int risultato = lung(s);
	printf("lunghezza della stringa è %d\n", risultato);
	free(s);
	return 0;
}
*/

//es 2 occorrenze di un carattere in una stringa: implementazione ricorsiva
/*
#define N 100
int occ(char *s, char c){
	if (s == NULL){
		printf("puntatore nullo\n");
		return -1;	
	}
	if (s[0] == '\0'){
		return 0;	
	}
	if (s[0] == c){
		return 1 + occ(s + 1, c);
	} else {
		return occ(s + 1, c);
	}
}

int main(int argc, char *argv[]){
	char c;
	char *s;
	s = malloc(N *sizeof(char));
	printf("inserisci parola: ");
	fgets(s, N, stdin);
	s[strcspn(s, "\n")] = '\0';
	printf("inserisci carattere: ");
	scanf(" %c", &c);
	int risultato = occ(s, c);
	printf("numero occorrenze della lettera %c è %d\n", c, risultato);
	free(s);
	return 0;
}
*/

//es 3 numeri di Catalan
/*
int catalan(int n){
	if (n == 0){
		return 1;	
	}
	
	return (2 * (2 * n - 1) * catalan(n-1))/ (n + 1);
	
}
int main(int argc, char *argv[]){
	int n;
	do {
	printf("inserisci numero intero maggiore o uguale a 0: ");
	scanf("%d", &n);
	} while (n <= 0);
	int risultato = catalan(n);
	printf("C(%d) = %d\n", n, risultato);
	return 0;
}
*/

//es 4 tabulazione dei numeri di Catalan
/*
int catalan(int n){
	if (n == 0){
		return 1;	
	}
	
	return (2 * (2 * n - 1) * catalan(n-1))/ (n + 1);
	
}
int main(int argc, char *argv[]){
	int n, i = 0;
	do {
	printf("inserisci numero intero maggiore o uguale a 0: ");
	scanf("%d", &n);
	} while (n <= 0);
	do {
	int risultato = catalan(i);
	printf("C(%d) = %d\n", i, risultato);
	i++;
	} while (i <= n);
	return 0;
}
*/

//es 5 numeri di Delannoy
/*
int delannoy(int n, int m){
	if (n == 0 || m == 0){
		return 1;	
	}
	
	return delannoy(n - 1, m) + delannoy(n, m -1) + delannoy(n - 1, m - 1);
	
}
int main(int argc, char *argv[]){
	int n, m;
	do {
	printf("inserisci primo numero intero maggiore di 0: ");
	scanf("%d", &n);
	} while (n <= 0);
	do {
	printf("inserisci secondo numero intero maggiore di 0: ");
	scanf("%d", &m);
	} while (m <= 0);

	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			int risultato = delannoy(i, j);
			printf("%d\t", risultato);
		}
		printf("\n");
	}
	return 0;
}
*/

//es 7 numeri di Bell
/*
int fattoriale(int n){
	if (n == 0){
		return 1;	
	}	
	
	return n * fattoriale(n - 1);
}

int cobinomiale(int n, int k){
	if (n == 0 || k == n){
		return 1;	
	}
	return fattoriale(n) / (fattoriale(k)*fattoriale(n-k));
}

int bell(int n) {
	if(n == 0){
		return 1;
	}
	int somma = 0;
	for(int k = 0; k < n; k++){
		somma += cobinomiale(n-1, k) * bell(k);
	
	}
	return somma;
		
}
int main(int argc, char *argv[]){
	int n;
	do {
	printf("inserisci numero intero maggiore o uguale a 0: ");
	scanf("%d", &n);
	} while (n < 0);
	int risultato = bell(n);
	printf("B(%d)= %d\n", n, risultato);
	return 0;
}
*/

//es 8 successioni maschio - femmina di Hofstadter
int sequenza_M(int n);
int sequenza_F(int n);
int sequenza_M(int n){
	if(n == 0){
		return 0;
	}
	return n - sequenza_F(sequenza_M(n-1));
}

int sequenza_F(int n){
	if(n == 0){
		return 1;
	}
	return n - sequenza_M(sequenza_F(n-1));
}

int main(int argc, char *argv[]){
	int n;
	do {
	printf("inserisci numero intero maggiore o uguale a 0: ");
	scanf("%d", &n);
	} while (n < 0);
	printf("n\tF(n)\tM(n)\n");
	for(int i = 0; i <= n; i++){
		int ris1 = sequenza_F(i);
		int ris2 = sequenza_M(i);
		printf("%d\t%d\t%d\n", i, ris1, ris2);
	}
	return 0;
}

//FINE PARTE 1 SU RICORSIONE

//PARTE 2
