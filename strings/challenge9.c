#include <stdio.h>


int main() {
char string[100];
char updated[100];
int j=0;

printf("Enter a string with spaces : ");
fgets(string, 100, stdin);    

  for (int i = 0;string[i] != '\0'; i++) {
     if (string[i] != ' ') {
       updated[j] = string[i];

  j++;
  }
}
     printf("string without spaces  : %s", updated);
    return 0;
}