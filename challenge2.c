#include <stdio.h>

int main() {
    float C, K;
    printf("C°=");
    scanf("%f", &C);
    K = C + 273.15;
    printf("%.2f°C = %.2f °K\n", C, K);
    return 0;
}
