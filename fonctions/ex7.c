#include <string.h>
#include <stdio.h>
void inverser_chaine(char word[]) {
    int init=0;
    int end=strlen(word) - 1;
    char store;

    while(init<end) {
        store=word[init];
        word[init]=word[end];
        word[end]=store;
        init++;
        end--;

    }
}
int main() {
    char word[8]="bonjour";
    inverser_chaine( word);
    printf(" word after : %s\n", word);

    return 0;
}