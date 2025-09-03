#include <stdio.h>

int main() {
    float a, b, c, moyenne;

    printf("Entrez a et b et c : ");
    scanf("%f", &a,&b,&c);
    

    moyenne = (a*2 + b*3 + c*5) / 10;

    printf("la moyenne ponderée= %.2f\n", moyenne);

    return 0;
}
