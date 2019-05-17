#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(){
        char texte[80];
        char *p_adresse;
        printf("Veuillez entrer un texte");
        gets(texte);
        do{
                p_adresse=strchr(texte,'e');
                if(p_adresse!=NULL){
                        strcpy(p_adresse,p_adresse+1);
                }
        }while(p_adresse!=NULL);
        printf("%s",texte);
getch();
} 

