#include <stdio.h>
int Calculmontant(float Plat,float Boisson,float Dessert,int NombreInvite){
    float Montant;
    Montant = (Plat + Boisson + Dessert) * NombreInvite;
    return Montant;
}

int main(){
    int NombreInvite;
    float Plat;
    float Boisson;
    float Dessert;
    int Plats;
    int Boissons;
    int Desserts;
    float Montant;

    printf("quelle est le nombre d'invite?:");
    scanf(" %d", &NombreInvite);
    getchar();
    if (NombreInvite > 0 && NombreInvite <=2){
        printf("votre numéro de table est 1.\n");
    }
    else if (NombreInvite > 2 && NombreInvite <= 4){
        printf("votre numéro de table est 2.\n");
    }
    else if (NombreInvite >= 4 && NombreInvite <= 8){
        printf("votre numéro de table est 3.\n");
    }
    else{
        printf("le restaurant ne peut pas les recevoirs\n");
        return 0;
    }

    printf("Voici notre menu :\n "
           "Plats:\n"
           "'c' : coucous, 15$\n"
           "'t' : tomates, 8$\n"
           "'r' : risotto, 23$\n"
           "Boissons:\n"
           "'s': soda, 5$\n"
           "'e': eau, 2$\n"
           "'l' : limonade, 12$\n"
           "Desserts:\n"
           "'t': tiramisu, 62$\n"
           "'g': glace, 3$\n"
           "'m': macaron, 8$\n");
    printf("Choisissez le plat que vous désirez puis la boisson et le dessert.\n");
    scanf(" %c", &Plats);
    getchar();
    scanf(" %c", &Boissons);
    getchar();
    scanf(" %c", &Desserts);
    getchar();

    if ( Plats == 'c' ) {
        Plat = 15;}
    else if ( Plats == 't') {
        Plat = 8;}
    else {
        Plat = 23;
    }

    if ( Boissons == 's' ) {
        Boisson = 5;
    } else if ( Boissons == 'e' ) {
        Boisson = 2;
    } else {
        Boisson = 12;
    }


    if ( Desserts == 't' ) {
        Dessert = 62 ;
    } else if ( Desserts == 'g' ) {
        Dessert = 3 ;
    } else {
        Dessert = 8 ;
    }
    printf("le montant à payer pour une table  est de  %.2f $:\n", Calculmontant(Plats,Boissons,Desserts,NombreInvite));

    return 0;
}
