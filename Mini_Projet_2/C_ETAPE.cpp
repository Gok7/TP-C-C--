/* 
 * File:   C_ETAPE.cpp
 * Author: ZOMBYY
 * 
 * Created on 9 octobre 2013, 17:18
 */

#include "C_ETAPE.h"
#include <iostream>

C_ETAPE::C_ETAPE(int P_ID, const string& P_Message, bool P_Etat)
:ID(P_ID), Message(P_Message), Est_active(P_Etat) {

    
}


bool C_ETAPE::Es_tu_active(){
    return Est_active;
}

void C_ETAPE::Active_toi(){
    Est_active=true;
    cout<<Message<<endl;
}

void C_ETAPE::Desactive_toi(){
    Est_active=false;
}