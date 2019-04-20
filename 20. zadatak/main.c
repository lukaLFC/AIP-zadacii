#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main (){

    int n, f, f1, f2, i;

    printf("Unesi koji clan Fibonacijevog niza zelis videti: ");
    scanf("%d", &n);

    f1 = 1;
    f2 = 1;

    for(i=3; i<n; i++){

        f=f1+f2;
        f1=f2;
        f2=f;

    }

    printf("%d. clan Fibonacijevog niza je %d", n, f);

}
