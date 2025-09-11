#include<stdio.h>
#include<string.h>
struct livre {
    char titre[50];
    char auteur[50];
    int annee;
};
struct livre creatbook(char titre[], char auteur[], int annee){
    struct livre b;
    strcpy(b.titre, titre);
    strcpy(b.auteur, auteur);
    b.annee = annee;
    return b;
}
int main (){
    struct livre mybook = creatbook("la boite a merveille", " ahmed sefrioui",2003);
    printf("titre : %s\nauteur : %s\nannee : %d\n", mybook.titre,mybook.auteur,mybook.annee);
    return 0;
    
}
