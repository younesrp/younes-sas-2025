#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, moyenne;

    printf("entrez a et b et c : ");
    scanf("%f %f %f", &a, &b, &c);

    moyenne = pow(a * b * c, 1.0/3.0);  

    printf("Moyenne géométrique = %.2f\n", moyenne);

    return 0;
}
