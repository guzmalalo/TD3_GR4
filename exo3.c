#include <stdio.h>

int main(void){
    int n;
    const int a = 3;

    printf("Donnez un entier :");
    scanf("%d", &n);

    printf("Le numero %d est mutiple de 3  %c \n", n, n%3==0?'O':'N');

    if(n>10){
        printf("Le numero %d est sup à 10",n);
    }else{
        printf("Le numero %d n'est pas sup à 10",n);
    }

    return 0;
}