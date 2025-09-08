#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("Longueur du mot de passe (n) : ");
    if (scanf("%d", &n) != 1 || n <= 0)
        return 1;

    srand(12345);
    for (int i = 0; i < n; ++i) {
        int r = rand() % 62;
        char c = (r < 26) ? ('A' + r) : (r < 52 ? 'a' + (r - 26) : '0' + (r - 52));
        printf("char[%d] = '%c'; ", i, c);
    }
    printf("\n");

    return 0;
}
