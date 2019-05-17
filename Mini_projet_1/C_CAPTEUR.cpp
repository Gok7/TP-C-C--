/* 
 * File:   C_CAPTEUR.cpp
 * Author: ZOMBYY
 * 
 * Created on 9 octobre 2013, 14:03
 */

#include "C_CAPTEUR.h"
#include <iostream>
using namespace std;

C_CAPTEUR::T_ETAT C_CAPTEUR::Quel_est_ton_etat(){
    
    int L_Etat;
    
    cout <<"capteur : "<<endl;
    cin>>L_Etat;
    
    return T_ETAT(L_Etat);
}

