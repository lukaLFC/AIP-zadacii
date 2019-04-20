#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main (){

    int x, i, prost;

    printf("Unesi broj: ");
    scanf("%d", &x);

    prost = 1;
    i=2;

    while(i<=sqrt(x) && prost==1){
        if(x%i==0)
            prost=0;
        i++;
    }

    if(prost==1)
        printf("Uneti broj je prost");
    else
        printf("Uneti broj nije prost");
}
