#include <stdio.h>
int main(){
    float a;
    printf("entrez votre nombre : ");
    scanf("%f",&a);
    if (a<0){
        printf("votre nombre est negatif");
    }
    else if (a>0){
        printf("votre nombre est positif");
    }
    else{
        printf("votre nombre est nul");
    }
    return 0 ;
}