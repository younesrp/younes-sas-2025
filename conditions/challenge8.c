#include <stdio.h>

int main() {
    float myn;
    printf("Entrez la moyenne de l'etudiant : ");
    scanf("%f", &myn);

    if(myn < 10)
        printf("Echec(Recalé)\n");
    else if(myn < 12)
        printf("passable\n");
    else if(myn < 14)
        printf("assez Bien\n");
    else if(myn < 16)
        printf("Bien\n");
    else
        printf("tres Bien\n");

    return 0;
}
