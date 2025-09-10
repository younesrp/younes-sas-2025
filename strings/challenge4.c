#include <stdio.h>
#include <string.h>

int main(){
    char string1[20] = "Hello ";
    char string2[20] = "Hello";

    if (strcmp(string1, string2) == 0){
        printf("the two strings are similar");
    } else {
        printf("the two strings are not similar");
    }
}