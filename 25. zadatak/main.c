#include <stdio.h>
#include <stdlib.h>

void main(){

    int i, n, x[100], maxind;

    printf("Koliko zelite da vas niz bude dug?: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("Unesite %d. clan niza: ", i+1);
        scanf("%d", &x[i]);
    }

    maxind=0;

    for(i=0; i<n; i++){

        if(x[i]>maxind)
            maxind=i;
    }

    printf("Indeks maksimalnog elementa niza je %d", maxind+1);

}
