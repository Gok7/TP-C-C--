/* 
 * File:   class_C_CHAINE.cpp
 * Author: ZOMBYY
 * 
 * Created on 12 septembre 2013, 10:40
 */

#include "class_C_CHAINE.h"
#include <string.h>
#include <iostream>
using namespace std;

C_CHAINE::C_CHAINE(const char* P_message) {

    this->Initialise_toi(P_message);

}

C_CHAINE::C_CHAINE(char P_car, int P_nombre) {

    Initialise_toi(P_car, P_nombre);

}

void C_CHAINE::Initialise_toi(char P_car) {

    Taille = 1;
    Data[0] = P_car;
    Data[Taille] = 0;
}

void C_CHAINE::Initialise_toi(char P_Caractere, int P_Nombre) {

    if (P_Nombre > 254) P_Nombre = 254;
    memset(Data, P_Caractere, P_Nombre);
    Taille = P_Nombre;
    Data[Taille] = 0;
}

void C_CHAINE::Initialise_toi(const char* P_message) {

    Taille = strlen(P_message);
    if (Taille > 254) Taille = 254;
    memcpy(Data, P_message, Taille);
    Data[Taille] = 0;
}

void C_CHAINE::Initialise_toi(char* P_message, int P_compteur) {


    Taille = strlen(P_message);
    char* ptr_to_data=Data;
    if (Taille > 254) Taille = 254;

    for (int L_index = 0; L_index < P_compteur; L_index++) {

        memcpy(ptr_to_data, P_message, Taille);
        ptr_to_data += Taille;
    }

    Taille = Taille*P_compteur;
    Data[Taille] = 0;

}

void C_CHAINE::Debug() {

    printf("C_CHAINE : %X, Taille : %d, Texte : %s \n",
            this, this->Taille, this->Data);
}

void C_CHAINE::Affiche_Toi() {

    cout << Data << endl;

}

void C_CHAINE::Ajoute_Caractere(char P_Caractere) {

    if (Taille < 255) {

        Data[Taille] = P_Caractere;
        Data[Taille + 1] = '\0';
        Taille++;
    }
}

