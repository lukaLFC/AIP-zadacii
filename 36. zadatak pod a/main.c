#include <stdio.h>
#include <stdlib.h>

void main (){

    int n, m, i, k, j, A[50], B[50], C[50];

    printf("Koliko elemenata zelite da ima skup A?: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
    printf("Unesi %d. element skupa A: ", i+1);
    scanf("%d", &A[i]);
    }

    printf("Koliko elemenata zelite da ima skup B?: ");
    scanf("%d", &m);

    for(i=0; i<m; i++){
    printf("Unesi %d. element skupa B: ", i+1);
    scanf("%d", &B[i]);
    }

    k=0;
    for(i=0; i<n; i++){
        j=0;

        while(j<n && A[i]!=B[j])
        j++;

        if(j<n){
            C[k]=A[i];
            k++;
    }
    }

    printf("Presek skupova A i B je: ");
    for(i=0; i<k; i++)
        printf("%d ", C[i]);

}
