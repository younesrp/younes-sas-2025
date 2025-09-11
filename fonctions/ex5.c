#include <stdio.h>
long long facto(int num1) {
    printf("Enter a number you want to count : ");
    scanf("%d" ,&num1);
   long long factorial=1;
    if(num1==0) {

        printf("factorial of %d is : 1" , num1);

    }
    else  {
    for(int i=1;i<=num1;i++) {

        factorial*=i;


    }
    printf("factorial of %d is : %lld" , num1 , factorial);

    }
        }
int main() {
   facto(5);

    return 0;
}