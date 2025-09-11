#include <stdio.h>

int main() {
    int tableau[] = {5, 2, 9, 1, 3};
    int taille = 5;
    int i, j, temp;

 for (i = 0; i < taille - 1; i++) {
    for (j = 0; j < taille - 1 - i; j++) {
         if (tableau[j] > tableau[j + 1]) {
             temp = tableau[j];
             tableau[j] = tableau[j + 1];
             tableau[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    return 0;
}