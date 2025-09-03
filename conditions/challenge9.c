#include <stdio.h>

int main() {
    char c;
    printf("entrez votre characteres : ");
    scanf("%c", &c);
    if (c >= 65 && c <= 90) {
            printf("C'est une lettre majuscule\n");
        } else if( c>=97&& c<=122) {
            printf("C'est une lettre Minuscule\n");
        }
     else {
        printf("Ce n'est pas une lettre alphabétique\n");
    }
    
    return 0;
}
