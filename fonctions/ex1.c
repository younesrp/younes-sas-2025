#include <stdio.h>
int add(int num1,int num2) {
    int total=num1+num2;
    printf("%d" , total);

    return total; 
}
int main() {
    add(10 ,11);
    return 0;
}