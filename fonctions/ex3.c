#include <stdio.h>
int  big(int num1,int num2) {
    if (num1>num2)
     printf("%d" ,num1);

    else 
     printf("%d" ,num2);
    return 0;}
int main() {
    big(12 ,11);

    return 0;
}