#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int Saisir_valeur(){
        int L_input;
        printf("Veuillez entrer une valeur : ");
        scanf("%d",&L_input);
        return L_input;
}

void fonction_a(int P_code){
        int L_code;
        L_code=2734;
        if(P_code==L_code){
                printf("Code bon\n");
        }
        else{
                printf("Erreur\n");
                printf("Le programme va se fermer dans 3 secondes\n");
                Sleep(3000);
                exit(1);
        }

}

int fonction_c(int P_code){
        int L_code,L_compteur;
        L_code=2734;
        L_compteur=5;
        do{
                if(P_code==L_code){
                      printf("Code bon\n");
                       L_compteur=0;
                  }
                   else{
                          L_compteur--;
                           printf("Mauvais code. Il vous reste %d essais\n",L_compteur);

                    }
                     P_code=Saisir_valeur();
        }while(L_compteur>1);
        if(L_compteur<=1){
                printf("Erreur\n");
                printf("Le programme va se fermer dans 3 secondes\n");
                Sleep(3000);
                exit(1);
        }
}

void fonction_impaire(int P_valeur){
        int somme,valeur,compteur;
        compteur=1,somme=0;valeur=1;
        while(compteur<=P_valeur){
        printf("%d\n",valeur);
                somme=somme+valeur;
                valeur+=2;
                compteur++;
        }
        printf("La somme des %d premiers entiers est de %d\n",P_valeur,somme);
}

void aff_bit(){
        int numero_bit,masque,valeur_bit,valeur_dec;
        numero_bit=0,masque=0,valeur_dec=0,valeur_bit=0;


        printf("Donner une valeur entiere comprise entre -2147483648 et +2147483647\n");
        scanf("%d",&valeur_dec);

        do{
                printf("Donner un numero de bit entre 0 et 31\n");
                scanf("%d",&valeur_bit);
        }while((valeur_bit<=0)&&(valeur_bit>31));

        masque=valeur_dec>>numero_bit;
        valeur_bit=masque& 0x01;
        printf("Numero du bit : %d\n Valeur decimale : %d\nValeur du bit : %d\n ",numero_bit,valeur_dec,valeur_bit);
}

void main()
{
        aff_bit();
        getch();
}


