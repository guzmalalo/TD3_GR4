#include <stdio.h>

int main(void){
    int n;
    const int a = 3;

    printf("Donnez un entier :");
    scanf("%d", &n);

    printf("Le numéro %d est multiple de 3 ? : %c \n", n, n%3==0?'O':'N');
    printf("Le numéro %d est superieur à 10 ? : %c \n", n, n>10?'O':'N');


    // OU
    /*
    if(n>10){
        printf("Le numéro %d est sup à 10",n);
    }else{
        printf("Le numéro %d n'est pas sup à 10",n);
    }
    */

    // condition composée
    printf("Le numero %d est multiple de 3 ET sup à 10 ? : %c ", n, (n%a==0 && n>10)? 'O':'N');

    return 0;
}