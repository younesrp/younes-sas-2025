#include<stdio.h>
int main(){
    float a, b, c, d, e ;
    printf("entrez les notes : ");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);
    scanf("%f", &e);
    float total;
    float moyenne;
     if (a>b&&a>c&&a>d&&a>e){
        printf("la plus haute notes est : %f\n ", a);
    }else if(b>a&&b>c&&b>d&&b>e){
        printf("la plus haute notes est : %f\n", b);
    }else if(c>a&&c>b&&c>d&&c>e){
        printf("la plus haute notes est : %f\n", c);
    }else if(d>a&&d>b&&d>c&&d>e){
        printf("la plus haute notes est : %f\n ", d);
    }else if(e>a&&e>c&&e>d&&e>b){
        printf("la plus haute notes est : %f\n ", e);
    }  

    if (a<b&&a<c&&a<d&&a<e){
        printf("la note la plus basse : %f\n ", a);
    }else if(b<a&&b<c&&b<d&&b<e){
        printf("la note la plus basse : %f\n ", b);
    }else if(c<b&&c<b&&c<d&&c<e){
        printf("la note la plus basse : %f\n ", c);
    }else if(d<b&&d<c&&d<a&&d<e){
        printf("la note la plus basse : %f\n ", d);
    }else if(e<b&&e<c&&e<d&&e<a){
        printf("la note la plus basse : %f\n ", e);
    }
    printf("le totale des notes est : %f\n",total=a+b+c+d+e);
    printf("la moyenne est : %f\n",moyenne=total/5 );
 
  
    if (moyenne>=50){
        printf("vous avez reussi\n");
    }
    else{
         printf("vous avez echoue\n");
    }
    if (moyenne<60){
        printf("votre mentien est : F :echec");
        return 0;
    }
    else if (moyenne>=60 && moyenne<=69){
        printf("votre mentien est : D : passable");
        return 0;
    }
    else if (moyenne>=70 && moyenne<=79){
        printf("votre mentien est : C : bien");
        return 0;
    }
    else if (moyenne>=80 && moyenne<=89){
        printf("votre mentien est : B : trés bien");
        return 0;
    }
    else if (moyenne>=90){
        printf("votre mentien est : A : excellent");
        return 0;
    }
   
    return 0;
}