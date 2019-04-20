#include <stdio.h>
#include <stdlib.h>

void main()
{
    int sum, maxbr, i, x;

    printf("Uneti maksimalnu vrednost: ");
    scanf("%d", &maxbr);

    sum=0;
    i=1;

    while(sum<=maxbr){
        printf("Unesite %d. vrednost: \n", i);
        scanf("%d", &x);
        sum+=x;
        i++;
    }

    printf("Suma unetih brojeva je: %d", sum);




}
