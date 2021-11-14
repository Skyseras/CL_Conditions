#include <unistd.h>
#include <stdio.h>

/*
Challenge 7 : Programme guidé par menu pour convertir l'année
Ecrivez un programme C piloté par menu pour convertir une année donnée en,
Mois
Jours
Heures
Minutes
Secondes
Pour plus de simplicité, n'incluez pas l'année bissextile 
(sauf si vous êtes courageux pour le faire). 1 an = 365 jours 1 mois = 30 jours
*/

int main(){
    
    int A,choix;
    printf("Entrez L'annee : ");
    scanf("%d", &A);
    printf("Voulez vous convertir %d en : \nMois entrez '1'\nJours entrez '2'\nHeures entrez '3'\nMinutes entrez '4'\nSecondes entrez '5'\n",A);
    scanf("%d", &choix);
    switch (choix) {
        case 1:
        if (1904, 1908, 1912, 1916, 1920, 1924, 1928, 1932, 1936, 1940, 1944, 1948, 1952, 1956, 1960, 1964, 1968, 1972, 1976, 1980, 1984, 1988, 1992, 1996, 2000, 2004, 2008, 2012, 2016, 2020, 2024, 2028, 2032, 2036, 2040, 2044, 2048, 2052, 2056, 2060, 2064, 2068, 2072, 2076, 2080, 2084, 2088, 2092, 2096)
        {
            printf("%d est une annee bissextile et sa conversion en mois = %d\n", A, 12);
        }
        else
            printf("%d est une annee commune et sa conversion en mois = %d\n", A, 12);
            break;
        case 2:
        if (1904, 1908, 1912, 1916, 1920, 1924, 1928, 1932, 1936, 1940, 1944, 1948, 1952, 1956, 1960, 1964, 1968, 1972, 1976, 1980, 1984, 1988, 1992, 1996, 2000, 2004, 2008, 2012, 2016, 2020, 2024, 2028, 2032, 2036, 2040, 2044, 2048, 2052, 2056, 2060, 2064, 2068, 2072, 2076, 2080, 2084, 2088, 2092, 2096)
        {
            printf("%d est une annee bissextile et sa conversion en jours = %d\n", A, 366);
        }
        else
            printf("%d est une annee commune et sa conversion en jours = %d\n", A, 365);
            break;
        case 3:
        if (1904, 1908, 1912, 1916, 1920, 1924, 1928, 1932, 1936, 1940, 1944, 1948, 1952, 1956, 1960, 1964, 1968, 1972, 1976, 1980, 1984, 1988, 1992, 1996, 2000, 2004, 2008, 2012, 2016, 2020, 2024, 2028, 2032, 2036, 2040, 2044, 2048, 2052, 2056, 2060, 2064, 2068, 2072, 2076, 2080, 2084, 2088, 2092, 2096)
        {
            printf("%d est une annee bissextile et sa conversion en heures = %d\n", A, 366 * 24);
        }
        else
            printf("%d est une annee commune et sa conversion en heures = %d\n", A, 365 * 24);
            break;
        case 4:
        if (1904, 1908, 1912, 1916, 1920, 1924, 1928, 1932, 1936, 1940, 1944, 1948, 1952, 1956, 1960, 1964, 1968, 1972, 1976, 1980, 1984, 1988, 1992, 1996, 2000, 2004, 2008, 2012, 2016, 2020, 2024, 2028, 2032, 2036, 2040, 2044, 2048, 2052, 2056, 2060, 2064, 2068, 2072, 2076, 2080, 2084, 2088, 2092, 2096)
        {
            printf("%d est une annee bissextile et sa conversion en minutes = %d\n", A, 366 * 24 * 60);
        }
        else
            printf("%d est une annee commune et sa conversion en minutes = %d\n", A, 365 * 24 * 60);
            break;
        case 5:
        if (1904, 1908, 1912, 1916, 1920, 1924, 1928, 1932, 1936, 1940, 1944, 1948, 1952, 1956, 1960, 1964, 1968, 1972, 1976, 1980, 1984, 1988, 1992, 1996, 2000, 2004, 2008, 2012, 2016, 2020, 2024, 2028, 2032, 2036, 2040, 2044, 2048, 2052, 2056, 2060, 2064, 2068, 2072, 2076, 2080, 2084, 2088, 2092, 2096)
        {
            printf("%d est une annee bissextile et sa conversion en secondes = %d\n", A, 366 * 24 * 60 * 60);
        }
        else
            printf("%d est une annee commune et sa conversion en secondes = %d\n", A, 365 * 24 * 60 * 60);
            break;
        default:
            break;
    }
    return 0;
}