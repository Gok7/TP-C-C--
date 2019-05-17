#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define Nombre_de_notes 5

//******************************************************************************
float tableau[Nombre_de_notes];
//******************************************************************************
void Max_Min(){
    float L_max=0,L_min=0;
    int L_compteur=0;
    for(L_compteur=0;L_compteur<Nombre_de_notes;L_compteur++){
        if(tableau[L_compteur]>L_max){
            L_max=tableau[L_compteur];
        }
        else if(tableau[L_compteur]<L_min){
            L_min=tableau[L_compteur];
        }
    }
    printf("La valeur max est : %f",L_max);
    printf("La valeur min est : %f",L_min);

}

void Saisir_Valeurs(){
    int compteur=0;
    printf("Veuillez entrer %d notes : ",Nombre_de_notes);
    for(compteur=0;compteur<Nombre_de_notes;compteur++){
        do{
            printf("note no %d : ",compteur+1);
            scanf("%f",tableau[compteur]);
            if(tableau[compteur]<0){ 
                printf("Erreur");
            }
        }while(tableau[compteur]<0);
    }
}

float Calcul(){
        
    float somme=0,L_moyenne;
    int L_compteur=0;
    for(L_compteur=0;L_compteur<Nombre_de_notes;L_compteur++){
           
        somme+=tableau[L_compteur];

    }
    L_moyenne=somme/L_compteur;
    return L_moyenne;
    
}


int main(int argc, char** argv) {
       float L_moyenne=0;
    Saisir_Valeurs();
    L_Moyenne=Calcul();
   
    Max_Min();
    return 0;

}

