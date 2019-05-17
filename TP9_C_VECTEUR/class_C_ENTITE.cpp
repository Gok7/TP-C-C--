/* 
 * File:   class_C_ENTITE.cpp
 * Author: ZOMBYY
 * 
 * Created on 12 septembre 2013, 14:38
 */

#include "class_C_ENTITE.h"
#include <iostream>
using namespace std;

unsigned int ID_Global = 0;

void Affichage_debug(C_ENTITE* P_entite) {
    printf("%X (X : %g,Y : %g,Z : %g) (VX : %g,VY : %g,VZ : %g)\n",
            P_entite, P_entite->X, P_entite->Y, P_entite->Z,
            P_entite->capacite_X, P_entite->capacite_Y, P_entite->capacite_Z);
}

unsigned int Donne_Nouvel_ID() {

    ID_Global++;
    return ID_Global;
}

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

float C_ENTITE::Get_Distance()const {

    return sqrt(pow(X, 2) + pow(Y, 2) + pow(Z, 2));
}

void C_ENTITE::Echange_x(float* P_x1,float* P_x2){
    
    float* L_X=P_x1;
    P_x1=P_x2;
    P_x2=L_X;
}

void C_ENTITE::Echange_x(C_ENTITE& P_entite_1,C_ENTITE& P_entite_2){
    
    float L_X=P_entite_1.X;
    P_entite_1.X=P_entite_2.X;
    P_entite_2.X=L_X;
}
