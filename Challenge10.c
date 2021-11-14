#include <unistd.h>
#include <stdio.h>

/*
Challenge 10 :
Écrire un programme C permettant de lire la valeur de la température 
de l'eau et d'afficher son état :
Glace si la température est inférieure à 0, t≤ 0.
Eau si la température est strictement supérieure à 0 et <100, 0 < t ≤ 100.
Vapeur si la température est strictement supérieure à 100, 100 < t.
*/

int main(){
    float t;
    printf("Entrez la temperature de l'eau : ");
    scanf("%f", &t);
    if (t<=0)
        printf("Glace");
    else if (t>0 && t<=100)
        printf("Eau");
    else if (t>100)
        printf("Vapeur");
    return 0;
}