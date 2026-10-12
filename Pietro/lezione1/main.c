#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main () {
    float rendita = 250;
    printf("la rendita è di %.2f euro\n", rendita*7.45);



    //es 7
    int num = INT_MAX;
    printf("int_max= %d\n", num);
    num = num + 1;
    printf("int_max+1= %d\n", num);

    //es8
    float num2 = FLT_MIN;
    printf("float_min= %e\n", num2);
    num2 = num2 / FLT_MAX;
    printf("flotat_min/float_max= %e\n", num2);

    return 0;
}