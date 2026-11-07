#include <stdlib.h>
#include <stdio.h>

//es1 scambio di interi con puntatori
/*
int main(){

	int n1 = 0, n2 = 1;
	int *px; 
	int *py;
	int *temp;
	
	px = &n1;
	py = &n2;

	printf("Pre-scambio di interi\n");
	printf("puntatore px: %d\n", *px);
	printf("puntatore py: %d\n", *py);
	
	temp = px;
	px = py;
	py = temp;

	printf("Post scambio di interi\n");
	printf("puntatore px: %d\n", *px);
	printf("puntatore py: %d\n", *py);

	return 0;
}
*/

//es2 scambio di stringhe
/*
int main(){
	char s1[] = "Galileo Galilei";
	char s2[] = "Isaac Newton";
	char *p1 = s1;
	char *p2 = s2;
	char *temp;

	printf("Pre-scambio di stringhe\n");
	printf("s1: %s\n", p1);
	printf("s2: %s\n", p2);
	
	temp = p1;
	p1 = p2;
	p2 = temp;
	
	printf("Pre-scambio di stringhe\n");
	printf("s1: %s\n", p1);
	printf("s2: %s\n", p2);

	return 0;
}
*/

//es3 menu della banca con puntatori;
/*
#define DEPOSITO_DEFAULT 200
double read_n(void);
void deposito_denaro(double *deposito);
void prelievo_denaro(double *deposito);
bool interesse_conto(double *deposito, double *interesse);
void menu(void);


////////////////////////////////////
int main(){
	menu();

	return 0;
}
/////////////////////////////////////


double read_n(void){
	double n;
	scanf("%lf", &n);
	return n;
}

void deposito_denaro(double *deposito){	
	printf("Quanto denaro vuoi depositare?: \n");
	double n = read_n();
	if(n<1){
		printf("Devi inserire numeri maggiori di 0\n");
	} else {
		*deposito = *deposito + n;
		printf("%.2lf depositato correttamente..\n", n);
	}
}

void prelievo_denaro(double *deposito){
	printf("Quanto denaro vuoi prelevare?: \n");
	double n = read_n();
	if(n<1){
		printf("Devi inserire numero maggiore di 0\n");
	}else if(n > *deposito){
		printf("Va oltre il tuo saldo corrente\n");
	} else {
		*deposito = *deposito - n;
		printf("%.2lf prelevati correttamente..\n", n); 
	}

}
bool interesse_conto(double *deposito, double *interesse){
	double tasso = 0.035;
	printf("Quanti anni prevede di lasciare il proprio denaro sul conto: \n");
	double t = read_n();
	if(t<1){
		printf("Devi inserire numeri maggiori di 0\n");
		*interesse = 0;
		return false;
	} else {
		*interesse = *deposito * t * tasso;	
		return true;
	}

}
void menu(void){
	int scelta, n1, n2;
	double saldo = 0, interesse, deposito = DEPOSITO_DEFAULT;
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
				deposito_denaro(&deposito);
	 			break;
			case 3:
				prelievo_denaro(&deposito);
	 			break;
			case 4:
				saldo = 0;
				if (deposito > 0){
					interesse = 0;
					if (interesse_conto(&deposito, &interesse)){
						saldo = interesse + deposito;
						printf("Con un tasso fisso a 0.035, il tuo interesse maturato va a: %.2lf\n", interesse); 
						printf("(Saldo ipotetico) Quindi tenendo conto degli anni in cui lasci il proprio denaro, il tuo conto matura a: %.2lf\n", saldo );
					}
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
}
*/

//es4 statistiche su sequenze di numeri
void calcola_stats(float *n){
	float max = 0, min=99999999999, somma = 0;
    do {
        printf("Inserisci un numero:\n");
        scanf("%f", n);
		if (*n == 3.14f){
			break;		
		}
		if (*n>max){
			max = *n;
		}
		if (*n<min){
			min = *n;
		}
		somma += *n;
		printf("Somma: %.2f, min: %.2f, max: %.2f\n", somma, min, max);
    } while (1);
}

int main() {
	float n = 0;
	calcola_stats(&n);
	printf("Fine ciclo....\n");
	return 0;
}



