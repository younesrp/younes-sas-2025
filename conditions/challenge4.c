#include<stdio.h>
#include<math.h>
float main(){
    float a;
    float b;
    float c;
    printf("entrez a et b et c : ");
    scanf("%f%f%f",&a , &b ,&c);
    float delta;
    delta = (b*b)-4*(a*c);
    if (delta>0){
        float x1;
        x1= (-b-sqrt(delta))/(2*a);
        float x2;
        x2=(-b+sqrt(delta))/(2*a);
        printf("Deux solutions réelles distinctes : x1 = %f, x2 = %f\n", x1, x2);
    }
    else if ( delta==0){
        float x;
        x = -b /(2*a);
        printf("Une solution double : x = %.2f " , x);
    }
    else{
        printf("Pas de solution réelle");
    }
    return 0;
}
