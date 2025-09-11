#include <stdio.h>

int main() {

   int i;
   int size;
   int total=0;
   printf("Enter the size of the array : ");
   scanf("%d" , &size);
   int array[size];
 
  printf("enter %d numbers : \n" , size);
   for( i=0; i<size;i++) {
       printf("Enter number %d : " , i+1);
       scanf("%d" , &array[i]);
       total+=array[i];
   }

       printf(" the sum of the array elements is %d " , total);
    return 0;
}