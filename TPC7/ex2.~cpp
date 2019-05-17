#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(){
        char texte[31];
        int longueur,sup,inf,i;
        char tempo;
        for( i=30;i>=0;i--){
                texte[i]='\0';
        }
        printf("Veuillez entrer un texte : \n");
        gets(texte);
        longueur=strlen(texte);
            /*
        for(i=longueur-1;i>=0;i--){
                printf("%c",texte[i]);
        }    */
        for (int L_index_gauche = 0, L_index_droite = longueur-1; L_index_gauche != L_index_droite; L_index_gauche++, L_index_droite--) {
        tempo = texte[L_index_gauche]; //etape 1
        texte[L_index_gauche] = texte[L_index_droite]; //etape 2
        texte[L_index_droite] = tempo; //etape 3
         }
         puts(texte);
getch();
} 
 
