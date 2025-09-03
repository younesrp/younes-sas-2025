#include<stdio.h>
int main(){
    char x ;
    printf("entrez votre lettre :  ");
    scanf("%c",&x);
    if (x >= 65 && x<= 90){
        printf("c'est une lettre majiscule");
    }
    else{
        printf("c'est pas une lettre majiscule");
    }
    return 0;
}