#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
#define N 100


int main() {
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
}