#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Entrez votre nombre : ");
    scanf("%d", &n);

    if (n == 0) {
        count = 1;
    } else {
        for(; n != 0; n = n / 10) {
            count++;
        }
    }

    printf("le nombre de chiffres = %d\n", count);
    return 0;
}
