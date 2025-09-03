#include <stdio.h>

int main() {
    int annee;
    int choix;

    printf("le nombre d'année ");
    scanf("%d", &annee);

    printf("\n option de la conversion :\n");
    printf("1. Mois\n");
    printf("2. Jours\n");
    printf("3. Heures\n");
    printf("4. Minutes\n");
    printf("5. Secondes\n");
    printf("entrez la methode de convertion on choisissant de 1-5 : ");
    scanf("%d", &choix);

    switch(choix) {
        case 1:
            printf("%d ans ≈ %d mois\n", annee, annee * 12);
            break;
        case 2:
            printf("%d ans ≈ %d jours\n", annee, annee * 365);
            break;
        case 3:
            printf("%d ans ≈ %d heures\n", annee, annee * 365 * 24);
            break;
        case 4 :
          printf("%d ans ≈ %d minutes\n", annee, annee * 365 * 24 * 60);
            break;
        case 5 :
        printf("%d ans ≈ %d secondes\n", annee, annee * 365 * 24 * 60 * 60);
            break;
    }
}