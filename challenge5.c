#include <stdio.h>

int main() {
    float T;
    printf("T= ");
    scanf("%f", &T);

    if (T < 0)
        printf("Solide (glace)\n");
    else if (T < 100)
        printf("Liquide (eau)\n");
    else
        printf("Gaz (vapeur)\n");

    return 0;
}
