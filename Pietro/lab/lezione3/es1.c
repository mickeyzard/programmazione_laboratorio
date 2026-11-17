#include <stdio.h>
#include <stdlib.h> 
#define N 23
#define TENTATIVI 5
/*
scrivere un programma che chiede all'utente di indovinare in un numero prefissato di tentativi un valore intero deciso a compile time.
il programma avvisa l'utente se il numero da trovare è maggiore o minore del tentativo
*/

int main(){
    int guess;
    printf("indovina il valore, hai %d tentativi", TENTATIVI);
    int i = TENTATIVI;
    bool found = false;
    do {
        printf("inserisci il valore della tua stima\n: ");
        scanf("%d", &guess);
        if (guess > N){
            printf("valore troppo alto\n");
            i--;
        }else if (guess < N){
            printf("valore troppo basso\n");
            i--;
        }else{
            printf("hai indovinato\n");
            found = true;
        }
    } while (i > 0 && !found);
    if (!found)
        printf("hai finito i tentativi\n");
        

    return 0;
} 