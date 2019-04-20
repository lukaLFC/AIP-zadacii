#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n, i, p;

    printf("Unesite do kog broja zelite da izracunate proizvod prvih n prirodnih brojeva: ");
    scanf("%d", &n);

    p=1;

    for(i=2; i<=n; i+2)
    p*=i; //p=p*i

    printf("Proizvod prvih %d parnih prirodnih brojeva je %d", n, p);
}
