#include <unistd.h>
#include <stdio.h>

/*
Challenge 2 : Affichage Température
Ecrivez un programme qui demande la température en Fahrenheit 
et la transforme en degré Celsius et affiche la sensation ressentie 
(très froid, froid, chaud, très chaud)
La formule : C = (F-32)/1.8
*/

int main(){
    float F,C;
    printf("Entrez la temperature en Fahrenheit : ");
    scanf("%f", &F);
    C = (F - 32) / 1.8;
    printf("La temperature en Celsius est : %f", C);
    if (C < 0){
        printf(" Et votre temperature est très froide\n");
    }
    else if (C < 25){
        printf(" Et votre temperature est froid\n");
    }
    else if (C < 35){
    printf(" Et votre temperature est chaud\n");
    }
    else{
        printf(" Et votre temperature est très chaud\n");
    }    
    return 0;
}