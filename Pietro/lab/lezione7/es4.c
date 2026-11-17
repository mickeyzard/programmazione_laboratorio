#include <stdio.h>
#include <stdlib.h>

char scan(int *a, int* b);
int sum(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float divide(int a, int b);

int main(void){
    int a;
    int b;
    char opt;


    opt=scan(&a, &b);

    do{
        switch(opt){
            case '1':
                printf("la somma e': %d\n",sum(a,b));
                break;
            case '2':
                printf("la sottrazione e': %d\n",sub(a,b));
                break;
            case '3':
                printf("la moltiplicazione e': %d\n",mul(a,b));
                break;
            case '4':
                if(b==0){
                    printf("divisore non valido\n");
                    break;
                }else{
                    printf("la divisione e': %.2f\n",divide(a,b));
                }
                break;
        }
        opt = scan(&a, &b);

    }while(opt!='5');

    return 0;
}

int sum(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int mul(int a, int b){
    return a*b;
}

float divide(int a, int b){
    return (float)a/b;
}





char scan(int *a, int*b){
    char opt;

    printf("BENVENUTO NELLA CALC\n");
    printf("inserire due numeri separati da spazio\n");
    scanf("%d %d",a,b);

    printf("SELEZIONA L'OPERAZIONE DA ESEGUIRE\n");
    printf(" 1) addizione\n 2) sottrazione\n 3) moltiplicazione\n 4) divisione\n 5) esci\n");
    scanf(" %c",&opt);
    
    return opt;
}