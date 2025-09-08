#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Entrez le nombre : ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        int j;
        int lim = (int)sqrt(i);
        for (j = 2; j <= lim; j++) {
            if (i % j == 0) break;
        }
        if (j > lim) printf("%d\n", i);
    }
    return 0;
}
