#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#pragma hdrstop
#pragma argused

typedef struct{
        char Nom[20];
        char Ville[20];
        int Age[4];
}INFO;

void Creation_fichier(){
        char tampon[20],nomfich[20];
        int pb_fichier,i,taille;
        INFO bloc;
        FILE *desc;
        for(i=0;i<20;i++){
                bloc.Nom[i]=' ';
                bloc.Ville[i]=' ';
        }
        do{
                strcpy(nomfich,"C:\\exo1.txt");
                printf("Nom du fichier dans lequel on veut ecrire : %s\n",nomfich);
                desc=fopen(nomfich,"a");
                if(desc==NULL){
                        printf("Probleme d'ouverture du fichier\n");
                        pb_fichier=1;
                        getch();
                }
                else pb_fichier=0;

        }while(pb_fichier==1);
        
        printf("NOM : ");
        fflush(stdin);
        fgets(bloc.Nom,18,stdin);

        printf("VILLE : ");
        fflush(stdin);
        fgets(bloc.Ville,18,stdin);

        printf("Age : ");
        fflush(stdin);
        scanf("%d",&bloc.Age);
        
        fwrite(&bloc,sizeof(INFO),1,desc);
        fclose(desc);

}

void Affichage_fichier(){
        char nomfich[20];
        char car;
        int pb_fichier,fin=0;;
        FILE *desc;
        do{
                strcpy(nomfich,"C:\\exo1.txt");
                printf("Nom du fichier dans lequel on veut lire : %s\n",nomfich);
                desc=fopen(nomfich,"r");
                if(desc==NULL){
                        printf("Probleme d'ouverture du fichier\n");
                        pb_fichier=1;
                        getch();
                }
                else pb_fichier=0;

                do{
                        fread(&car,1,1,desc);
                        if(feof(desc)!=0){      fin=1; }
                        else{ printf("%c",car);}
                }while(fin!=1);
                
        printf("\nAffichage du fichier termine. ");
        fclose(desc);
        getch();
        }while(pb_fichier==1);
}

void Recherche(){
        char nom[20];
        char nomfich[20];
        char car;
        int pb_fichier,fin=0;;
        FILE *desc;
        
        printf("Veuillez Saisir le nom : ");
        fgets(nom,18,stdin);

        do{
                strcpy(nomfich,"C:\\exo1.txt");
                printf("Nom du fichier dans lequel on veut lire : %s\n",nomfich);
                desc=fopen(nomfich,"r");
                if(desc==NULL){
                        printf("Probleme d'ouverture du fichier\n");
                        pb_fichier=1;
                        getch();
                }
                else pb_fichier=0;

                do{
                        fread(&car,1,strlen(nom),desc);
                        if(feof(desc)!=0){      fin=1; }
                        else{ printf("%c",car);}
                }while(fin!=1);
                
        printf("\nRecherche termine. ");
        fclose(desc);
        getch();
        }while(pb_fichier==1);
 }


int main(int argc, char** argv) {
        char car,*p;
        int fin=0,curseur_position,choix=0;
        char tampon[20];

        do{
                system("CLS");
                printf("1-Creation ou mise a jour d'un fichier\n");
                printf("2- Affichage du contenu d'un fichier\n");
                printf("3- Recherche d'un enregistrement par son numero\n");
                printf("4- Recherche d'un enregistrement par le nom\n");
                printf("5- Arret du programme\n");
                fflush(stdin);
                fgets(tampon,2,stdin);
                choix=atoi(tampon);
                switch(choix){
                        case 1:Creation_fichier();
                        break;
                        case 2:Affichage_fichier();
                        break;   /*
                        case 3:
                        break;   */
                        case 4:
                        break;
                        case 5: printf("Fin du programme...");getch();
                        break;
                };

        }while(choix!=5);
}
