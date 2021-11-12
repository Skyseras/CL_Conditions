#include <unistd.h>
#include <stdio.h>

/*
Challenge 5 :
Ecrivez un programme C pour calculer la somme de deux valeurs 
entières données. Si les deux valeurs sont identiques, il renvoie 
le triple de leur somme.
*/

int main(){
    int a,b;
    printf("Entrez une valeur entiere: ");
    scanf("%d", &a);
    printf("Entrez une deuxieme valeur entiere: ");
    scanf("%d", &b);
    if (a==b)
        printf("Les deux valeurs sont identiques. Alors voici le triple de leur somme: %d",3*(a+b));
    else
        printf("La somme est: %d",a+b);
    return 0;
}