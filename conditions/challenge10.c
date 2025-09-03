#include <stdio.h>

int main() {
    int jour, mois, annee;
    char *moisNom[12] = {
        "Janvier", "Février", "Mars", "Avril", "Mai", "Juin",
        "Juillet", "Août", "Septembre", "Octobre", "Novembre", "Décembre"
    };
    printf("entrez la date : ");
    scanf("%d/%d/%d", &jour, &mois, &annee);

    if (mois < 1 || mois > 12) {
        printf("Mois invalide !\n");
        return 0;
    }

    printf("%d-%s-%d\n", jour, moisNom[mois - 1], annee);

    return 0;
}
