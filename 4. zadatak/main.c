#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a, b, c;

    printf("Unesite vrednosti za a: \n");
    scanf("%d", &a);
    printf("Unesite vrednosti za b: \n");
    scanf("%d", &b);

    c=a;
    a=b;
    b=c;

    printf("Nakon zamene mesta, a=%d, b=%d", a, b);

 }
