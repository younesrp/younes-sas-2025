#include <stdio.h>
#include <string.h>

int main(){
    char string[5] ="abcde";
    int len = strlen(string);
    for (int i = len-1; i >= 0; i--){
        printf("%c", string[i]);
    }
}