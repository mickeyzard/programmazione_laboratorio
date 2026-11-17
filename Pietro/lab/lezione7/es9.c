#include <stdio.h>
#define M 3
#define N 3

int main(){
    int matrix[M][N]={
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int i;
    int sum = 0;

    for (i = 0; i < M; i++){
        sum += matrix[i][i];
    }

    printf("La somma degli elementi della diagonale principale è: %d\n", sum);

    return 0;
}