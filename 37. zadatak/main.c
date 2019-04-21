#include <stdio.h>
#include <stdlib.h>

void main (){

    int n, m, i, k, j, p, A[50], B[50], C[50];

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


        if(j==m){
            C[k]=A[i];
            k++;
        }
    }

    for(i=k-1; i<k-1+m; i++){
        p=0;
        C[i]=B[p];
        p++;
    }

    printf("Unij skupova A i B je: ");
    for(i=0; i<k+m; i++)
        printf("%d ", C[i]);

}
