#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//es1 bubble sort con allocazione dinamica
/*
int main(){  
	
	int n;
	double *v;
	int scambio = 1;
	double temp;
	printf("Quanti numeri vuoi inserire: \n");
	scanf("%d", &n);
	v = malloc(n * sizeof(double));
	
	if (v == NULL){
		printf("errore allocazione memoria\n");		
		return -1;	
	}
	for (int i = 0; i < n; i++){
		printf("Inserisci un numero: ");
		scanf("%lf", &v[i]);
	}

	
	
	printf("Pre bubble sort: ");
	for(int i = 0; i < n; i++){
        printf("%lf ",v[i]);

    }
    while (scambio == 1){
        scambio = 0;
        for (int i=0; i<=n-2; i++ )
            if (v[i]>v[i+1]){
                temp = v[i];
                v[i] = v[i+1];
                v[i+1] = temp;
                scambio = 1;
            }
	}
	printf("\n");
	printf("Post bubble sort: ");
    for(int i = 0; i < n; i++){
        printf("%lf ",v[i]);

    }
	printf("\n");
	free(v);

    return 0;

}
*/

//es2 ordinamento BubbleSort con allocazione dinamica, menu, e funzioni
/*
int inserisci_valori(double **v){
	int n;
	printf("Quanti numeri vuoi inserire: \n");
	scanf("%d", &n);
	*v = malloc(n * sizeof(double));
	if (*v == NULL){
		printf("errore allocazione memoria\n");		
		return -1;	
	}
	for (int i = 0; i < n; i++){
		printf("Inserisci un numero: ");
		scanf("%lf", &(*v)[i]);
	}
	return n;
}
void ordina_elenco(int n, double *v){
  	int scambio = 1;
	double temp;
	while (scambio == 1){
        scambio = 0;
        for (int i=0; i<n-1; i++ )
            if (v[i]>v[i+1]){
                temp = v[i];
                v[i] = v[i+1];
                v[i+1] = temp;
                scambio = 1;
            }
	}


}

void visualizza_elenco(int n, double *v){
	for(int i = 0; i < n; i++){
        printf("%lf ",v[i]);

    }
}
int main(){  
	double *v = NULL;
	int n = 0;
	int scelta;
	do {
    printf("\n--- MENU ---\n");
    printf("1. Inserisci elenco di double\n");
    printf("2. Ordina elenco\n");
    printf("3. Visualizza elenco\n");
    printf("4. Termina\n");
    scanf("%d", &scelta);

    switch (scelta) {

        case 1:
			free(v);
			v= NULL;
            n = inserisci_valori(&v);

            break;

        case 2:
            if (n <= 0 || v == NULL){
				printf("devi prima inserire dei dati.\n");
			} else {
				ordina_elenco(n, v);
				printf("elenco ordinato!\n");
			}

            break;

        case 3:
             if (n <= 0 || v == NULL){
				printf("devi prima inserire dei dati.\n");
			} else {
				visualizza_elenco(n, v);
				printf("elenco visualizzato!\n");
			}

            break;

        case 4:
            free(v);
            break;

        default:
            printf("Scelta non valida.\n");
    }

} while (scelta != 4);
	return 0;
}
*/
//es3 ordinamento bubble sort con menu, e riallocazione dinamica della memoria
/*
int inserisci_valori(double **v){
	int n;
	printf("Quanti numeri vuoi inserire: \n");
	scanf("%d", &n);
	*v = malloc(n * sizeof(double));
	if (*v == NULL){
		printf("errore allocazione memoria\n");		
		return -1;	
	}
	for (int i = 0; i < n; i++){
		printf("Inserisci un numero: ");
		scanf("%lf", &(*v)[i]);
	}
	return n;
}
void ordina_elenco(int n, double *v){
  	int scambio = 1;
	double temp;
	while (scambio == 1){
        scambio = 0;
        for (int i=0; i<n-1; i++ )
            if (v[i]>v[i+1]){
                temp = v[i];
                v[i] = v[i+1];
                v[i+1] = temp;
                scambio = 1;
            }
	}


}

void visualizza_elenco(int n, double *v){
	for(int i = 0; i < n; i++){
        printf("%lf ",v[i]);

    }
}

int aggiungi_elementi(double **v, int n){
	double *temp;
	int nuovi;
	printf("Quanti numeri vuoi aggiungere? ");
	scanf("%d", &nuovi);
	int nuova_dimensione = n + nuovi;
	temp = realloc(*v, nuova_dimensione * sizeof(double));

	if (temp == NULL){
		printf("Errore di allocazione");	
	} else {
		*v = temp;
	}

	for (int i = n; i < nuova_dimensione; i++){
		printf("Inserisci nuovo elemento: ");
		scanf("%lf", &(*v)[i]);
	}
	return nuova_dimensione;
}
int main(){  
	double *v = NULL;
	int n = 0;
	int scelta;
	do {
    printf("\n--- MENU ---\n");
    printf("1. Inserisci elenco di double\n");
    printf("2. Ordina elenco\n");
    printf("3. Visualizza elenco\n");
	printf("4. Aggiungi elementi\n");
    printf("5. Termina\n");
    scanf("%d", &scelta);

    switch (scelta) {

        case 1:
			free(v);
			v= NULL;
            n = inserisci_valori(&v);

            break;

        case 2:
            if (n <= 0 || v == NULL){
				printf("devi prima inserire dei dati.\n");
			} else {
				ordina_elenco(n, v);
				printf("elenco ordinato!\n");
			}

            break;

        case 3:
             if (n <= 0 || v == NULL){
				printf("devi prima inserire dei dati.\n");
			} else {
				visualizza_elenco(n, v);
				printf("elenco visualizzato!\n");
			}

            break;
		case 4:
			if (n <= 0 || v == NULL){
				printf("devi prima inserire dei dati.\n");
			} else {
				n = aggiungi_elementi(&v, n);
				printf("elenco ordinato!\n");
			}
			break;
        case 5:
            free(v);
            break;

        default:
            printf("Scelta non valida.\n");
    }

} while (scelta != 5);
	return 0;
}
*/

//es 4 unire e dividere due array con allocazione dinamica
/*
#define N 100
int merge_array(int **s, int *v, int *n, int n1, int n2, int *dimensione){
	*dimensione = n1 + n2;
	*s = malloc(*dimensione * sizeof(int));
	if (*s == NULL){
		printf("errore allocazione memoria\n");		
		return -1;	
		}
	for (int i = 0; i < n1; i++) {
	    (*s)[i] = v[i];
	}
	for (int i = n1; i < *dimensione; i++) {
	    (*s)[i] = n[i-n1];
	}
	
	for(int i = 0; i < *dimensione; i++){
        printf("%d ",(*s)[i]);

    }
	printf("\n");
	return 0;
}
int main(){
	int v[N];
	int n[N]; // non serve malloc, perche devo assegnarli staticamente con una costante attraverso DEFINE
	int *s;
	int n1, n2, NUM;
	int dimensione;
	printf("Quanti numeri vuoi inserire per il primo array: \n");
	scanf("%d", &NUM);
	n1 = NUM;
	for (int i = 0; i < NUM; i++){
		printf("Inserisci un numero: ");
		scanf("%d", &v[i]);
	}
	if (NUM < 0 || NUM > N) {
    	printf("Dimensione non valida\n");
    	return -1;
	}
	printf("Quanti numeri vuoi inserire per il secondo array: \n");
	scanf("%d", &NUM);
	n2 = NUM;
	for (int i = 0; i < NUM; i++){
		printf("Inserisci un numero: ");
		scanf("%d", &n[i]);
	}
	if (NUM < 0 || NUM > N) {
    	printf("Dimensione non valida\n");
    	return -1;
	}
	
	merge_array(&s, v, n, n1, n2, &dimensione);
	free(s);

	return 0;
}
*/
//es5 leggere una frase e creare una struttura dati per contenerla.
/*
#define N 20
int main(){
	char *c[N];
	char parola[100];
	int n;
	printf("Quante parole vuoi inserire: \n");
	scanf("%d", &n);
	if (n < 0 || n > N){
		printf("Numero non valido\n");
		return -1;	
	}

	getchar();
	for(int i = 0; i < n; i++){
		printf("inserisci parola: ");
		fgets(parola, sizeof(parola), stdin);
		parola[strcspn(parola, "\n")] = '\0';
		size_t len = strlen(parola);
		c[i] = malloc((len + 1) * sizeof(char));
		strcpy(c[i], parola);
	}
	for(int i = 0; i < n; i++){
		printf("%s ", c[i]);
	}
	printf("\n");
	for(int i = 0; i < n; i++){
		free(c[i]);
	}
	return 0;


}
*/

//es 6 scrivere il contenuto di un array su file.
/*
int main(int argc, char *argv[]){
	FILE * file_w;
	char dst[BUFSIZ];
	int n;
	double *v;
	if(argc < 2){
		fprintf(stderr, "inserire nome del file\n");
		return -1;
	}
	printf("quanti valori vuoi inserire: ");
	scanf("%d", &n);
	v = malloc(n * sizeof(double));
	if (v == NULL){
		fprintf(stderr, "errore allocazione memoria\n");
		return -1;
	}
	for (int i = 0; i < n; i++){
		printf("inserisci valore %d: ", i+1);
		scanf("%lf", &v[i]);
	
	}
	file_w = fopen(argv[1], "w");
	if (file_w == NULL){
		fprintf(stderr, "errore apertura file\n");
		free(v);
		return -1;
	}
	for (int i = 0; i < n; i++) {
    	fprintf(file_w, "%lf\n", v[i]);
	}

	fclose(file_w);
	free(v);


	return 0;	
}
*/

//es 7 leggere il contenuto di un array da file 
/*
#define N 100
int main(int argc, char *argv[]){
	
	FILE * file_r;
	int n = 0;
	double v[N], x;
	if(argc < 2){
		fprintf(stderr, "inserire nome del file\n");
		return -1;
	}
	file_r = fopen(argv[1], "r");
	if (file_r == NULL){
		fprintf(stderr, "errore apertura file\n");
		return -1;
	}
	while(fscanf(file_r, "%lf", &x) == 1){
		if(n >= N){
			printf("array pieno\n");
			fclose(file_r);
			return -1;		
		}
		v[n] = x;
		n++;
	}
	for(int i = 0; i < n; i++){
		printf("%lf\n", v[i]);
	}
	fclose(file_r);


	return 0;

}
*/
//es 8  leggere il contenuto di un array da file con allocazione dinamica della memoria per l'array
#define N 100
int main(int argc, char *argv[]){
	
	FILE * file_r;
	int n = 0;
	double *v, x;
	if(argc < 2){
		fprintf(stderr, "inserire nome del file\n");
		return -1;
	}
	file_r = fopen(argv[1], "r");
	if (file_r == NULL){
		fprintf(stderr, "errore apertura file\n");
		return -1;
	}
	while(fscanf(file_r, "%lf", &x) == 1){
		if(n >= N){
			printf("array pieno\n");
			fclose(file_r);
			return -1;		
		}
		n++;
	}
	v = malloc(n*sizeof(double));
	if (v == NULL){
		fprintf(stderr, "errore allocazione memoria\n");
		fclose(file_r);
		return -1;
	
	}
	rewind(file_r);
	n = 0;
	while(fscanf(file_r, "%lf", &x) == 1){
		v[n] = x;
		n++;
	}
	for(int i = 0; i < n; i++){
		printf("%.2lf\n", v[i]);
	}
	fclose(file_r);
	free(v);


	return 0;

}
