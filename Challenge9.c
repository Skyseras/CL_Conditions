#include <unistd.h>
#include <stdio.h>

/*
Challenge 9 :
Écrire un programme C qui décide la mention d’un élève dans une école 
à partir de sa moyenne. Cet élève doit avoir:
la mention «passable» pour une moyenne supérieure ou égale à 10 et inférieure à 12;
la mention «Assez bien » pour une moyenne supérieure ou égale à 12 et inférieure à 14;
la mention «Bien» pour une moyenne supérieure ou égale à 14 et inférieure à 16;
la mention «Très bien» pour une moyenne supérieure ou égale à 16.
*/

int main(){
    float m;
    printf("Entrez votre moyenne : ");
    scanf("%f", &m);
    if (m>=10 && m<12)
        printf("Votre mention est 'passable'");
    else if (m>=12 && m<14)
        printf("Votre mention est 'Assez bien'");
    else if (m>=14 && m<16)
        printf("Votre mention est 'Bien'");
    else if(m>=16 && m<20)
        printf("Votre mention est 'Tres bien'");
    return 0;
}