#include <stdio.h>
#include <stdlib.h>
#define N 9


int main() {
    //int v[N];
    int temp;
    bool scambio = true;
    
    int v[N] = {9,8,7,6,5,4,3,2,1};
    while (scambio == true)
        scambio=false;
        for (int i=0; i<=N-2; i++ )
            if (v[i]>v[i+1]){
                temp = v[i+1];
                v[i+1] = v[i];
                v[i] = temp;
                scambio=true;
            }
    for(int i = 0; i < N; i++){
        printf("%d ",v[i]);

    }
    return 0;
}