#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a, b, c, p;

    printf("Unesite vrednosti za a: ");
    scanf("%d", &a);
    printf("Unesite vrednosti za b: ");
    scanf("%d", &b);
    printf("Unesite vrednosti za c: ");
    scanf("%d", &c);

    p=a;
    a=b;
    b=c;
    c=p;

    printf("Nakon rotacije, vrednosti su: a=%d, b=%d, c=%d", a, b, c);

 }
