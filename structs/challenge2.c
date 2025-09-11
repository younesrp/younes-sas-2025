#include <stdio.h>
#include <string.h>

struct student {
    char nom[20];
    char prenom[20];
    int notes[3];
};

int main() {
    struct student e;

    strcpy(e.nom, "Mouqla");
    strcpy(e.prenom, "Younes");

    e.notes[0] = 14;
    e.notes[1] = 19;
    e.notes[2] = 16;

    printf("Nom: %s\n", e.nom);
    printf("Prenom: %s\n", e.prenom);
    printf("Notes: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", e.notes[i]);
    }
    printf("\n");

    return 0;
}
