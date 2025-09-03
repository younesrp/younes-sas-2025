#include <stdio.h>
int main (){
    int num;
    printf("entrez votre nombre : ");
    scanf("%d", &num);
    if (num%2==0){
        printf("pair");
    }
    else {
        printf("impair");
    }
}