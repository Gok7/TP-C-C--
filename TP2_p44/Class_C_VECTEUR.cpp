/* 
 * File:   Class_C_VECTEUR.cpp
 * Author: ZOMBYY
 * 
 * Created on 12 septembre 2013, 08:20
 */

#include "Class_C_VECTEUR.h"

void C_VECTEUR::Affiche_Toi() {

    printf("(%g,%g,%g)", this->X, this->Y, this->Z);
}

void C_VECTEUR::Mise_A_Zero() {

    this->X = this->Y = this->Z = 0;
}

void C_VECTEUR::Initialise_Toi(float P_X, float P_Y, float P_Z) {

    this->X = P_X;
    this->Y = P_Y;
    this->Z = P_Z;
}


void C_VECTEUR::Debug() {

    printf("C_VECTEUR : %X , X : %g, Y: %g, Z: %g",
            this, this->X, this->Y, this->Z);
}









