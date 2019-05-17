#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#pragma hdrstop
#pragma argused

int main(int argc, char** argv) {
        char nomfich[20];
        char car;
        int fin;
        int nb_octet;
        char *p;
        int index;
        
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
        printf("\nAffichage du fichier termine. ");

        fseek(desc,0,SEEK_SET);
        fseek(desc,0,SEEK_END);
        nb_octet=ftell(desc);

        printf("Nb d'octet du fichier= %d\n",nb_octet);

        p=(char*)malloc(nb_octet);
        fseek(desc,0,SEEK_SET);
        fread(p,nb_octet,1,desc);

        for(index=0;index<nb_octet;index++){
                printf("%c",p[index]);
        }
        free(p);
        fclose(desc);
        getch();

}


