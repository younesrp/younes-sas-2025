#include <stdio.h>

int main(void) {
    int n ;
    printf("Entrez un nombre pour la hauteur du triangle : ");
    scanf("%d", &n); 
   
    for (int i = 1; i <= n; i++) {
        int spaces = n - i;       
        int stars = 2 * i - 1;    

        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        for (int j = 0; j < stars; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
