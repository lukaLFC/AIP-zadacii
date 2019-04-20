#include <stdio.h>
#include <stdlib.h>

void main (){

    int i, n, k1, k2, k3;
    float x, y;
    char ob;

    printf("Koliko tacaka zelis uneti?: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        printf("Unesi koordinate %d. tacke: ", i);
        scanf("%f%f", &x, &y);

        k1=(x-1)*(x-1)+y*y<=1;
        k2=(x-1)*(x-1)+(y-1)*(y-1)<=1;
        k3=x*x+(y-1)*(y-1)<=1;

        if(k1&&!k2&&k3)
            ob='A';
        else if(k1&&k2&&!k3)
            ob='B';
        else if(!k1&&k2&&k3)
            ob='C';
        else
            ob='*';

    printf("%d. tacka sa koordinatama %4.2f, %4.2f je u oblasti %c\n", i, x, y, ob);
    }
}
