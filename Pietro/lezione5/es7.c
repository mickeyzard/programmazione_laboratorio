#include <stdio.h>
#include <stdlib.h>
#define N 100


int main() {
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
}