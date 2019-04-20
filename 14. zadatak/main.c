#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int n, i;

    printf("Unesite broj: \n");
    scanf("%d", &n);

    i=2;

    while(n%i!=0 && i<=sqrt(n))
        i++;

    if(n%i==0)
        printf("Broj nije prost");
    else
        printf("Broj je prost");

}
