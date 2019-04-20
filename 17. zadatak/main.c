#include <stdio.h>
#include <stdlib.h>

void main (){

    int n, c1, c2, c3, sum;

    printf("Unesite neki trocifreni broj: ");
    scanf("%d", &n);

    c1 = n%100 ;
    c2 = (n/10)%10 ;
    c3 = (n/100)%10 ;

    sum = c1+c2+c3 ;

    printf("Zbir cifara unetog broja je %d", &sum);

}
