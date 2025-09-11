#include <stdio.h>
int est_pair(int number){
    if(number%2==0)
    printf("the number is pair");
    else if (number%2==1)
    printf("the number is impair");
}
int main() {
    int number;
    printf("Enter a number : ");
    scanf("%d" , &number);
    est_pair( number);

    return 0;
}