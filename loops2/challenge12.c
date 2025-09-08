#include <stdio.h>
#include <math.h>

int main() {
    
    int number;
    int sum=0;
    int count=0;
  
  while (1) {
      
      printf("Entez votre nombre : ");
      scanf("%d" , &number);
      if (number>0) {
            sum+=number;
            count++;
      }
      

      else if(number<=0) {
          break;
      }   
      
  }

   printf("le totale est : %d" , sum/count);     
    
    return 0;
}