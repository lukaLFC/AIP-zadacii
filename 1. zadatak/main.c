#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a,b,c;

    printf("Unesite dva broja: ");
    scanf("%d %d", &a, &b);

    c=a+b;
    printf("Zbir vrednosti a i b je: %d\n", c);

    c=a;
    c-=b; //c=c-b
    printf("Razlika vrednosti a i b je: %d\n", c);

    c=a*b;
    printf("Proizvod vrednosti a i b je: %d\n", c);

    c=a/b;
    printf("Kolicnik vrednosti a i b je: %d\n", c);

    c=a%b;
    printf("Moduo vrednosti a i b je: %d\n", c);

}
