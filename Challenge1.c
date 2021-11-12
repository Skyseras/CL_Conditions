#include <unistd.h>
#include <stdio.h>

/*
Challenge 1 :
Traduire l’algorithme suivant en langage C. Quel est le résultat de son exécution

Algorithme CHALLENGE_1
Variables  nbr : Entier
Début
  Ecrire (‘donner un entier :’)
  Lire (nbr)
  Si (nbr<0) Alors
    Ecrire(‘le nbr’,nbr,’ est negatif’)      
  Sinon
    Si (nbr>0)Alors
      Ecrire(‘le nbr’,nbr,’ est positif’)      
    Sinon
      Ecrire(‘le nbr’,nbr,’ est nul’)      
    Finsi
  Finsi 
Fin
*/

int main(){
    int nbr;
    printf("Donnez un entier: ");
    scanf("%d", &nbr);
    if (nbr<0)
        printf("Le nombre %d est negatif", nbr);
    else if (nbr>0)
        printf("Le nombre %d est positif", nbr);
    else
        printf("Le nombre %d est null", nbr);        
    return 0;
}