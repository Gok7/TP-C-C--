#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#define Nb_ligne 10
#define Nb_car_ligne 20


using namespace std::
typedef struct T_MAILLON {
    char Data[20];
    T_MAILLON* Suivant;
} T_MAILLON;

T_MAILLON* Debut_Liste = NULL;
T_MAILLON* Fin_Liste = NULL;

char nb_chaine[5];

void Ajoute_Au_Debut(int P_Valeur) {

    T_MAILLON* L_Maillon = new T_MAILLON; //1 creation nouveau maillon
    if (Debut_Liste == NULL) {
        Fin_Liste = L_Maillon;
    }
    L_Maillon->Suivant = Debut_Liste; //2 chainer nouveau maillon avec le premier
    Debut_Liste = L_Maillon; //3 dire que le nouveau maillon est le premier
    L_Maillon->Data = P_Valeur; //4 initialiser le Data
  
}

void Ajoute_Fin(int P_Valeur) {
    if(Debut_Liste==NULL){
        Ajoute_Au_Debut(P_Valeur);
    }
    else{
        T_MAILLON* L_Nouveau= new T_MAILLON;
        Fin_Liste->Suivant=L_Nouveau;
        L_Nouveau->Suivant=NULL;
        L_Nouveau->Data=P_Valeur;
        Fin_Liste=L_Nouveau;
    }
}

void Affiche_Liste() {
    T_MAILLON* L_Maillon_Courant;
    L_Maillon_Courant = Debut_Liste;

    while (L_Maillon_Courant != NULL) {
        cout << L_Maillon_Courant->Data << " ";
        L_Maillon_Courant = L_Maillon_Courant->Suivant;
    }
    cout << "Fin liste" << endl;
}

void Saisi(){
        int i=0;
        tempo[20];
        printf("Entrez le nombre de chaines voulu : ");
        while(nb_chaine[0]<0x30 || nb_chaine[0]>0x39){
                 fflush(stdin);
                 fgets(nb_chaine,3,stdin);
                 if(nb_chaine[0]<0x30 || nb_chaine[0]>0x39){
                        printf("Erreur entre 1 et 7 chaine : ");
                 }
        }
        nb_chaine[0]=atoi(nb_chaine);  //ça marche !!!!!!!!!!!
        
        while(i<nb_chaine[0]){
                printf("Chaine %d : ",i+1);
                fflush(stdin);
                fgets(,18,stdin);
                i++;
        }
}
                      /*
void Animation(){
        int i=0;
        while(!kbhit()){
                clrscr();
                        gotoxy(30,20);
                        textcolor(RED);
                        cputs(Debut_Liste->);
                        Deb
                        Sleep(1000);
                }
        }
}                      */

void Menu(){
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
                        case '1': Saisi();
                        break;
                        case '2': Affichage();
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
        Menu();
}
