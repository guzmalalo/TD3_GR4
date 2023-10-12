// lib
#include <stdio.h>

int main(void){
    // declaration et initialisation
    int a = 0; int b = 0;

    // input
    printf("Donnez deux nombre entiers : ");
    scanf("%d %d",&a, &b);

    // verification
    printf("Le nombre plus grand est %d", a>b?a:b);

    return 0;
}