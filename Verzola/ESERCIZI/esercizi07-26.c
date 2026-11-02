#include <stdio.h>
//es1 somma
/*
int read_int(void){
	int n;
	do{
	printf("Inserisci numero: \n");
	scanf("%d", &n);
	} while(n<1);
	return n;
}

int main() {
	int n1, n2;
	n1 = read_int();
	n2 = read_int();
	int somma = n1 + n2;
	printf("La somma tra i due numeri è: %d\n", somma);
	return 0;
}
*/


//es2 fibonacci
/*
int read_int(void){
	int n;
	do{
	printf("Inserisci numero: \n");
	scanf("%d", &n);
	} while(n<1);
	return n;
}
int fibonacci(int n){
	int i; //contatore del ciclo for
	int f_i=1,f_prec=1; //valori iniziali F(2)=F(1)=1
	for (i=3;i<=n;i++){ //il ciclo comincia da i=3

	int aux=f_i; //variabile ausiliaria aux
	f_i = f_i + f_prec; //somma ad f_i il valore di f_prec
	f_prec=aux; } //f_prec = f_i prima dell'iterazione
	return f_i;
	
	
}
int main(){
	int n1, n2, fb;
	n1 = read_int();
	fb = fibonacci(n1);
	printf("Successione fibonacci di %d è %d\n", n1, fb);
	return 0;
}
*/

//es3 fattoriale
/*
int read_int(void){
	int n;
	do{
	printf("Inserisci numero: \n");
	scanf("%d", &n);
	} while(n<1);
	return n;
}

int fattoriale(int n){
	int fattoriale = 1;
	int k;
	for (k = 1; k<=n; k++){
	fattoriale = fattoriale * k;
	}
	return fattoriale;
}

int main(){
	int n, ft;
	n = read_int();
	ft = fattoriale(n);
	printf("La fattoriale di %d! è %d\n", n, ft);
	return 0;
}
*/

//es4-5 calcolatrice
/*
double read_n(void){
	double n;
	printf("Inserisci numero: \n");
	scanf("%lf", &n);
	return n;
}
double addizione(double n1, double n2){
	double somma = 0;	
	somma = n1 + n2;
	printf("%lf\n", somma);
	return somma;
}

double sottrazione(double n1, double n2){
	double sottrazione = 0;	
	sottrazione = n1 - n2;
	printf("%lf\n", sottrazione);
	return sottrazione;
}

double moltiplicazione(double n1, double n2){
	double moltiplicazione = 0;	
	moltiplicazione = n1 * n2;
	printf("%lf\n", moltiplicazione);
	return moltiplicazione;
}

double divisione(double n1, double n2){
	double divisione;
	if (n2 == 0){
		printf("Il divisore è nullo\n");
		return 0;
	} else {
		divisione = n1/n2;
	printf("%lf\n", divisione);
		return divisione;
	}
}

int main(){
	int scelta;
	double n1, n2;
	bool selezione;
	bool loop = true;
	while(loop){
	printf("Calcolatrice:\n 0 - Selezione Operandi \n 1 - Addizione \n 2 - Sottrazione \n 3 - Moltiplicazione \n 4 - Divisione \n 5 - Exit\n");
	scanf("%d", &scelta);
		switch (scelta) {
			case 0:
				printf("Selezione operandi\n");
				n1 = read_n();
				n2 = read_n();
				selezione = true;
				break;
			case 1:
				if (selezione == false){
					printf("Prima inserisci gli operandi\n");
					break;				
				} else {
					addizione(n1, n2);
	 				break;
				}
			case 2:
				if (selezione == false){
					printf("Prima inserisci gli operandi\n");
					break;				
				} else {
					sottrazione(n1, n2);
	 				break;
				}
			case 3:
				if (selezione == false){
					printf("Prima inserisci gli operandi\n");
					break;				
				} else {
					moltiplicazione(n1, n2);
	 				break;
				}
			case 4:
				if (selezione == false){
					printf("Prima inserisci gli operandi\n");
					break;				
				} else {
					divisione(n1, n2);
	 				break;
				}
			case 5:
				printf("Programma terminato....\n");
				loop = false;
				break;
			default:
				printf("Non corrisponde a nessuna operazione, riprova.\n");
		}
	}
	
	return 0;
}
*/

/*
//es6 banca con menu di selezione
double read_n(void){
	double n;
	scanf("%lf", &n);
	return n;
}
double deposito_denaro(){	
	double aggiunta = 0;
	printf("Quanto denaro vuoi depositare?: \n");
	double n = read_n();
	if(n<1){
		printf("Devi inserire numeri maggiori di 0\n");
	} else {
		aggiunta = n;
	}
	return aggiunta;
}
double prelievo_denaro(double deposito){
	double prelievo = 0;
	printf("Quanto denaro vuoi prelevare?: \n");
	double n = read_n();
	if(n<1){
		printf("Devi inserire numero maggiore di 0\n");
	}else if(n>deposito){
		printf("Va oltre il tuo saldo corrente\n");
	} else {
		prelievo = n;
	}
	return prelievo;

}
double interesse_conto(double deposito){
	double saldo = 0, tasso = 0.35;
	printf("Quanti anni prevede di lasciare il proprio denaro sul conto: \n");
	double t = read_n();
	if(t<1){
		printf("Devi inserire numeri maggiori di 0\n");
	} else {
		saldo = deposito * t * tasso;
	}
	return saldo;

}
int main(){
	int scelta, n1, n2;
	double aggiunta, prelievo, interesse, saldo, deposito = 200;
	bool selezione;
	bool loop = true;
	while(loop){
	printf("Banca:\n 1 - Visualizza saldo \n 2 - Deposito \n 3 - Prelievo \n 4 - Calcolo interesse \n 5 - Exit\n");
	scanf("%d", &scelta);
		switch (scelta) {
			case 1:
				printf("Saldo corrente: %.2lf$\n", deposito);
				break;				
			case 2:
				aggiunta = deposito_denaro();
				if (aggiunta > 0){
				deposito = deposito + aggiunta;
				printf("%.2lf depositato correttamente..\n", aggiunta); 
				}
	 			break;
			case 3:
				prelievo = prelievo_denaro(deposito);
				if (prelievo > 0){
					printf("%.2lf prelevati correttamente..\n", prelievo); 
					deposito = deposito - prelievo;							
				}
	 			break;
			case 4:
				saldo = 0;
				if (deposito > 0){
					interesse = interesse_conto(deposito);
					saldo  = deposito + interesse; 
					printf("Con un tasso fisso a 0.35, il tuo saldo va a: %.2lf\n", interesse); 
					printf("Quindi tenendo conto degli anni in cui lasci il proprio denaro, il tuo conto matura a: %.2lf\n", saldo );
				} else {
					printf("Non si puo fare l'interesse, hai il conto in negativo\n");
				}
	 			break;
			case 5:
				printf("Programma terminato....\n");
				loop = false;
				break;
			default:
				printf("Non corrisponde a nessuna operazione, riprova.\n");
		}
	}

	return 0;
}
*/

//es7 correggi
/*
double avg(double n1, double n2){
    return (n1 + n2)/2;
}

int main(){
    double n1, n2;
    double result = 0;

    printf("Inserisci i due numeri separati da spazio: ");
    scanf("%lf %lf", &n1, &n2);

    result = avg(n1, n2);
    printf("avg(%lf, %lf)=%lf\n", n1, n2, result);

    return 0;
}
*/

//es8-9 diagonale
/*
#define M 3
#define N 3

	int main(){
	int matrix[M][N] = {
		{10, 20, 30},
		{11, 21, 31},
		{12, 22, 32}
	};

	int i, j;
	int sum = 0;
	*/

	/*
	for (i = 0; i < M; i++){
		for (j = 0; j < N; j++){
			if (i == j){
				sum += matrix[i][j];
			}
	 	}
	}
	*/
	/*
	for (i = 0; i < M; i++) {
    	sum += matrix[i][i];
	}
	printf("La somma: %d\n", sum);

	 return 0;

}
*/

//es10 max e min numeri in una matrice
/*
#define M 3
#define N 3

	int main(){
	int matrix[M][N] = {
		{4, 98, 22},
		{35, 1, 43},
		{86, 67, 72}
	};
	int max = 0, min = 100;
	int colonna_max, riga_max, colonna_min, riga_min ;
	int i, j;
	int sum = 0;
	for (i = 0; i < M; i++){
		for (j = 0; j < N; j++){
			if(matrix[i][j] > max){
				max = matrix[i][j];
				riga_max = i;
				colonna_max = j;
			}
			if(matrix[i][j] < min){
				min = matrix[i][j];
				riga_min = i;
				colonna_min = j;
			}
	 	}
	}

	printf("Il numero massimo della matrice è: %d\nRiga %d - Colonna %d\n", max, riga_max, colonna_max);
	printf("Il numero minimo della matrice è: %d\nRiga %d - Colonna %d\n", min, riga_min, colonna_min);

	return 0;

}
*/

//es11
#define N 3

int main(){
	
	int matrix[N][N] = {
        {1, 3, 3},
        {2, 4, 5},
        {3, 5, 6}
    };
	int i, j;
	int simmetrica = 1;

	for (i = 0; i < N; i++){
		for (j = 0; j < N; j++){
			if(matrix[i][j] != matrix[j][i]){
				simmetrica = 0;
			}
				
		}
		
	}

	if(simmetrica == 1){
		printf("La matrice è simmetrica\n");
	} else {
		printf("La matrice non è simmetrica\n");
	}
	
	return 0;	
}



