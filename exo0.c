#include<stdio.h>

int main(void){
    // Declaration
    int a, b, somme, i;

    // Initialisation
    a = b = somme = i = 0;

    // Input
    do {
        printf("Donnez A et B : ");
        scanf("%d %d", &a, &b);
    }while(a>b);


    // Calcul
    for(i = a; i<=b; i = i+1){
        somme = somme + i;
    }

    // Output
    printf("La sommme entre %d  et %d est %d",a, b, somme);

    return 0;
}