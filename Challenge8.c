#include <unistd.h>
#include <stdio.h>

/*
Challenge 8 :
Ecrivez un programme pour vérifier si le nombre donné est positif, négatif ou nul.

Si le nombre est inférieur à zéro, alors le nombre est négatif et si le nombre est supérieur à zéro,
alors le nombre est positif. Si les deux conditions sont fausses, le nombre est égal à zéro.
*/

int main(){
        int n;
    printf("Entrez un nombre entier: ");
    scanf("%d", &n);
    if (n < 0)
        printf("Votre nombre est negatif.");
    else if (n > 0)
        printf("Votre nombre est positif.");
    else
        printf("Votre nombre est null.");
    return 0;
}