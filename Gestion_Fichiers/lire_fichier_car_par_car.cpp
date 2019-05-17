#include <stdio.h>
#include <conio.h>
#pragma hdrstop
#pragma argused

int main(int argc, char** argv) {
        char nomfich[20];
        char car;
        int fin;
        FILE *desc;
        int pb_fichier;
        fin=0;
        do{
                printf("Tapez le chemin et le nom du fichier a lire : ");
                fflush(stdin);
                gets(nomfich);
                desc=fopen(nomfich,"r");
                if(desc==NULL){
                        printf("Probleme d'ouverture du fichier\n");
                        pb_fichier=1;
                        getch();
                }
                else{
                        pb_fichier=0;
                }
        }while(pb_fichier==1);

        //lecture
        do{
                fread(&car,1,1,desc);
                if(feof(desc)!=0){      fin=1; }
                else{ printf("%c",car);}
        }while(fin!=1);

        fclose(desc);
        printf("\nAffichage du fichier termine. ");
        getch();

}


