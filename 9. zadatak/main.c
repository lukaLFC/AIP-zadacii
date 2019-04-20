#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n, i, sum;

    printf("Unesite do kog broja zelite da program izracuna sumu: ");
    scanf("%d", n);

    sum=0;

    for(i=1; i<=n; i++){

        sum+=i;
    }
    printf("Suma prvih %d prirodnih brojeva je %d", n, sum);

 }
