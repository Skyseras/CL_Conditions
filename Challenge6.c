#include <unistd.h>
#include <stdio.h>
#include <math.h>
/*
Challenge 6 : Equation deuxième degré
Écrivez un programme C qui permet de calculer 
les solutions possibles d’une équation 2ème degré.
*/

int main(){
    float a,b,c,delta;
    printf("Donner la valeur de 'a' de l'equation 'ax^2 + bx + c = 0': ");
    scanf("%f", &a);
    printf("Donner la valeur de 'b' de l'equation 'ax^2 + bx + c = 0': ");
    scanf("%f", &b);
    printf("Donner la valeur de 'c' de l'equation 'ax^2 + bx + c = 0': ");
    scanf("%f", &c);
    delta= pow(b,2) - (4*a*c);
    if (delta<0)
        printf("L'equation %fx^2 + %fx + %f = 0 n'a pas de solution reelle",a,b,c);
    else if (delta==0)
        printf("L'equation %fx^2 + %fx + %f = 0 a une unique solution\nApplication Numerique x0 = %f",a,b,c,(-1*b)/(2*a));
    else
        printf("L'equation %fx^2 + %fx + %f = 0 a deux solutions distinctes\nApplication Numerique x1 = %f et x2 = %f",a,b,c,(-1*(b - sqrt(delta)))/(2*a),(-1*(b + sqrt(delta)))/(2*a));
    return 0;
}