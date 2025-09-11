#include <stdio.h> 
int main()  {
    int size=5;
    int array[5]={1,2,3,4,5};
    int i=0;
    int j=4;
    int temp;

    while(j>i) {

     temp=array[i];
     array[i]=array[j];
     array[j]=temp;
     i++;
     j--;
} 

for(i=0;i<5;i++) {
   printf("%d " , array[i] );
  }
    return 0;
}