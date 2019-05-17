#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#define Nb_ligne 10
#define Nb_car_ligne 20
                             /*
void Init(){
        int i=0;
        int j=0;            
        for(i=0;i<Nb_ligne;i++){
                for(j=0;i<Nb_car_ligne;j++){
                        tableau[i][j]='\0';
                }
        }
}                     */

void Affichage(char* P_tab[],int P_nb_chaine){
        int i=0;           
        for(i=0;i<P_nb_chaine[0];i++){
                puts(P_tab[i]);
        }
}

char Saisi(char* P_tab[],char* P_nb_chaine[]){
        int i=0;
        printf("Entrez le nombre de chaines voulu : ");
        while(P_nb_chaine[0]<0x30 || P_nb_chaine[0]>0x39){
                 fflush(stdin);
                 fgets(P_nb_chaine,3,stdin);
                 if(P_nb_chaine[0]<0x30 || P_nb_chaine[0]>0x39){
                        printf("Erreur entre 1 et 7 chaine : ");
                 }
        }
        P_nb_chaine[0]=atoi(P_nb_chaine); 
        
        while(i<P_nb_chaine[0]){
                printf("Chaine %d : ",i+1);
                fflush(stdin);
                fgets(P_tab[i],18,stdin);
                i++;
        }
}
                   /*
void Animation(){
        int i=0;
        while(!kbhit()){
                for(i=0;i<nb_chaine[0];i++){
                        gotoxy(30,20);
                        textcolor(RED);
                        cputs(tableau[i]);
                        Sleep(1000);
                        clrscr();
                }
        }
}                   */
                        

void Menu(char* P_tab[],char* P_nb_chaine[]){
        char choix[4];
        int fin=0;
        do{
                printf("1 - Saisies de chaines de caracteres\n");
                printf("2 - Affichage des chaines de caracteres\n");
                printf("3 - Lancement de l'animation\n");
                printf("4 - Arret du programme\n");
                fflush(stdin);
                fgets(choix,3,stdin);
                 switch (choix[0]){
                        case '1': Saisi(P_tab,P_nb_chaine);
                        break;
                        case '2': Affichage(P_tab,P_nb_chaine);
                        break;
                        case '3': Animation();break;
                        case '4': fin=1;break; 
                        default : printf("Saisir une valeur entre 1 et 4 : \n");
                        break;
                }
        }while(fin!=1);
}

int main(int argc, char* argv[])
{
        char tableau[Nb_ligne][Nb_car_ligne];
        char nb_chaine[5];
        Menu(tableau,&nb_chaine);

}
