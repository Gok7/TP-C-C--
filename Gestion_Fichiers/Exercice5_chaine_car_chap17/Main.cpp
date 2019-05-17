#include "header.h"

char Input,chaine1[20],chaine2[60];
int taille,i;

void Saisi() {
    fflush(stdin);
    fgets(chaine1, 18, stdin);
    strtok(chaine1,"\n");
}

int main(int argc, char** argv) {

    printf("Veuillez entrer votre prenom : ");
    Saisi();
    strncat(chaine2, chaine1,1);
    printf("Avez vous un 2eme prenom ? : (y/n)");
    Saisi();
    if (chaine1[0] == 'y' || chaine1[0] =='Y') {
        printf("2eme prenom : ");
        Saisi();
        strcat(chaine2, ". ");
        strncat(chaine2, chaine1,1);
    }
    printf("Nom : ");
    Saisi();
    strcat(chaine2, ". ");
    strcat(chaine2, chaine1);
    taille=strlen(chaine2);
    for(i=0;i<taille;i++){
        chaine2[i]=toupper(chaine2[i]);
    }
    
    printf("La chaine : %s\n", chaine2);

    return 0;
}

