#include <stdio.h>
int main(){
    int X , Y;
    printf("entrez a et b : ");
    scanf("%d%d" , &X, &Y );
    int T;
    if (X != Y){
     
        T = X+Y;
    }
    else if (X == Y){
       
        T = (X+Y)*3;
    }
   printf("Résultat : %d\n", T);
}