#include <stdio.h>
#include <stdlib.h>

void main()
{
   int n, c, sum, br_cif, i;

    printf("Unesite neki broj: ");
    scanf("%d", &n);

    sum = 0;
    br_cif = 0;

    while(n>0){
        c = n%10 ;
        sum += c ;
        n = n/10 ;
        br_cif++ ;
   }

   printf("Broj cifara je %d, a suma cifara je %d", br_cif, sum);

}
