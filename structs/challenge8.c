#include<stdio.h>
#include<string.h>
struct cercle{
    float rayon;
    float aire;
};
struct cercle calculcercle( float rayon){
    struct cercle c;

    c.rayon = rayon;
    c.aire = 3.14 * rayon * rayon;
    return c;
}
int main (){
    struct cercle mycercle = calculcercle( 5.0);
    printf("rayon : %.2f\naire : %.2f\n",mycercle.rayon,mycercle.aire);
    return 0;
    
}
