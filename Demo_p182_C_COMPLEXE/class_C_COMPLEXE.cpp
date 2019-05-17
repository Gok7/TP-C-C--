/* 
 * File:   class_C_COMPLEXE.cpp
 * Author: ZOMBYY
 * 
 * Created on 11 septembre 2013, 16:30
 */
#undef __STRICT_ANSI__

#include "class_C_COMPLEXE.h"
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <iostream>
using namespace std;

char C_COMPLEXE::Caractere_Imaginaire = 'I';

void C_COMPLEXE::Initialise_Toi(float P_Reel, float p_Imaginaire, char P_Caractere_Imaginaire){

this->Reel = P_Reel;
this->Imaginaire = p_Imaginaire;
Module_Calcule = false;
Caractere_Imaginaire=P_Caractere_Imaginaire;
}


void C_COMPLEXE::Initialise_Toi() {

    this->Reel = 0;
    this->Imaginaire = 0;
    Module_Calcule = false;
}

void C_COMPLEXE::Affiche_Toi()const {

    cout << Reel;
    if (Imaginaire >= 0) cout << "+";
    cout << Imaginaire << Caractere_Imaginaire << endl;
}

C_COMPLEXE::C_COMPLEXE(float P_Reel, float P_Imaginaire)
: Reel(P_Reel), Imaginaire(P_Imaginaire), Module_Calcule(false)
 {
}

C_COMPLEXE::C_COMPLEXE(const char* P_Chaine) {

    if (P_Chaine) {
        char* L_Chaine = strdup(P_Chaine);

        char* L_Debut = L_Chaine;
        if (L_Chaine) {
            char* L_Courant;
            L_Courant = strtok(L_Chaine, "+-");
            Reel = atof(L_Courant);
            if (P_Chaine[0] == '-') Reel = -Reel;

            L_Courant = strtok(NULL, "JjIi");
            Imaginaire = atof(L_Courant);
            int L_Position_Separateur = L_Courant - L_Debut - 1;
            if (P_Chaine[L_Position_Separateur] == '-') Imaginaire = -Imaginaire;
            // free(L_Chaine);
            Module_Calcule = false;
        }
    }
}

void C_COMPLEXE::Set_Caractere_Imaginaire(const char P_Caractere) {

    char L_Caractere = toupper(P_Caractere);
    if ((L_Caractere == 'J') || (L_Caractere == 'I')) Caractere_Imaginaire = L_Caractere;
};


