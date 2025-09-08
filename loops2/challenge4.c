#include <stdio.h>

int main() {
    int n, inv = 0;

    printf("Entrez le nombre: ");
    scanf("%d", &n);

    while (n > 0) {
        inv = inv * 10 + n % 10;
        n = n / 10;
    }

    printf("Le nombre inverse: %d\n", inv);
    return 0;
}