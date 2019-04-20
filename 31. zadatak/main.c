#include <stdio.h>
#include <stdlib.h>

void main (){

    int n, i, A[100], k, m;

    printf("Unesite velicinu niza: ", n);
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("Unesi %d. broj niza: ", i+1);
        scanf("%d", &A[i]);
    }

    printf("Koliko elemenata zelite da obrisete?: ");
    scanf("%d", &m);

    printf("Od kog elementa zelite da pocne brisanje?: ");
    scanf("%d", &k);

    for(i=k-1; i<k-1+m; i++)
        A[i]=A[i+m];

    for(i=0; i<n-m; i++)
        printf("%d ", A[i]);

    }
