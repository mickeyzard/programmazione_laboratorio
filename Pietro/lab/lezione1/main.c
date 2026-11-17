#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <math.h>

int main () {
    float rendita = 250;
    printf("la rendita è di %.2f euro\n", rendita*7.45);



    // negro
    //es 7
    int num = INT_MAX;
    printf("int_max= %d\n", num);
    num = num + 1;
    printf("int_max+1= %d\n", num);

    //es8return 0;
    float num2 = FLT_MIN;
    printf("float_min= %e\n", num2);
    num2 = num2 / FLT_MAX;
    printf("flotat_min/float_max= %e\n", num2);

    //es8
    int i;
    float f;
    double d;

    printf("inserire un int, un float e un double: ");
    scanf("%d %f %lf", &i, &f, &d);
    printf("int: %d, float: %.2f, double: %.2lf\n", i, f, d);

    //es10
    int a;
    int b;
    int c;

    printf("inserire due interi: ");
    scanf("%d %d", &a, &b);
    c = a + b;
    printf("la somma è: %d\n", c);
    c = a - b;
    printf("la differenza è: %d\n", c);
    c = a * b;
    printf("il prodotto è: %d\n", c);
    c = a / b;
    printf("il quoziente è: %d\n", c);
    c= a % b;
    printf("il resto è: %d\n", c);

    printf("es11\n");
    double x;
    double y;
    double z;

    printf("inserire due interi: ");
    scanf("%lf %lf", &x, &y);
    z = x + y;
    printf("la somma è: %.2lf\n", z);
    z = x - y;
    printf("la differenza è: %.2lf\n", z);
    z = x * y;
    printf("il prodotto è: %.2lf\n", z);
    z = x / y;
    printf("il quoziente è: %.2lf\n", z);
    z = fmod(x, y);
    printf("il resto è: %.2lf\n", z);

    return 0;
}