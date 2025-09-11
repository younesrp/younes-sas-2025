#include <stdio.h>
#include <ctype.h>

int main() {

    char lowercase[100];

    printf("Enter a word in lowercase letters: ");
    fgets(lowercase, 100, stdin);

    
    for (int i = 0; lowercase[i] != '\0'; i++) {
        lowercase[i] = toupper(lowercase[i]);  
    }

    printf("The word in UPPERCASE letters: %s", lowercase);


    
    return 0;
}