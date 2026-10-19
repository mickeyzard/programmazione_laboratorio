#include <stdio.h>
//es 5
int main() {
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
}