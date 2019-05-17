#include <stdio.h>
#include <conio.h>

int tableau[10];

typedef struct T_MAILLON {
    int Data;
    T_MAILLON* Suivant;
} T_MAILLON;

T_MAILLON* Debut_Liste = NULL;
T_MAILLON* Fin_Liste = NULL;

void Affiche_Liste() {
    T_MAILLON* L_Maillon_Courant;
    L_Maillon_Courant = Debut_Liste;

    while (L_Maillon_Courant != NULL) {
        printf("%d  ",L_Maillon_Courant->Data);
        L_Maillon_Courant = L_Maillon_Courant->Suivant;
    }
    printf("Fin liste chainee\n");
}

void Affiche_un_Maillon(T_MAILLON* P_Maillon) {
    printf("Adresse maillon : %p ",P_Maillon);
    if (P_Maillon != NULL) {
        printf("Valeur : %d ",P_Maillon->Data);
        printf("Adresse maillon suivant :  \n",P_Maillon->Suivant);
        Affiche_un_Maillon(P_Maillon->Suivant);
    }
}

void Supprimer_Liste() {
    T_MAILLON* L_Maillon_Suivant;

    while (Debut_Liste != NULL) {
        L_Maillon_Suivant = Debut_Liste->Suivant;
        delete Debut_Liste;
        Debut_Liste = L_Maillon_Suivant;
    }
}

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

void Initialisation(){
        int i=0;
        for(i=0;i<10;i++){
                tableau[i]=0;
        }
}

void Saisi(){
        int i=0;
        printf("Veuillez saisir 3 nombres \n");
        for(i=0;i<3;i++){
                printf("\nNombre %d : ",i+1);
                fflush(stdin);
                scanf("%d",&tableau[i]);
        }
}

void Transfert_chaine(){
        int i=0;
        for(i=10;i>=0;i--){
                Ajoute_Au_Debut(tableau[i]);
        }
}

void Affiche_tableau(){
        int i=0;
        for(i=0;i<10;i++){
                printf(" %d ",tableau[i]);
        }
        printf("Fin tableau");
}

int main(int argc, char** argv) {
        Initialisation();
        Saisi();
        Transfert_chaine();
        Affiche_Liste();
        Affiche_tableau();

    getch();

}


