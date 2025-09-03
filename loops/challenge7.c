#include <stdio.h>

int main() {
    int n, ty, inv = 0;

    printf("Entrez le nombre : ");
    scanf("%d", &n);

    for(; n != 0; n = n / 10) {
     ty = n % 10;
        inv = inv * 10 + ty;
    }

    printf("le nombre inversé = %d\n", inv);
    return 0;
}
