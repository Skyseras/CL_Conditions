#include <unistd.h>
#include <stdio.h>

/*
Challenge 4 :
Ecrivez un programme en C qui vérifie si un caractère 
saisi par l'utilisateur est une voyelle ou non en utilisant 
l'instruction switch case.
*/

int main(){
    char C;
    printf("Entrez une lettre: ");
    scanf("%c",&C);
    switch (C) {
         case 'a':
            printf("%c est une voyelle.", C);
            break;
         case 'e':
            printf("%c est une voyelle.", C);
            break;
         case 'y':
            printf("%c est une voyelle.", C);
            break;
         case 'u':
            printf("%c est une voyelle.", C);
            break;
         case 'i':
            printf("%c est une voyelle.", C);
            break;
         case 'o':
            printf("%c est une voyelle.", C);
            break;
         case 'A':
            printf("%c est une voyelle.", C);
            break;
         case 'E':
            printf("%c est une voyelle.", C);
            break;
         case 'Y':
            printf("%c est une voyelle.", C);
            break;
         case 'U':
            printf("%c est une voyelle.", C);
            break;
         case 'I':
            printf("%c est une voyelle.", C);
            break;
         case 'O':
            printf("%c est une voyelle.", C);
            break;
         default:
            printf("%c est une consonne.", C);
    }
    return 0;
}