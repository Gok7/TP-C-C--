/* 
 * File:   C_LISTE_TRANSITION.cpp
 * Author: ZOMBYY
 * 
 * Created on 10 octobre 2013, 08:57
 */
#include "C_TRANSITION.h"
#include "C_LISTE_TRANSITION.h"
#include <vector>

void C_LISTE_TRANSITION::Ajoute(C_TRANSITION* P_transition)
{
    Liste_transition.push_back(P_transition);
}


void C_LISTE_TRANSITION::Reagis_avec(char P_condition){
    
    
    vector<C_TRANSITION*>::iterator L_Element;

    for (L_Element = this->Liste_transition.begin(); L_Element != this->Liste_transition.end(); ++L_Element) {
        (*L_Element)->Reagis_avec(P_condition);
    }
}