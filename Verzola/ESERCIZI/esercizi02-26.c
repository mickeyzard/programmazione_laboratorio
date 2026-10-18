#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>


int main(void){

	//es1 
	/*
	int a = 214, b = 128;

	printf("Il m.c.d. di %d e %d e': ",a,b);

	while (a != b) 
		if (a > b) 
			a = a-b;
		else 
			b = b-a;
	
	printf("%d\n",a);
	return 0;
	*/

	//es2
	/*
	int a = 0, b = 0;
	printf("Inserisci primo numero: \n");
	scanf("%d", &a);
	printf("Inserisci secondo numero: \n");
	scanf("%d", &b);

	printf("Il m.c.d. di %d e %d e': ",a,b);

	while (a != b) 
		if (a > b) 
			a = a-b;
		else 
			b = b-a;
	
	printf("%d\n",a);
	return 0;
	*/

	//es3
	/*
	int a = 0, b = 0;
	printf("Inserisci primo numero: \n");
	scanf("%d", &a);
	printf("Inserisci secondo numero: \n");
	scanf("%d", &b);

	if (a > 0 && b > 0){
		printf("Il m.c.d. di %d e %d e': ",a,b);

		while (a != b)
			if (a > b) 
				a = a-b;
			else 
				b = b-a;
		
		printf("%d\n",a);
		return 0;
}	else
		printf("Errore! I numeri devono essere maggiori di 0!\n");
		return -1;
	*/

	//es4
	/*
	int a = 0, b = 0;
	int conta = 0;
	printf("Inserisci primo numero: \n");
	scanf("%d", &a);
	printf("Inserisci secondo numero: \n");
	scanf("%d", &b);

	if (a > 0 && b > 0){
		printf("Il m.c.d. di %d e %d e': ",a,b);

		while (a != b)
			if (a > b){ 
				a = a-b;
				conta++;
			} else { 
				b = b-a;
				conta++;
		}
		printf("%d\n",a);
		printf("N di iterazioni: %d\n", conta);
		return 0;
}	else
		printf("Errore! I numeri devono essere maggiori di 0!\n");
		return -1;
	*/
	
	//es5	
	/*
	int n = 0;
    int somma = 0;
	do{
	printf("Inserisci un numero: \n");
	scanf("%d", &n);
	} while(n<=0);
	for (int i = 1; i<=n; i++){
	somma = somma + i;
	}
	int somma_gauss = n * (n + 1) / 2;		
	printf("Somma dei primi n naturali con ciclo for: %d\n", somma);
	printf("Somma dei primi n naturali con la formula di gauss: %d\n", somma_gauss);
	*/
	
	//es6
	/*
	int n = 0;
    int somma = 0;
	do{
	printf("Inserisci un numero: \n");
	scanf("%d", &n);
	} while(n<=0);
	for (int i = 1; i<=n; i++){
	somma = somma + (i*i);
	}
	int somma_gauss = n * (n + 1) * (2*n + 1) / 6;		
	printf("Somma dei primi n quadrati con ciclo for: %d\n", somma);
	printf("Somma dei primi n quadrati con la formula di gauss: %d\n", somma_gauss);
	return 0;
	*/

	//es7
	/*
	int n = 0;
    int somma = 0;
	do{
	printf("Inserisci un numero: \n");
	scanf("%d", &n);
	} while(n<=0);
	for (int i = 1; i<=n; i++){
	somma = somma + (i*i*i);
	}
	int somma_gauss = (n*n) * (n + 1)*(n + 1) / 4;		
	printf("Somma dei primi n cubi con ciclo for: %d\n", somma);
	printf("Somma dei primi n cubi con la formula di gauss: %d\n", somma_gauss);
	
	*/
	
	//es8
	/*
	double a = 0, b = 0, c = 0;
	while(a == 0){
	printf("Inserisci primo numero: \n");
	scanf("%lf", &a);
	};
	printf("Inserisci secondo numero: \n");
	scanf("%lf", &b);
	printf("Inserisci terzo numero: \n");
	scanf("%lf", &c);
	
	//calcolo discriminante
	double delta = (b*b) - 4*a*c;
	printf("La discriminante equivale a: %.2lf\n", delta);
	if(delta > 0){
		printf("Ci sono due soluzioni reali!");
		double formula_ris_positiva = (-b + sqrt(delta)) / 2*a;	
		double formula_ris_negativa = (-b - sqrt(delta)) / 2*a;
		printf("Le due soluzioni sono: \n x1: `%.2lf`,\n x2: `%.2lf`\n", formula_ris_positiva,formula_ris_negativa);
}	else if (delta == 0){
		double formula_ridotta = -b/2*a;
		printf("L'equazione ammette due soluzioni reali e coincidenti: %.2lf\n",formula_ridotta);

} 	else {
	//discriminante negativa
	printf("Non ci sono soluzioni reali.\n");
}
	return 0;
	*/

	//es9
	/*
	char c1;
	printf("Inserisci un carattere: \n");
	c1 = getchar(); getchar();
	if (isalpha(c1) != 0){
	int ris = isupper(c1);
		if (ris != 0){
			printf("Il carattere c è una lettera maiuscola.\n");
		} 
		else {
			printf("Il carattere c è una lettera minuscola.\n");
				}
		}			
	else {
		printf("Il carattere 'c' non è alfabetico.\n");
}
	return 0;
	*/
	
	//es10
	/*
	char c1 = '\0';
	while(1){
	printf("Inserisci un carattere: \n");
	c1 = getchar();
	if (c1 == '\n'){
		printf("Terminato il programma\n");
		break;	
	}	
	getchar();
	if (isalpha(c1) != 0){
	int ris = isupper(c1);
		if (ris != 0){
			printf("Il carattere '%c' è una lettera maiuscola.\n", c1);
		} 
		else {
			printf("Il carattere '%c' è una lettera minuscola.\n", c1);
				}
		}			
	else {
		printf("Il carattere '%c' non è alfabetico.\n", c1);
}
	}
	return 0;
	*/
	
	//es11
	/*
	printf("Inserisci un carattere: \n");
	char c1 = '\0';
	c1 = getchar(); getchar();
	if (isalpha(c1) != 0){
	int ris = isupper(c1);
	int conv = toupper(c1);
	printf("Convertito in maiuscolo: %c\n", conv);		
	} else {
		printf("%c\n", c1);
}
	return 0;
	*/
	
	//es12
	/*
	printf("Inserisci un carattere: \n");
	char c1 = '\0';
	int n = 0;
	c1 = getchar(); getchar();
	if (isalpha(c1) != 0){
		printf("Preferiresti una conversiona in maiuscola o minuscola?:\n1 = maiuscola -- altro numero = minuscola.\n");
		scanf("%d", &n);
		if (n == 1){
			int conv = toupper(c1);
			printf("Convertito in maiuscolo: %c\n", conv);	
		} else {
			int conv = tolower(c1);		
			printf("Convertito in minuscolo: %c\n", conv);	
			}
	} else {
		printf("%c\n", c1);
}
	return 0;
	*/
	
	//es13
	printf("Inserisci un carattere: \n");
	char c1 = '\0';
	int n = 0;
	c1 = getchar(); getchar();
	if (isalpha(c1) != 0){
		printf("Preferiresti una conversiona in maiuscola o minuscola?:\n1 = maiuscola -- altro numero = minuscola.\n");
		scanf("%d", &n);
		if (n == 1){
			int conv = toupper(c1);
			printf("Convertito in maiuscolo: %c\n", conv);	
		} else {
			int conv = tolower(c1);		
			printf("Convertito in minuscolo: %c\n", conv);	
			}
	} else {
		printf("Il carattere inserito non è alfabetico!\n");
		return -1;
}
	return 0;

//finito esercizi miao
	
	
}

