#include <stdio.h>
#include <stdlib.h>

void main () {

    float x, y;

    printf("Unesi koordinatne tacke tacke P: ");
    scanf("%f%f", &x, &y);

    if(y>=0.5*x-1)
        printf("Tacka je iznad prave.");
    else
        printf("Tacka je ispod prave");

}
