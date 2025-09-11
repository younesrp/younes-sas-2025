#include <stdio.h>

int main() {
    int original[6]={ 1 , 2 , 3 , 4 , 5 ,6 };
    int new[6];
    int num;

    printf("Enter the num of multiplication : ");
    scanf("%d" , &num);

    for(int i=0;i<6;i++) {
        new[i]=original[i]*num;
    }
    printf("The elements of the new array are : ");
    for(int i=0;i<6;i++) {
       printf("%d " ,new[i]);
    }
    return 0;
}