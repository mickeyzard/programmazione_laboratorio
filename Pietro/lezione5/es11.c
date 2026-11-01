#include <stdio.h>
#include <stdlib.h>
#define N 5


int main() {
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
}
