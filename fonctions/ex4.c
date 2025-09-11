#include <stdio.h>
int  small(int num1,int num2) {
    if (num1<num2)
     printf("%d" ,num1);

    else 
     printf("%d" ,num2);
    }
int main() {
   small(9 ,11);

    return 0;
}