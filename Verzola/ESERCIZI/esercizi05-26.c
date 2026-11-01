#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define N 100


int main() {

	//esercizio 1
	/*

    char s [N+1] = "Pippo";    
    printf("stringa inserita:\n");
    printf("%s\n",s);
    printf("carattere inserito:\n");
    printf("%c\n", 'Z');

    return 0;
	*/

	//esercizio 2
	/*

    char c1, c2;

    printf("Inserisci il primo carattere:\n");
    c1 = getchar();
    getchar(); 
    printf("Inserisci il secondo carattere:\n");
    c2 = getchar();

    printf("\nHai inserito i caratteri: '%c' e '%c'\n", c1, c2);

    return 0;
	*/

	//esercizio 3
	/*

    char s [N+1];

    printf("inserire stringa:\n");
    fgets(s,sizeof(s),stdin);
    
    printf("stringa inserita:\n");
    printf("%s",s);

    return 0;
	*/

	//esercizio 4
	/*

    char s [N+1];
    int i=0;
    printf("inserire stringa:\n");
    fgets(s,sizeof(s),stdin);

    //while(s[i]!='\0'){
    //    i++;
    //}

    for (i=0;s[i] != '\0'; i++);

    //len = sizeof();
    printf("lunghezza stringa inserita:\n");
    printf("%d\n",i);

    return 0;
	*/

	//esercizio 5
	/*

    char s [N+1];
    char c;
    int i=0;
    printf("inserire stringa:\n");
    fgets(s,sizeof(s),stdin);
    printf("inserire carattere:\n");
    scanf("%c", &c);

    //s[strcspn(s, "\n")] = '\0';

    for (i=0;s[i] != '\n'; i++);
    printf("%d\n",i);

    if (s[i-1] == c){
            printf("si'\n");
        } else {
            printf("no\n");
        }

    return 0;
	*/

	//esercizio 6
	/*

    char s [N+1];
    int i=0;
    printf("inserire nome proprio:\n");
    fgets(s,sizeof(s),stdin);


    for (i=0;s[i] != '\n'; i++);
    printf("%d\n",i);

    if (s[i-1] == 'a' || s[i-1] == 'e' ){
            printf("Il nome è femminile'\n");
        } else if ((s[i-1] == 'o' || s[i-1] == 'i' )) {
            printf("il nome è maschile\n");
        } else {
            printf("Non riesco a dedurre\n");
        }

    return 0;
	*/

	//esercizio 7
	/*

    char s [N+1];
    int i;
    printf("inserire stringa:\n");
    fgets(s,sizeof(s),stdin);

    printf("stringa inserita:\n");
    printf("%s",s);
   
    for (i=0;s[i] != '\n'; i++);


    printf("lunghezza stringa inserita:\n");
    printf("%d\n",i);

    return 0;
	*/

	//esercizio 8
	/*

    double d[N];
    double mean = 0;

    printf("inserire 5 double:\n");
    for(int i=0;i<5;i++){
        scanf("%lf",&d[i]);
        mean = mean + d[i];
    }

    mean = mean / N;
    
    printf("media dei 5 double: %lf\n",mean);

    return 0;
	*/

	//esercizio 9
	/*

    int n,a[N];
    double d[N];
    double mean = 0;
    do {
    printf("Inserisci dimensione array: \n");
    scanf("%d",&n);
    }
    while (n>N);


    printf("inserire %d double:\n", n);
    for(int i=0;i<n;i++){
        scanf("%lf",&d[i]);
        mean = mean + d[i];
    }

    mean = mean / n;
    
    printf("media dei %d double: %lf\n", n,mean);

    return 0;
	*/

	//esercizio 10
	/*

    int n,a[N];
    double d[N];
    double mean = 0;
    double media = 0;
    double somma_scarti_quadrati = 0;
    double varianza = 0;
    double deviazione = 0;
    do {
    printf("Inserisci dimensione array: \n");
    scanf("%d",&n);
    }
    while (n>N);


    printf("inserire %d double:\n", n);
    for(int i=0;i<n;i++){
        scanf("%lf",&d[i]);
        mean = mean + d[i];
    }

    media = mean / n;
    
    for (int i = 0; i < n; i++) {
        somma_scarti_quadrati += pow(d[i] - media, 2);
    }
    varianza = somma_scarti_quadrati / n;
    deviazione = sqrt(varianza);

    printf("media dei %d double: %lf\n", n,media);
    printf("varianza: %lf \n", varianza);
    printf("Scarto quadratico medio: %lf\n", deviazione);

    return 0;
	*/

	//esercizio 11
	/*

    int temp;
    bool scambio = true;
    int v[N] = {9, 6, 4, 8, 2};
	
	printf("Pre bubble sort: ");
	for(int i = 0; i < N; i++){
        printf("%d ",v[i]);

    }
    while (scambio == true){
        scambio =false;
        for (int i=0; i<=N-2; i++ )
            if (v[i]>v[i+1]){
                temp = v[i];
                v[i] = v[i+1];
                v[i+1] = temp;
                scambio =true;
            }
	}
	printf("\n");
	printf("Post bubble sort: ");
    for(int i = 0; i < N; i++){
        printf("%d ",v[i]);

    }
	printf("\n");
    return 0;
	*/

	//esercizio 12
	/*

    int temp;
    bool scambio = true;
    int v[N] = {2, 1, 3, 4, 5};
	int conta = 0;
	
	printf("Pre bubble sort: ");
	for(int i = 0; i < N; i++){
        printf("%d ",v[i]);

    }
    while (scambio == true){
        scambio =false;
        for (int i=0; i<=N-2; i++ )
            if (v[i]>v[i+1]){
				conta++;
                temp = v[i];
                v[i] = v[i+1];
                v[i+1] = temp;
                scambio =true;
            }
	}
	printf("\n");
	printf("Post bubble sort: ");
    for(int i = 0; i < N; i++){
        printf("%d ",v[i]);

    }
	printf("\n");
	printf("Numero di scambi: %d\n", conta);
	int numScambi = (N*N)/2;
	printf("Numero quadratico di scambi nella lunghezza dell’input: %d\n", numScambi);
    return 0;
	*/

	//esercizio 13
	/*

    int n;
    double d[N];
    double mean = 0;
    double media = 0;
    double somma_scarti_quadrati = 0;
    double varianza = 0;
    double deviazione = 0;
	bool scambio = true;
	double temp = 0;
	double mediana;
	
    do {
    printf("Inserisci dimensione array: \n");
    scanf("%d",&n);
    } while (n>N);


    printf("inserire %d double:\n", n);
    for(int i=0;i<n;i++){
        scanf("%lf",&d[i]);
        mean = mean + d[i];
    }

	printf("Pre bubble sort: ");
	for(int i = 0; i < n; i++){
        printf("%lf ",d[i]);

    }
	printf("\n");

    media = mean / n;
    
    for (int i = 0; i < n; i++) {
        somma_scarti_quadrati += pow(d[i] - media, 2);
    }
    varianza = somma_scarti_quadrati / n;
    deviazione = sqrt(varianza);
	
	while (scambio == true){
       scambio =false;
       for (int i=0; i<=n-2; i++)
          if (d[i]>d[i+1]){
                temp = d[i];
                d[i] = d[i+1];
                d[i+1] = temp;
                scambio =true;
          }
	}

    printf("media dei %d double: %lf\n", n,media);
    printf("varianza: %lf \n", varianza);
    printf("Scarto quadratico medio: %lf\n", deviazione);
	
	printf("\n");
	printf("Post bubble sort: ");

    for(int i = 0; i < n; i++){
        printf("%lf ",d[i]);

    }
	if (n % 2 == 1){
		mediana = d[n/2];
		printf("La mediana é: %lf\n",mediana);
	} else {
		mediana = (d[n/2 - 1] + d[n/2]) / 2;
		printf("La mediana é: %lf\n",mediana);
	}
    return 0;
	*/

	//esercizio 14
	/*

    char s [N+1];
    int i;
	int somma_lunghezze = 0;
	int numero_stringhe = 0;
	double media;
   	while (fgets(s, sizeof(s), stdin) != NULL && s[0] != '\n') {
    	for (i = 0; s[i] != '\n' && s[i] != '\0'; i++);
		somma_lunghezze += i;
		numero_stringhe++;
	}
	media = (double)somma_lunghezze/numero_stringhe;

    printf("lunghezza media delle stringhe inserite:%lf\n", media);

    return 0;
	*/

	//esercizio 15
	/*

    char s [N+1];
    int i;
	int max = 0;
	int conto;
   	while (fgets(s, sizeof(s), stdin) != NULL && s[0] != '\n') {
    	for (i = 0; s[i] != '\n' && s[i] != '\0'; i++);
		if (i > max){
			max = i;
		}
	}

    printf("lunghezza massima fra le lunghezze delle stringhe inserite: %d\n", max);

    return 0;
	*/

	//esercizio 16
	/*

    char s [N+1];
    char c;
    int i;
	int conto = 0;
	int lunghezza = 0;
    double rapporto;

	printf("Inserisci stringa:\n");
   	fgets(s, sizeof(s), stdin);
	printf("Inserisci carattere da leggere:");
	printf("\n");
    c = getchar();
    getchar();
    for (i = 0; s[i] != '\n' && s[i] != '\0'; i++){
		if (s[i] == c){
			conto++;		
		}
	}
	lunghezza = i;
	rapporto = (double)conto / lunghezza;

    printf("La frequenza del carattere '%c' è: %lf\n",c , rapporto);

    return 0;
	*/

	//esercizio 17
	/*

    char s [N+1];
    char c;
    int i;
	int conto = 0;
	int lunghezza = 0;
    double rapporto;
	bool controllo = true;
	printf("Inserisci stringa:\n");
	fgets(s, sizeof(s), stdin);
	while (controllo) {
	conto = 0;
	printf("Inserisci carattere da leggere:");
	printf("\n");
    c = getchar();
	if (c == '\n'){
		break;
	} else {
		getchar();	
	}
    for (i = 0; s[i] != '\n' && s[i] != '\0'; i++){
		if (s[i] == c){
			conto++;		
		}
	}
	lunghezza = i;
	rapporto = (double)conto / lunghezza;

    printf("La frequenza del carattere '%c' è: %lf\n",c , rapporto);
	}

    return 0;
	*/

	//esercizio 18
	/*

	int i;
	char s[N+1];
	printf("Inserisci stringa:\n");
   	fgets(s, sizeof(s), stdin);
	 for (i = 0; s[i] != '\n' && s[i] != '\0'; i++){
		s[i] = toupper(s[i]);
	}
	printf("stringa inserita in maiuscolo: %s\n", s);
    return 0;
	*/

	//esercizio 19

	int i, j;
	int trovato = 0;
	int lunghezza_s2 = 0;
	char s1[N+1];
	char s2[N+1];
	printf("Inserisci prima stringa:\n");
   	fgets(s1, sizeof(s1), stdin);
	printf("Inserisci seconda stringa:\n");
   	fgets(s2, sizeof(s2), stdin);	
	for (lunghezza_s2 = 0; s2[lunghezza_s2] != '\n' && s2[lunghezza_s2] != '\0'; lunghezza_s2++);
	for (i=0;s1[i]!='\n' && s1[i]!='\0';i++){
		for (j=0;s2[j]!='\0';j++){
			if (s1[i+j]!=s2[j]){
				break;
			}

        }
		if (j == lunghezza_s2) {
            trovato = 1;
            break;
		}	
	}
	if (trovato == 1) {
        printf("si la s2 è una sottostringa\n");
    } else {
        printf("no la s2 non è una sottostringa\n");
    }
    return 0;

}
