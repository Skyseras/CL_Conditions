#include <unistd.h>
#include <stdio.h>

/*
Challenge 3 : Paire ou Impaire
Ecrivez un programme qui demande un nombre et 
affiche si ce nombre est pair ou impair
*/

int main(){ 
    int nbr;
    printf("Entrez un nombre entier: ");
    scanf("%d", &nbr);
    if (nbr==0)
        printf("Votre nombre est null.");
    else if (nbr%2==0)
        printf("Votre nombre est pair.");
    else
        printf("Votre nombre est impair.");
    return 0;
}