#include <stdio.h>
#include <conio.h>

char tab_bin[32];
char tab_hex[8];

void initialisation(){
        int compteur;
        for(compteur=0;compteur<32;compteur++){
        tab_bin[compteur]=0;
        }
        for(compteur=0;compteur<8;compteur++){
        tab_hex[compteur]=0;
        }
}

int Saisi_valeur(){
        int valeur=0;
        printf("Veuillez entrer une valeur : ");
        scanf("%d",&valeur);
        return valeur;
}

void conversion(int P_valeur){
        int L_compteur=0,resultat=0,j=0;
        char reference_hex[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
        int hexa=0;
        for(L_compteur=0;L_compteur<32;L_compteur++){
                resultat=P_valeur%2;
                P_valeur/=2;
                tab_bin[L_compteur]=resultat;
                }
        for(L_compteur=0,j=0;L_compteur<32;L_compteur++,j+=4){   // conversion hexa methode 4 bit

                resultat+=((tab_bin[L_compteur]%2)*2*L_compteur);
                tab_hex[L_compteur]=reference_hex[resultat];
                }    
}

void Affichage(P_valeur){
        int L_compteur;
        for(L_compteur=31;L_compteur>=0;L_compteur--){
                printf("%d",tab_bin[L_compteur]);
                }
                printf("\n");     /*
        for(L_compteur=8;L_compteur>=0;L_compteur--){
                printf("%c",tab_hex[L_compteur]);
                }                          */

}

void main(){

        int valeur=0;
        int binaire,hexa;
        initialisation();
        valeur = Saisi_valeur();
        conversion(valeur);
        Affichage(valeur);

getch();
}
 