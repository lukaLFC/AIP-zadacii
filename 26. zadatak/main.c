#include <stdio.h>
#include <stdlib.h>

void main (){

    int n, i, x[100], max, min, pom; // max i min su ideksi za maks i min element

    printf("Koliko zelite da bude dug vas niz?: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("Unesite %d. clan: ", i+1);
        scanf("%d", &x[i]);
    }

    max=0;
    min=0;

    for(i=0; i<n; i++){

        if(x[i] < min)
            min=i;

        if(x[i] > max)
            max=i;

    }

    pom = x[min];
    x[min] = x[max];
    x[max]= pom;

    for(i=0; i<n; i++)
        printf("%d ", x[i]);

}
