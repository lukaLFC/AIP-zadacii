#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a, b, c, p, k, i;

    printf("Unesite vrednost prvog broja: ");
    scanf("%d", &a);
    printf("Unesite vrednost drugog broja: ");
    scanf("%d", &b);
    printf("Unesite vrednost treceg broja: ");
    scanf("%d", &c);
    printf("Za koliko mesta ulevo zelite da pomerite niz?: ");
    scanf("%d", &k);

    printf("Vrednosti pre pomeranja su: a=%d, b=%d, c=%d \n", a, b, c);

    for(i=0; i<k; i++){

        p=a;
        a=b;
        b=c;
        c=p;
    }

    printf("Vrednosti nakon pomeranja su: a=%d, b=%d, c=%d", a, b, c);

 }
