#include <stdio.h>

struct Rectangle {
    float longueur;
    float largeur;
  
};

float calculerAire(struct Rectangle r) {
    return r.longueur * r.largeur;
}

int main() {
    struct Rectangle rect ;
    rect.longueur=5.0;
    rect.largeur=3.0;
    float air = calculerAire(rect);
    printf("aire de rectangle:%.2f\n",air);
    return 0;
}