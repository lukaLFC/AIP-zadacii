#include <stdio.h>
#include <stdlib.h>

void main (){

    int n, i, x[100], pom;

    printf("Koliko zelite da bude dug vas niz?: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){

        printf("Unesite %d. clan niza: ", i+1);
        scanf("%d", &x[i]);
    }

    pom = x[n-1]; // pomocni je jednak poslednjem

    for(i=n-1; i>0; i--)
        x[i] = x[i-1];

    x[0] = pom;

    for(i=0; i<n; i++)
        printf("%d ", x[i]);

}
