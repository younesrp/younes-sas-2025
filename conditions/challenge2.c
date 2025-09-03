#include <stdio.h>
int main(){
    char X;
    printf("entrez le charactere : ");
    scanf("%s" ,&X);
    switch(X){
        case 'a' : case 'e' : case 'i' : case 'u' : case 'o' : case 'A' : case 'E' : case 'I' : case 'U' : case 'O' :
        
            printf("est une voyelle");
            break;
        
        default :{
            printf("n'est pas une voyelle");
        }
    }
}