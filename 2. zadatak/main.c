#include <stdio.h>
#include <stdlib.h>

void main()
{
    float x, y;

    printf("Unesite broj: \t");
    scanf("%f",&x);

    if(x>=0){
        y=x;
        printf("Vrednost broja je %.2f, a njegova apsolutna vrednost je %.2f\n", x, y);
        } else {
        y=-x;
        printf("Vrednost broja je %.2f, a njegova apsolutna vrednost je %.2f\n", x, y);
        }

}
