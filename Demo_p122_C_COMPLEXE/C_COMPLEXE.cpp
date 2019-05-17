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
: Reel(P_Reel), Imaginaire(P_Imaginaire) {

}

void C_COMPLEXE::Initialise_Toi(float P_Reel, float P_Imaginaire) {
    cout << __PRETTY_FUNCTION__ << endl;
    Reel = P_Reel;
    Imaginaire = P_Imaginaire;
}

void C_COMPLEXE::Affiche_Toi() const {
    cout << __PRETTY_FUNCTION__ << endl;

    if (Imaginaire > 0) {
        printf("%g+%gJ \n", Reel, Imaginaire);
    } else {
        printf("%g%gJ \n", Reel, Imaginaire);
    }

}

C_COMPLEXE& C_COMPLEXE::operator ++() {
    Reel++;
    Imaginaire++;
    return *this;
}

C_COMPLEXE C_COMPLEXE::operator ++(int) {

    C_COMPLEXE L_Complexe(*this);

    Reel++;
    Imaginaire++;
    return L_Complexe;
}

C_COMPLEXE C_COMPLEXE::operator~() {

    return C_COMPLEXE(Reel, -Imaginaire);
}

C_COMPLEXE C_COMPLEXE::operator -() {
    return C_COMPLEXE(-Reel, -Imaginaire);
}

ostream& operator<<(ostream& P_Canal, const C_COMPLEXE P_Complexe) {
    P_Canal << P_Complexe.Reel;
    if (P_Complexe.Imaginaire >= 0) P_Canal << "+";
    P_Canal << P_Complexe.Imaginaire << P_Complexe.Caractere_Imaginaire << endl;
    return P_Canal;

}
