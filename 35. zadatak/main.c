#include <stdio.h>
#include <stdlib.h>

void main (){

    int n, i, A[50], B[50], k, Nb;

    printf("Unesite velicinu niza: ", n);
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("Unesi %d. broj niza: ", i+1);
        scanf("%d", &A[i]);
    }

    printf("Uneti vrednost k: ");
    scanf("%d", &k);

    Nb=0;

    for(i=0; i<n; i++){

        if(A[i] == k){
            B[Nb]=i;
            Nb++;
        }
    }

    for(i=0; i<Nb; i++)
        printf("%d ", B[i]);

    }

