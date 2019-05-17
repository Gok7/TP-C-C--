/* 
 * File:   C_FIGURE.cpp
 * Author: ZOMBYY
 * 
 * Created on 16 octobre 2013, 14:59
 */

#include <GL/gl.h>

#include "C_FIGURE.h"
//#define DEBUG_C_FIGURE 1

#ifdef DEBUG_C_FIGURE
#include <iostream>
using namespace std;
#endif

C_FIGURE::C_FIGURE() {

#if DEBUG_C_FIGURE >0
    cerr << __PRETTY_FUNCTION__ << endl;
#endif

    X = 0.0f;
    Y = 0.0f;
    Z = 0.0f;
}

C_FIGURE::C_FIGURE(float P_X, float P_Y, float P_Z) {

#if DEBUG_C_FIGURE >0
    cerr << __PRETTY_FUNCTION__ << endl;
    cerr << P_X << ", " << P_Y << ", " << P_Z << ", " << endl;
#endif
    X = P_X;
    Y = P_Y;
    Z = P_Z;
}

C_FIGURE::~C_FIGURE() {
}

void C_FIGURE::Set_Couleur(float P_Red, float P_Green, float P_Blue, float P_Alpha) {
#if DEBUG_C_FIGURE >0
    cerr << __PRETTY_FUNCTION__ << endl;
    cerr << P_Red << ", " << P_Green << ", " << P_Blue << ", " << P_Alpha << endl;
#endif
    Couleurs[0] = P_Red;
    Couleurs[1] = P_Green;
    Couleurs[2] = P_Blue;
    Couleurs[3] = P_Alpha;
}

void C_FIGURE::Positionne_toi(float P_X, float P_Y, float P_Z) {

#if DEBUG_C_FIGURE >0
    cerr << __PRETTY_FUNCTION__ << endl;
    cerr << P_X << ", " << P_Y << ", " << P_Z << ", " << endl;
#endif
    X = P_X;
    Y = P_Y;
    Z = P_Z;
}

void C_FIGURE::Deplace_toi(float P_DX, float P_DY, float P_DZ) {

#if DEBUG_C_FIGURE >0
    cerr << __PRETTY_FUNCTION__ << endl;
    cerr << P_DX << ", " << P_DY << ", " << P_DZ << ", " << endl;
#endif
    X +=(P_DX);
    Y += (P_DY);
    Z += (P_DZ);
}

void C_FIGURE::Affiche_toi() {
#if DEBUG_C_FIGURE >0
    cerr << __PRETTY_FUNCTION__ << endl;
    cerr << X << ", " << Y << ", " << Z << ", " << endl;
#endif    

    glPushMatrix(); //sauvegarder le repere
    glTranslatef(X, Y, Z);

    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, Couleurs);
    
    if(Echelle_X!=1.0f||Echelle_Y!=1.0f||Echelle_Z!=1.0f)
        glScalef(Echelle_X,Echelle_Y,Echelle_Z);
    
    Dessine_toi();

    glPopMatrix(); //remettre le repere
}

void C_FIGURE::Deforme_Toi(float P_Echelle_X, float P_Echelle_Y, float P_Echelle_Z){
    #if DEBUG_C_FIGURE >0
    cerr << __PRETTY_FUNCTION__ << endl;
    cerr << P_Echelle_X << ", " << P_Echelle_Y << ", " << P_Echelle_Z << ", " << endl;
#endif  
    Echelle_X+=(P_Echelle_X);
    Echelle_Y+=(P_Echelle_Y);
    Echelle_Z+=(P_Echelle_Z);
}