#include <stdio.h>
#include <strings.h>

int main(){
    char string1[20] = "Hello ";
    char string2[20] = "World";

    strcat(string1, string2);
    printf("%s", string1);

    return 0;
}