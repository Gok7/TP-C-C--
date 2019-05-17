/* 
 * File:   Class_C_VECTEUR.cpp
 * Author: ZOMBYY
 * 
 * Created on 12 septembre 2013, 08:20
 */

#include "Class_C_VECTEUR.h"
#include <stdio.h>
#include <math.h>

C_VECTEUR::C_VECTEUR(float P_X, float P_Y, float P_Z) 
{
    X = P_X;
    Y = P_Y;
    Z = P_Z;
}


void C_VECTEUR::Affiche_Toi()const {

    printf("(%g,%g,%g)\n", this->X, this->Y, this->Z);
}

void C_VECTEUR::Mise_A_Zero() {

    this->X = this->Y = this->Z = 0;
}

void C_VECTEUR::Initialise_Toi(float P_X, float P_Y, float P_Z) {

    this->X = P_X;
    this->Y = P_Y;
    this->Z = P_Z;
}

void C_VECTEUR::Initialise_Toi() {

    this->X = 0;
    this->Y = 0;
    this->Z = 0;
}

void C_VECTEUR::Grandir(float Taille) {

    this->X += Taille;
    this->Y += Taille;
    this->Z += Taille;
}

void C_VECTEUR::Grandir(const C_VECTEUR& P_vecteur) {

    this->X += P_vecteur.X;
    this->Y += P_vecteur.Y;
    this->Z += P_vecteur.Z;
}

void C_VECTEUR::Debug() {

    printf("C_VECTEUR : %X , X : %g, Y: %g, Z: %g",
            this, this->X, this->Y, this->Z);
}

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