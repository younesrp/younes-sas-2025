#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    printf("Entrez votre nombre : ");
    scanf("%d", &n);

    while(i <= n) {
        sum += i;
        printf("%d somme = %d\n", i, sum);
        i++;
    }

    printf("la somme finale = %d\n", sum);
    return 0;
}
