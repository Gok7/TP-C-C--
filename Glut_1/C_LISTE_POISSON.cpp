/* 
 * File:   C_LISTE_POISSON.cpp
 * Author: ZOMBYY
 * 
 * Created on 17 octobre 2013, 10:47
 */
#include "C_POISSON.h"
#include "C_LISTE_POISSON.h"
#include <vector>
#include <GL/glu.h>
#define DEBUG_C_LISTE_POISSON

#ifdef DEBUG_C_LISTE_POISSON
#include <iostream>
using namespace std;
#endif

C_LISTE_POISSON::C_LISTE_POISSON() {
    
}

C_LISTE_POISSON::~C_LISTE_POISSON() {

}

void C_LISTE_POISSON::Ajoute(C_POISSON* P_Poisson) {
#ifdef DEBUG_C_LISTE_POISSON
    cerr << __PRETTY_FUNCTION__ << endl;
#endif
    Les_Poissons.push_back(P_Poisson);
}

void C_LISTE_POISSON::Affiche_toi() {

    float L_X, L_Y, L_Z;
    for (auto& L_Poisson : Les_Poissons) {
        L_Poisson->Get_Position(L_X, L_Y, L_Z);
        cout << Les_Poissons[Index] << endl;
    }
}

void C_LISTE_POISSON::Set_Espace(C_ESPACE* P_Espace){
    
    Espace=P_Espace;
    
}