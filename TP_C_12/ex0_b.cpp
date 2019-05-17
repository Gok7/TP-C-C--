#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#pragma hdrstop
#pragma argused

int main(int argc, char** argv) {
        char nomfich[20];
        char car;
        int fin;
        int nb_octet;
        char *p;
        int index;
        int curseur_position;
        FILE *desc;
        int pb_fichier;
        fin=0;
        do{
                printf("Tapez le chemin et le nom du fichier a lire : ");
                fflush(stdin);
                gets(nomfich);
                desc=fopen(nomfich,"r+");
                if(desc==NULL){
                        printf("Probleme d'ouverture du fichier\n");
                        pb_fichier=1;
                        getch();
                }
                else{
                        pb_fichier=0;
                }
        }while(pb_fichier==1);

        do{
                fread(&car,1,1,desc);
                if(feof(desc)!=0){      fin=1; }
                else{

                  if((car=='è')||(car=='é')){
                        car='e';
                        curseur_position=ftell(desc);
                        fseek(desc,curseur_position-1,SEEK_SET);
                        fwrite(&car,sizeof(char),1,desc);
                        fseek(desc,curseur_position,SEEK_SET);
                      }
                  }
        }while(fin!=1);
        printf("\nTermine. ");

        fclose(desc);
        getch();

}



