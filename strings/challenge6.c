#include <stdio.h> 
#include <string.h>
int main()  {
 char string[10];
char letter;
int count=0;

  printf("Enter a random string : \n");
  fgets(string,10,stdin);
  
  printf("Enter a letter : ");
  scanf(" %c" ,&letter );


  for(int i=0;i<10;i++)  {

    if(letter==string[i]) {
        count++;
    
    }


  }
  printf("letter %c exists %d times in the array", letter , count );


    return 0;
}