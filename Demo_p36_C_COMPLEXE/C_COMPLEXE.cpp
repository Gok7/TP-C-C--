                        /* 
 * File:   C_COMPLEXE.cpp
 * Author: ZOMBYY
 * 
 * Created on 24 octobre 2013, 20:29
 */

#include "C_COMPLEXE.h"
#include <stdio.h>
#include <iostream>
using namespace std;

C_COMPLEXE::C_COMPLEXE(float P_Reel, float P_Imaginaire)
:Reel(P_Reel),Imaginaire(P_Imaginaire){
    
}

void C_COMPLEXE::Initialise_Toi(float P_Reel, float P_Imaginaire) {
    cout << __PRETTY_FUNCTION__ << endl;
    Reel = P_Reel;
    Imaginaire = P_Imaginaire;
}

void C_COMPLEXE::Affiche_Toi() const{
    cout << __PRETTY_FUNCTION__ << endl;

    printf("%g+%gJ \n", Reel, Imaginaire);
}