#include <stdio.h>
#include <stdlib.h>

void main (){

    int n, a[100], i, k, el;

    printf("Koliko zelite da bude dug vas niz?: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("Unesite %d. clan niza: ", i+1);
        scanf("%d", &a[i]);
    }

    printf("Unesite vrednost elementa, kao i njegovu poziciju u nizu: ");
    scanf("%d%d", &el, &k);

    for(i=n; i>=k; i--){
        a[i] = a[i-1];
    }

    a[k-1] = el;
    n++;

    for(i=0; i<n; i++)
        printf("%d ", a[i]);
}
