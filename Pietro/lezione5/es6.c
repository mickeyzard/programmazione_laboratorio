#include <stdio.h>
#include <stdlib.h>
#define N 100


int main() {
    char s [N+1];
    int i=0;
    printf("inserire nome proprio:\n");
    fgets(s,sizeof(s),stdin);


    for (i=0;s[i] != '\n'; i++);
    printf("%d\n",i);

    if (s[i-1] == 'a' || s[i-1] == 'e' ){
            printf("Il nome è femminile'\n");
        } else if ((s[i-1] == 'o' || s[i-1] == 'i' )) {
            printf("il nome è maschile\n");
        } else {
            printf("Non riesco a dedurre\n");
        }

    return 0;
}