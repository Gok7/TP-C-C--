/* 
 * File:   main.cpp
 * Author: ZOMBYY
 *
 * Created on 12 septembre 2013, 08:16
 */


#include <cstdlib>
#include "Class_C_VECTEUR.h"
#include <stdio.h>

using namespace std;

C_VECTEUR Le_Vecteur;
C_VECTEUR Les_Vecteurs[10];

void Initialise_Tableau(C_VECTEUR* Ptr_Vecteur, int P_taille_tableau) {

    for (int L_index = 0; L_index < P_taille_tableau; L_index++) {

        Ptr_Vecteur->X = Ptr_Vecteur->Y = Ptr_Vecteur->Z = L_index;
        Ptr_Vecteur++;

    }
}

void Affiche_Tableau(C_VECTEUR* Ptr_Vecteur, int P_taille_tableau) {

    for (int L_index = 0; L_index < P_taille_tableau; L_index++) {

        printf("(%g,%g,%g)\n", Ptr_Vecteur->X, Ptr_Vecteur->Y, Ptr_Vecteur->Z);
        Ptr_Vecteur++;

    }
}

void Debug_tableau(C_VECTEUR* Ptr_Vecteur, int P_taille_tableau) {

    for (int L_index = 0; L_index < P_taille_tableau; L_index++) {

        printf("C_VECTEURS : %X , (%g,%g,%g)\n",
                Ptr_Vecteur, Ptr_Vecteur->X, Ptr_Vecteur->Y, Ptr_Vecteur->Z);
        Ptr_Vecteur++;
    }
}


void Affiche_Position(C_VECTEUR* Ptr_Vecteur) {

    printf("*** Position : \n");
    Ptr_Vecteur->Affiche_Toi();
           
}

int main(int argc, char** argv) {

    Le_Vecteur.Affiche_Toi();
    printf("\n");

    Le_Vecteur.Mise_A_Zero();
    Le_Vecteur.Affiche_Toi();
    printf("\n");

    Le_Vecteur.Debug();
    printf("\n");

    printf("*************\n");
    Initialise_Tableau(Les_Vecteurs, 10);
    Affiche_Tableau(Les_Vecteurs, 10);

    Debug_tableau(Les_Vecteurs, 10);
    
    Affiche_Position(&Les_Vecteurs[9]);
    return 0;
}

