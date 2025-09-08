#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Entrez un nombre : ");
    scanf("%d", &n);

    int i;
    for (i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }

    for (i = (int)sqrt(n); i >= 1; i--) {
        if (n % i == 0 && i != n / i) {
            printf("%d ", n / i);
        }
    }

    return 0;
}
