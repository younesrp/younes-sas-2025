#include <stdio.h>

int main() {
    int b, e;
    long resultat = 1;
    printf("Entrez la b et l'e : ");
    scanf("%d %d",  b, &e);

    if (e == 0) {
        resultat = 1;
    } else if ( b == 0) {
        resultat = 0;
    } else {
        int i = 0;
        while (i < e) {
            resultat *= b;
            i++;
        }
    }

    printf("%ld\n", resultat);
    return 0;
}
