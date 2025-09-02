#include <stdio.h>

int main() {
    char nom[50];
    char prenom[50];
    int age;
    char sexe;
    char email[50];

    printf("Nom : ");
    scanf("%s", nom);

    printf("Prénom : ");
    scanf("%s", prenom);

    printf("Âge : ");
    scanf("%d", &age);

    printf("Sexe (M/F) : ");
    scanf(" %c", &sexe);

    printf("Email : ");
    scanf("%s", email);

    printf("\nVos informations :\n");
    printf("Nom : %s\n", nom);
    printf("Prénom : %s\n", prenom);
    printf("Âge : %d\n", age);
    printf("Sexe : %c\n", sexe);
    printf("Email : %s\n", email);

    return 0;
}
