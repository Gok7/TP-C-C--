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
        FILE *desc,*desc2;
        int pb_fichier;
        fin=0;
        int i=0;
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
                printf("Tapez le chemin et le nom du fichier a creer : ");
                fflush(stdin);
                gets(nomfich);
                desc2=fopen(nomfich,"w");
                if(desc2==NULL){
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
                         if((car=='�')||(car=='�'))  car='e';
                        fwrite(&car,sizeof(char),1,desc2);
                }
        }while(fin!=1);
        printf("\nTermine. ");
        fclose(desc2);
        fclose(desc);
        getch();

}



