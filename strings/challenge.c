#include<stdio.h>
#include<string.h>
int main (){
    char str[30];
    printf("Enter a string: ");
    fgets(str, 30, stdin);
    printf("your string is : %s", str);
    return 0;
    
}