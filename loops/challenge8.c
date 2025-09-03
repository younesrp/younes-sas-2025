#include <stdio.h>

int main() {
    int n, i, a = 0, b = 1, suivant;

    printf("Entrez un nombre : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("%d ", a);
        suivant = a + b;
        a = b;
        b = suivant;
    }

    return 0;
}
