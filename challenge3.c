#include <stdio.h>

int main() {
    float Km, Yards;
    printf("Km=");
    scanf("%f", &Km);
    Yards = Km * 1093.61;
    printf("%.2fKm = %.2f Yards\n", Km, Yards);
    return 0;
}
