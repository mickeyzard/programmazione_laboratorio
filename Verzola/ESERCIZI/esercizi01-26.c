#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
int main (){
    
    //es1
    printf("Ciao Mondo\n");
    printf("\n");

    //es2
    printf("Ciao\nMondo\n");
    printf("\n");


    //es3
    printf("Lun\t 10.30\t Programmazione 1\n");     
    printf("Mar\t 14.00\t Algebra\n");
    printf("Mer\t 8.30\t Geometria\n"); 
    printf("\n");


    //es4
    printf("(Scritto in ottale):\103\151\141\157\n");
    printf("\n");
    printf("(Scritto in esadecimale):\x43\x69\x61\x6f\n");
    printf("\n");

    
    //es5
    printf("char_max: %d\n", CHAR_MAX);
    printf("char_min: %d\n", CHAR_MIN);
    printf("int_max: %d\n", INT_MAX);
    printf("int_min: %d\n", INT_MIN);
    printf("\n");


    //es6
    printf("float_max: %g\n", FLT_MAX);
    printf("float_min: %g\n", FLT_MIN);
    printf("double_max: %g\n", DBL_MAX);
    printf("double_min: %g\n", DBL_MIN);
    printf("\n");


    //es7
    int num = INT_MAX;
    printf("num: %d\n", num);
    num++;
    printf("num + 1: %d\n", num);
    printf("\n");


    //es8
    float num2 = FLT_MIN;
    printf("num2: %g\n", num2);
    num2 = num2 / FLT_MAX;
    printf("num2 / FLT_MAX: %g\n", num2);


    //es9
    double num3 = 0;
    /*
    printf("Inserisci un numero intero: ");
    scanf("%d", &num);
    printf("Inserisci un numero double: ");
    scanf("%lf", &num3);
    printf("Il numero intero inserito è: %d\n", num);
    printf("Il numero double inserito è: %lf\n", num3);
    printf("\n");
    */


    //es10
     int num4 = 0;;
    /*
    printf("operazioni con numeri interi\n");
    printf("Inserisci primo numero: ");
    scanf("%d", &num);
    printf("Inserisci secondo numero: ");
    scanf("%d", &num4);
    printf("Somma: %d\n", num + num4);
    printf("differenza: %d\n", num - num4);
    printf("prodotto: %d\n", num * num4);
    printf("quoziente: %d\n", num / num4);
    printf("modulo/resto: %d\n", num % num4);
    printf("\n");
    */
    
    
    //es11
    double num5 = 0;;
    printf("operazioni con numeri double\n");
    printf("Inserisci primo numero:");
    scanf("%lf", &num3);
    printf("Inserisci secondo numero:");
    scanf("%lf", &num5);
    printf("Somma: %lf\n", num3 + num5);
    printf("differenza: %lf\n", num3 - num5);
    printf("prodotto: %lf\n", num3 * num5);
    printf("quoziente: %lf\n", num3 / num5);
    printf("\n");
    //miao
}