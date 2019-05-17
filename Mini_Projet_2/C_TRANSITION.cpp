/* 
 * File:   C_TRANSITION.cpp
 * Author: ZOMBYY
 * 
 * Created on 9 octobre 2013, 17:45
 */

#include "C_TRANSITION.h"
#include <iostream>
using namespace std;

C_TRANSITION::C_TRANSITION(C_ETAPE* Precedente, char P_condition, C_ETAPE* Suivante){
    Condition=P_condition;
    Etape_suivante=Suivante;
    Etape_precedente=Precedente;
}

void C_TRANSITION::Reagis_avec(char P_car){
    
    
    if(P_car==Condition){
        Etape_precedente->Desactive_toi();
        Etape_suivante->Active_toi();
        cout<<Etape_suivante<<endl;
    }
}