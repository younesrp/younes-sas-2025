#include <stdio.h>

int main() {
    float a, b;
    printf("entrez A et B ");
    scanf("%f %f", &a, &b);

    printf("%.2f + %.2f = %.2f\n", a, b, a + b);
    printf("%.2f - %.2f = %.2f\n", a, b, a - b);
    printf("%.2f * %.2f = %.2f\n", a, b, a * b);

    if (b != 0)
        printf("%.2f / %.2f = %.2f\n", a, b, a / b);
    else
        printf("impossible\n");

    return 0;
}
