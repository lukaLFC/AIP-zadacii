#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a, b, c, p, k, S, i;

    printf("Unesite vrednost prvog broja: \n");
    scanf("%d", &a);
    printf("Unesite vrednost drugog broja: \n");
    scanf("%d", &b);
    printf("Unesite vrednost treceg broja: \n");
    scanf("%d", &c);

    printf("Za koliko mesta ulevo zelite da pomerite niz?: \n");
    scanf("%d", &k);
    printf("Da li zelite da izvrsite rotaciju ulevo (unesi -1) ili udesno (unesi 1)?\n");
    scanf("%d", &S);

    printf("Vrednosti pre pomeranja su: a=%d, b=%d, c=%d \n", a, b, c);

    if(S==1){
        for(i=0; i<k; i++){

        p=c;
        c=b;
        b=a;
        a=p;
    }
    }else if(S==-1){
        for(i=0; i<k; i++){

        p=a;
        a=b;
        b=c;
        c=p;

    }
    }else{
        printf("Uneli ste pogresnu vrednost za S:\n");
    }

    printf("Vrednosti nakon pomeranja su: a=%d, b=%d, c=%d", a, b, c);

 }
