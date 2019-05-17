/* 
 * File:   C_FIGURE.cpp
 * Author: ZOMBYY
 * 
 * Created on 10 octobre 2013, 14:55
 */

#include "C_FIGURE.h"
#include "C_POSITION.h"
#include <iostream>

using namespace std;

void C_FIGURE::Regle_Taille(float P_Taille) {

    cout << __PRETTY_FUNCTION__ << endl;
    Taille = P_Taille;
}

void C_FIGURE::Affiche_Info() {

    cout << __PRETTY_FUNCTION__ << endl;
    cout << "l'objet occupe la memoire de " << this << "--> " <<
            (void*) ((int) this+sizeof (C_FIGURE)) << endl;
    cout << " Adresse de C_FIGURE::Taille " << &Taille << endl;
    cout << "Adresse de C_POSITION::Y" << &Y << endl;
    cout << endl;
}

C_FIGURE::C_FIGURE(float P_X, float P_Y, float P_Echelle)
: C_POSITION(P_X, P_Y) {

    cout << __PRETTY_FUNCTION__ << endl;
    Echelle = P_Echelle;
}

C_FIGURE::~C_FIGURE() {

    cout << __PRETTY_FUNCTION__ << endl;

}

void C_FIGURE::Affiche_info(){
    
    cout<<"Je suis un C_FIGURE "<<X<<","<<Y<<", "<<Echelle<<endl;
}