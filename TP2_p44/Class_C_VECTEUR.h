/* 
 * File:   Class_C_VECTEUR.h
 * Author: ZOMBYY
 *
 * Created on 12 septembre 2013, 08:20
 */

#ifndef CLASS_C_VECTEUR_H
#define	CLASS_C_VECTEUR_H

#include <stdio.h>
#include <math.h>

struct C_VECTEUR {
    
    float X,Y,Z;
    void Affiche_Toi();
    void Mise_A_Zero();
    void Initialise_Toi(float P_X,float P_Y,float P_Z);
    void Debug();
    inline float Calcul_Norme();
    inline void Inverse_Toi();
    inline void Inverse_X();
    inline void Inverse_Y();
    inline void Inverse_Z();
};

float C_VECTEUR::Calcul_Norme() {
    //norme= racine carré de la somme des carré.

    float L_Norme;
    L_Norme = sqrt(pow(this->X, 2) + pow(this->Y, 2) + pow(this->Z, 2));
    return L_Norme;
}

void C_VECTEUR::Inverse_Toi() {

    this->X = -this->X;
    this->Y = -this->Y;
    this->Z = -this->Z;
}

void C_VECTEUR::Inverse_X() {

    this->X = -this->X;
}

void C_VECTEUR::Inverse_Y() {

    this->Y = -this->Y;
}

void C_VECTEUR::Inverse_Z() {

    this->Z = -this->Z;
}
#endif	/* CLASS_C_VECTEUR_H */

