#include <stdio.h>
#include <stdlib.h>
//#define AA 120
//#define BB 60
int main(void){

	//es1-2-3-4
	/*
	double a, b;
	int risp;
	printf("Inserisci primo numero:\n");
	scanf("%lf", &a);
	printf("Inserisci secondo numero:\n");
	scanf("%lf", &b);
	
	do {
		printf("Vuoi eseguire una somma, una sottrazione, una moltiplicazione o una divisione?\n1 = Somma - 2 = Sottrazione - 3 = Moltiplicazione - 4 = Divisione - 0 = Exit\n");
		scanf("%d", &risp);
	switch(risp){
		case 0:
			printf("Terminazione programma....\n");
			risp = 0;
			break;
		case 1:
			double somma = a + b;
			printf("Somma: %lf\n", somma);
			break;
		case 2:
			double sott = a - b;
			printf("Sottrazione: %lf\n", sott);
			break;
		case 3:
			double molt = a * b;
			printf("Moltiplicazione: %lf\n", molt);
			break;
		case 4:
			if (b == 0)	{
				printf("Non puoi dividere per zero!\n");
				break;		
			}
			double div = a / b;
			printf("Divisione: %lf\n", div);
			break;
		default:
			printf("Risposta non valida!\n");
			break;
		}
	} while(risp!=0);

	return 0;
	*/
	
	//es5
	/*
	int i = 0, j = 0;
    int n;
    int flag = 0;

    do {
        printf("Inserisci una cifra massima per calcolare i numeri primi: ");
        scanf("%d", &n);
    } while (n <= 0);

    printf("Numeri primi fino a %d: \n2 \n", n);
    
    for (i = 3; i <= n; i += 2) {
        //printf("cazo\n");
        //printf("%d\n", i);
        flag = 1;
        for (j = 2; j * j <= i; j++){
        //printf("j: %d\n",j);
            if (i % j == 0){
                //printf("Mela\n");
                flag = 0; // Il numero non è primo se è divisibile per i
            }
            
        }
        if (flag) {
            printf("%d\n", i);
        } 

    }

    printf("\n");

    return 0;
	*/		
	
	//es6-7-8-9
	int a;
	int b;
	int aux;
	int conta = 0;
	do {
		printf("Inserisci primo numero:\n");
		scanf("%d", &a);
		printf("Inserisci secondo numero:\n");
		scanf("%d", &b);
		if (a <= 0 || b <= 0) {
			printf("Non inserire numeri uguali o minore di zero!\n");
			return -1;			
			break;		
		}
	} while (a < 0 && b < 0);
	int vA = a;
	int vB = b;
	while(b != 0){
	conta++;
	aux = b;
	b = a % b;
	a = aux;
	}
	printf("Il mcd tra %d e %d è: %d\n", vA, vB, a);
	printf("Il numero di operazioni di divisione effettuate che ha eseguito sono: %d\n", conta);
	
	return 0;
}
