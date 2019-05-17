/* 
 * File:   class_C_CHAINE.cpp
 * Author: ZOMBYY
 * 
 * Created on 12 septembre 2013, 10:40
 */

#include "class_C_CHAINE.h"

void C_CHAINE::Initialise_avec(char P_Caractere, int P_Nombre) {

     if (P_Nombre > 254)  P_Nombre=254;
        memset(Data, P_Caractere, P_Nombre);
        Taille = P_Nombre;

}

void C_CHAINE::Debug() {

    printf("C_CHAINE : %X, Taille : %d, Texte : %s \n",
            this, this->Taille, this->Data);
}

void C_CHAINE::Affiche_Toi() {

    printf("%s\n", &Data);

}

void C_CHAINE::Ajoute_Caractere(char P_Caractere) {

    if (Taille < 255) {

        Data[Taille] = P_Caractere;
        Data[Taille + 1] = '\0';
        Taille++;
    }
}



