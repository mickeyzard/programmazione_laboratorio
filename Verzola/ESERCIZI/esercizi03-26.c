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
	/*
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
	*/
	
	//es10
	/*
	int n; //il programma calcola F(n)

	do {
		printf("Inserisci un intero positivo: ");
		scanf("%d",&n);
	} while ( (n<=0) ); //sono ammessi solo interi positivi
	printf("F(%d)=",n);
	int i; //contatore del ciclo for
	int f_i=1,f_prec=1; //valori iniziali F(2)=F(1)=1
	for (i=3;i<=n;i++) //il ciclo comincia da i=3
	{
	int aux=f_i; //variabile ausiliaria aux
	f_i = f_i + f_prec; //somma ad f_i il valore di f_prec
	f_prec=aux; //f_prec = f_i prima dell'iterazione
	}
	printf("%d\n",f_i);
	return 0;
	*/
	
	//es11 proposizione di Lamè
	/*
	int n; 
	int conta = 0;
	int f_i=1,f_prec=1;

	do {
		printf("Inserisci un intero positivo: ");
		scanf("%d",&n);
	} while (n<=0); 

	int i;
	for (i=3;i<=n+2;i++) 
	{
	int aux=f_i; 
	f_i = f_i + f_prec; 
	f_prec=aux;
	}
	
	int a = f_i;
	int b = f_prec;

	while(b != 0){
		conta++;
		int aux = b;
		b = a % b;
		a = aux;
	}

	printf("F(%d) = %d\n", n + 2, f_i);
	printf("F(%d) = %d\n", n + 1, f_prec);
	printf("Numero di divisioni: %d\n", conta);

	if (conta == n) {
    printf("La proposizione di Lame è verificata.\n");
	} else {
    printf("La proposizione di Lame non è verificata.\n");
	}
	return 0;
	*/
	
	//es12-13 signor Pignolino
	int traccia_risp = 0;
	int uscito;
	int giardino;
	int caffe;
	int ombrello;
	char risp = '\0';
	printf("Sei uscito?\n");
	scanf(" %c", &risp);
	while (risp != 'S' && risp != 'N') {
		printf("Carattere inserito non è valido!\n");
		printf("Sei uscito?\n");
		scanf(" %c", &risp);
	}
	// per tenere traccia delle risposte con variabili intere come chiesto nell'esercizio.
	if (risp == 'S') {
    uscito = 1;
	} else {
		uscito = 0;
	}
	if (risp == 'N') {
		printf("Il signor Pignolino oggi non e' uscito.\n");

	} else if (risp == 'S') {
		printf("Ti sei recato al giardino?\n");
		scanf(" %c", &risp);
		while (risp != 'S' && risp != 'N') {
			printf("Carattere inserito non è valido!\n");
			printf("Ti sei recato al giardino?\n");
			scanf(" %c", &risp);
		}

		 if (risp == 'S') {
		    giardino = 1;
		} else {
		    giardino = 0;
		}

		if (risp == 'N') {
		    printf("Ti sei recato al Caffe?\n");
		    scanf(" %c", &risp);
			while (risp != 'S' && risp != 'N') {
				printf("Carattere inserito non è valido!\n");
				printf("Ti sei recato al Caffe?\n");
		    	scanf(" %c", &risp);
			}

			 if (risp == 'S') {
				caffe = 1;
			} else {
				caffe = 0;
			}

		    if (risp == 'N') {
		        printf("Allora sei dalla signora Precisina. Hai portato un ombrello?.\n");
		        scanf(" %c", &risp);
				while (risp != 'S' && risp != 'N') {
					printf("Carattere inserito non è valido!\n");
					printf("Allora sei dalla signora Precisina. Hai portato un ombrello?.\n");
		        	scanf(" %c", &risp);
				}

            	if (risp == 'S') {
                	ombrello = 1;
            	} else {
                	ombrello = 0;
            	}

		        if (risp == 'N') {
		            printf("Il signor Pignolino oggi e' uscito per recarsi dalla signora Precisina. Ha portato con se' un parasole.\n");
		        } else if (risp == 'S') {
		            printf("Il signor Pignolino oggi e' uscito per recarsi dalla signora Precisina. Ha portato con se' un ombrello.\n");
		        }
		    } else if (risp == 'S') {
		        printf("Il signor Pignolino oggi e' uscito per recarsi al Caffe'. Ha portato con se' il suo diario.\n");
		    }
		} else if (risp == 'S') {
		    printf("Il signor Pignolino oggi e' uscito per recarsi ai giardini pubblici. Ha portato con se' un libro.\n");
		}
	}
	printf("Risposte memorizzate:\n");
	printf("Uscito: %d\n", uscito);
	printf("Giardino: %d\n", giardino);
	printf("Caffe: %d\n", caffe);
	printf("Ombrello: %d\n", ombrello);

	return 0;
}
