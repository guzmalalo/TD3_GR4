#include<stdio.h>

int main(void){
    // Declaration et initialisation
    float largeur=0.0f, longueur= 0.0f;
    float a=0.0f, p= 0.0f;

    // Input
    printf("Donnnez la largeur : ");
    scanf("%f", &largeur);

    printf("Donnnez la longueur: ");
    scanf("%f", &longueur);

    // Calcul
    a = largeur*longueur;
    p = 2*(largeur+longueur);

    // output
    printf("L'aire est %f et le perimetre est %f",a, p);

    return 0;
}
