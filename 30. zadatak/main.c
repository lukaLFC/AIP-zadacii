#include <stdio.h>
#include <stdlib.h>

void main (){

    int n, i, A[100], k, j;

    printf("Unesite velicinu niza: ", n);
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("Unesi %d. broj niza: ", i+1);
        scanf("%d", &A[i]);
    }

    for(i=0; i<106; i++){
        printf("Unesi %d. dodatni clan: ", i+1);
        scanf("%d", &k);

        j=n;

        while(j>0 && A[j-1]>k){
            A[j]=A[j-1];
            j--;
        }

        A[j]=k;
        n++;
    }

    for(i=0; i<n; i++)
        printf("%d ", A[i]);

    }
