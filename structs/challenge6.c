#include<stdio.h>
#include<string.h>
struct produit{
    char nom[20];
    float prix;
    int quantite;
};
struct produit createproduit(char nom[], float prix, int quantite){
    struct produit p;
    strcpy(p.nom, nom);
    p.prix = prix;
    p.quantite = quantite;
    return p;
}
int main (){
    struct produit myproduit = createproduit("lait", 12.5, 2);
    printf("nom : %s\nprix : %.2f\nquantite : %d\n", myproduit.nom,myproduit.prix,myproduit.quantite);
    return 0;
    
}
