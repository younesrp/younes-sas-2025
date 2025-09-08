#include <stdio.h>
#include <math.h>

int main() {
    
    int number;
    int sum=0;
    int count=0;
  
  while (1) {
      
      printf("Enter a positive number : ");
      scanf("%d" , &number);
      if (number>0) {
            sum+=number;
            count++;
      }
      

      else if(number<=0) {
          break;
      }   
      
  }

   printf("the total meduim of total sum of %d" , sum/count);     
    
    return 0;
}