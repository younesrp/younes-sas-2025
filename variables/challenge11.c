#include <stdio.h>

int main() {
    float longueur, largeur, surface;
    printf("longueur=");
    scanf("%f", &longueur);
    printf("largeur=");
    scanf("%f", &largeur);
    surface = longueur * largeur;
    printf("%.2fsurface= ", surface);
    return 0;
}
