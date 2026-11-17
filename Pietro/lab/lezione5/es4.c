#include <stdio.h>
#include <stdlib.h>
#define N 100


int main() {
    char s [N+1];
    int i=0;
    printf("inserire stringa:\n");
    fgets(s,sizeof(s),stdin);

    /*while(s[i]!='\0'){
        i++;
    }*/

    for (i=0;s[i] != '\0'; i++);

    //len = sizeof();
    printf("lunghezza stringa inserita:\n");
    printf("%d\n",i);

    return 0;
}