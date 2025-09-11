#include <stdio.h>
#include <string.h>

struct Personne {
    char nom[50];
    char prenom[50];
    int age;
};

int main() {
    struct Personne employe;

    strcpy(employe.nom, "Mouqla");
    strcpy(employe.prenom, "Younes");
    employe.age = 22;

    printf("Nom    : %s\n", employe.nom);
    printf("Prénom : %s\n", employe.prenom);
    printf("Âge    : %d ans\n", employe.age);

    return 0;
}
