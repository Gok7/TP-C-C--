/* 
 * File:   C_POISSON.cpp
 * Author: ZOMBYY
 * 
 * Created on 16 octobre 2013, 17:41
 */
#include "C_FIGURE.h"
#include "C_CUBE.h"
#include "C_SPHERE.h"
#include "C_POISSON.h"
#include <windows.h>
#include "glut.h"

#define DEBUG_C_POISSON

#ifdef DEBUG_C_POISSON
#include <iostream>
using namespace std;
#endif

C_POISSON::C_POISSON(float P_X, float P_Y, float P_Z,
        float P_VX, float P_VY, float P_VZ)

: X(P_X), Y(P_Y), Z(P_Z), VX(P_VX), VZ(P_VZ), VY(P_VY) {

#ifdef DEBUG_C_POISSON
    cerr << __PRETTY_FUNCTION__ << endl;
#endif
}

C_POISSON::~C_POISSON() {

#ifdef DEBUG_C_POISSON
    cerr << __PRETTY_FUNCTION__ << endl;
#endif

    if (Corp) delete Corp;
    if (Oeil) delete Oeil;
    if (Dorsale) delete Dorsale;
    if (Caudale) delete Caudale;
}

void C_POISSON::Creation() {

#ifdef DEBUG_C_POISSON
    cerr << __PRETTY_FUNCTION__ << endl;
#endif
    //    Corp = new C_SPHERE(2.0f);
    //    Corp->Deforme_Toi(1.0f, 0.5f, 0.5f);
    //    Corp->Positionne_toi(X, Y, Z);

    Oeil = new C_SPHERE(0.5f);
    //Oeil->Positionne_toi(X - 0.5f, Y + 0.12f, Z - 0.25f);

    Oeil->Set_Couleur(1, 0, 0);
    //    Dorsale = new C_CUBE(1.0f);
    //    Dorsale->Deforme_Toi(1.0f, 0.5f, 0.12f);
    //    Dorsale->Positionne_toi(X, Y + 0.75, Z);
    //
    //    Caudale = new C_CUBE(1.0f);
    //    Caudale->Deforme_Toi(0.25f, 1.0f, 0.02f);
    //    Caudale->Positionne_toi(X + 1.25, Y, Z);

}

void C_POISSON::Affiche_toi() {
#ifdef DEBUG_C_POISSON
    cerr << __PRETTY_FUNCTION__ << endl;
#endif

    if (Corp) Corp->Affiche_toi();
    if (Oeil) Oeil->Affiche_toi();
    if (Dorsale) Dorsale->Affiche_toi();
    if (Caudale) Caudale->Affiche_toi();

}

void C_POISSON::Deplace_toi() {
#ifdef DEBUG_C_POISSON
    cerr << __PRETTY_FUNCTION__ << endl;
#endif

    X += (VX);
    Y += (VY);
    Z += (VZ);

    if (Corp) Corp->Deplace_toi(VX, VY, VZ);
    if (Oeil) Oeil->Deplace_toi(VX, VY, VZ);
    if (Dorsale) Dorsale->Deplace_toi(VX, VY, VZ);
    if (Caudale) Caudale->Deplace_toi(VX, VY, VZ);

}

void C_POISSON::Get_Position(float* P_X, float* P_Y, float* P_Z) {
#ifdef DEBUG_C_POISSON
    cerr << __PRETTY_FUNCTION__ << endl;
#endif
    *P_X = X;
    *P_Y = Y;
    *P_Z = Z;
}

void C_POISSON::Retourne_toi_X() {
#ifdef DEBUG_C_POISSON
    cerr << __PRETTY_FUNCTION__ << endl;
#endif
    VX = -VX;
}