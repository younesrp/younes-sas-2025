#include<stdio.h>
#include<string.h>
struct cercle{
    char couleur[20];
    float rayon;
    float aire;
};
struct cercle createcercle(char couleur[], float rayon){
    struct cercle c;
    strcpy(c.couleur, couleur);
    c.rayon = rayon;
    c.aire = 3.14 * rayon * rayon;
    return c;
}
int main (){
    struct cercle mycercle = createcercle("rouge", 5.0);
    printf("couleur : %s\nrayon : %.2f\naire : %.2f\n", mycercle.couleur,mycercle.rayon,mycercle.aire);
    return 0;
    
}
