#include <stdio.h>

int main() {
   int i;
   int size;
   printf("Enter the size of the array : ");
   scanf("%d" , &size);
   int array[size];

  printf("enter %d numbers : \n" , size);
   for( i=0; i<size;i++) {
       printf("Enter number %d : " , i+1);
       scanf("%d" , &array[i]);
   }

   for(i=0; i<size; i++) {
       printf("%d " , array[i]);
   }
   return 0;
}