#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
