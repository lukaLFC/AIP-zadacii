#include <stdio.h>
#include <stdlib.h>

void main (){

    float x, y;
    int n, i, brtin;

    printf("Koliko koordinatih tacaka zelis uneti?: ");
    scanf("%d", &n);

    brtin=0;

    for(i=0; i<n; i++){
        printf("Uneti koordinate %d. tacke: ", i+1);
        scanf("%f%f", &x, &y);

        if(y>=1 && y<=2/3*x+5/3 && y<=-2*x+7)
            brtin++;

    }

    printf("U trouglu se nalazi %d tacaka, a van njega %d", brtin, n-brtin);

}
