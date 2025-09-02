#include <stdio.h>

int main() {
    float kmh, ms;
    printf("Km/h=");
    scanf("%f", &kmh);
    ms = kmh * 0.27778;
    printf("%.2fKm/h = %.2f m/s\n", kmh, ms);
    return 0;
}
