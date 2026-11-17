#include <stdio.h>

int main() {
    char c1, c2;

    printf("Inserisci il primo carattere:\n");
    c1 = getchar();
    getchar(); 
    printf("Inserisci il secondo carattere:\n");
    c2 = getchar();

    printf("\nHai inserito i caratteri: '%c' e '%c'\n", c1, c2);

    return 0;
}
