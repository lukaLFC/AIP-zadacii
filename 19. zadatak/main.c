#include <stdio.h>
#include <stdlib.h>

void main (){

    int a, b;
    char op;

    printf("Unesi prvi broj, pa operaciju, pa drugi broj: ");
    scanf("%d%c%d", &a, &op, &b);

    printf("%d%c%d", a, op, b);

    switch(op){

        case '+':
            printf("=%d", a+b);
            break;
        case '-':
            printf("=%d", a-b);
            break;
        case '*':
            printf("=%d", a*b);
            break;
        case '/':
            printf("=%d", a/b);
            break;
        default:
            printf("=Greska!!!");
            break;

    }

}
