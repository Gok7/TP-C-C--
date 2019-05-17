/* 
 * File:   C_LISTE.cpp
 * Author: ZOMBYY
 * 
 * Created on 10 octobre 2013, 08:32
 */

#include "C_LISTE_ETAPE.h"
#include "C_ETAPE.h"
#include <vector>

C_LISTE_ETAPE::~C_LISTE_ETAPE() {

    vector<C_ETAPE*>::iterator L_Element;

    for (L_Element = this->Liste_Etapes.begin(); L_Element != this->Liste_Etapes.end(); ++L_Element) {
        delete *L_Element;
    }
}

void C_LISTE_ETAPE::Ajoute(C_ETAPE* P_Etape) {
    Liste_Etapes.push_back(P_Etape);
}



