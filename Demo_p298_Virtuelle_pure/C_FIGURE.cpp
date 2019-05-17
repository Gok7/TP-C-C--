/* 
 * File:   C_FIGURE.cpp
 * Author: ZOMBYY
 * 
 * Created on 10 octobre 2013, 14:55
 */

#include "C_FIGURE.h"
#include <iostream>

using namespace std;

C_FIGURE::C_FIGURE(float P_X, float P_Y, float P_Echelle)
: X(P_X),Y(P_Y),Echelle(P_Echelle)
{

    cout << __PRETTY_FUNCTION__ << endl;
    Echelle = P_Echelle;
}

void C_FIGURE::Deplace_Toi(float P_Delta_X,float P_Delta_Y){
    
    X+=P_Delta_X;
    Y+=P_Delta_Y;
}

void C_FIGURE::Affiche_toi(){
    
    cout<<"Je me positionne a " <<X<<"," <<Y<<endl;
    Dessine_toi();
}
