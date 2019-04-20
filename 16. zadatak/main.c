#include <stdio.h>
#include <stdlib.h>

void main (){

    char c;

    printf("Unesite neki znak: ");
    scanf("%c", &c);

    if(c>='A' && c<='Z'){
        printf("Uneli ste veliko slovo");

    }else if(c>='a' &&c<='z'){
        printf("Uneli ste malo slovo");

    }else if(c>='0' && c<='9'){
        printf("Uneli ste cifru");

    }else{
        printf("Uneli ste specijalni znak");
    }

}
