#include <stdio.h>

int main() {
    int n, i;
    printf("Entrez un nombre : ");
    scanf("%d", &n);
    long long a = 0, b = 1, temp;

    for(i = 0; i < n; i++) {
        printf("%lld ", a);
        temp = a + b;
        a = b;
        b = temp;
    }

    return 0;
}