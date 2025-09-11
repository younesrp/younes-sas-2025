#include <stdio.h> 
int main()  {
   int array[8]={1,2,3,4,5,6,7,8};
   int NewArray[8];

   for(int i=0;i<8;i++) {
        NewArray[i]=array[i];
   }

   printf("The array elements are : ");
   for(int i=0;i<8;i++) {
    printf("%d " ,array[i]);
   }
   printf("\n");
   printf("The new array elements are : ");
    for(int i=0;i<8;i++) {
    printf("%d " ,NewArray[i]);
   }
    return 0;
}