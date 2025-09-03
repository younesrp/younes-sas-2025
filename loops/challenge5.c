#include <stdio.h>

int main() {
    int b, e;
    long result = 1; 

    printf("Entrez la base : ");
    scanf("%d", &b);

    printf("Entrez l'exposant : ");
    scanf("%d", &e);

    if (e == 0) {
        result = 1;
    } else {
        for (int i = 0; i < e; i++) {
            result *= b;
        }
    }

    printf("%d^%d = %ld\n", b, e, result);

    return 0;
}
