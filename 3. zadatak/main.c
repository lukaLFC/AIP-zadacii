#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i;
    float x,y;

    for(i=1; i<=10; i++){

        printf("Unesite %d. vrednost za x: ", i);
        scanf("%f", &x);

        if(x<2)
            y=x;
        else if(x<3)
            y=2;
        else
            y=x-1;

        printf("Za x=%.2f, sledi da je y=%.2f\n", x, y);
    }

 }
