#include <stdio.h>
int main(){
    int n , i;
    printf("Entrez un nombre : ");
    scanf("%d", &n);
    for (i = 10; i >0 ; i--) {
       printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}