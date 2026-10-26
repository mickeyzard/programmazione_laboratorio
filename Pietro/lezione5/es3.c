#include <stdio.h>
#include <stdlib.h>
#define N 100


int main() {
    char s [N+1];

    printf("inserire stringa:\n");
    fgets(s,sizeof(s),stdin);
    
    printf("stringa inserita:\n");
    printf("%s",s);

    return 0;
}