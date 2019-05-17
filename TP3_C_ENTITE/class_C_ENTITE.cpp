/* 
 * File:   class_C_ENTITE.cpp
 * Author: ZOMBYY
 * 
 * Created on 12 septembre 2013, 14:38
 */

#include "class_C_ENTITE.h"

void C_ENTITE::Positionne_Toi(float P_X, float P_Y, float P_Z) {
    X = P_X;
    Y = P_Y;
    Z = P_Z;
}

void C_ENTITE::Initialise_Deplacement(float P_cap_X, float P_cap_Y, float P_cap_Z) {
    capacite_X = P_cap_X;
    capacite_Y = P_cap_Y;
    capacite_Z = P_cap_Z;
}

void C_ENTITE::Affiche_Position() {
    printf("(%g,%g,%g)\n", X, Y, Z);
}

void C_ENTITE::Deplace_Toi() {
    X += capacite_X;
    Y += capacite_Y;
    Z += capacite_Z;
        Reagir_au_Bord();

}

float C_ENTITE::Donne_Distance() {

    return sqrt(pow(X, 2) + pow(Y, 2) + pow(Z, 2));
}
