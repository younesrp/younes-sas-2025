#include <stdio.h>

int main() {
   int i;
   int size;
   int min;
   printf("Enter the size of the array : ");
   scanf("%d" , &size);
   int array[size];
 
  printf("enter %d numbers : \n" , size);
   for( i=0; i<size;i++) {
       printf("Enter number %d : " , i+1);
       scanf("%d" , &array[i]);
   }

    for(i=0;i<size-1;i++) {
        if (array[i]<array[i+1]) {
            min=array[i];
        }
        else {
            min=array[i+1];

        }
    }

    printf("%d" , min);
    return 0;
}