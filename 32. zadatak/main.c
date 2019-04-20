#include <stdio.h>
#include <stdlib.h>

void main (){

    int n, j, i, A[100], brojac, brpon; //brpon = broj ponavljanja, a brojac broji koliko imamo takvih elemenata

    printf("Unesite velicinu niza: ", n);
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("Unesi %d. broj niza: ", i+1);
        scanf("%d", &A[i]);
    }

   brojac = 0;

    for(i=0; i<n; i++){
        brpon = 0;

        for(j=0; j<n; j++){

            if(A[i]=A[j])
                brpon++;
        }

        if(brpon >= 1)
            brojac++;
   }

    printf("Postoje %d elemenata koji se ne ponavljaju", brojac);

    }

