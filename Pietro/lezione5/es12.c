#include <stdio.h>
#include <stdlib.h>
#define N 5


int main() {
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
}
