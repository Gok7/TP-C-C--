/* 
 * File:   C_SPHERE.cpp
 * Author: ZOMBYY
 * 
 * Created on 16 octobre 2013, 14:59
 */

#include "C_SPHERE.h"
#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <glut.h>

#define DEBUG_C_SPHERE

#ifdef DEBUG_C_SPHERE
#include <iostream>
using namespace std;
#endif

GLUquadricObj* C_SPHERE::Objet_Quadric = nullptr;

C_SPHERE::C_SPHERE() {

#ifdef DEBUG_C_SPHERE
    cerr << __PRETTY_FUNCTION__ << endl;
#endif

    if (Objet_Quadric == nullptr) {
        Objet_Quadric = gluNewQuadric();
    }
    Objet_Quadric = gluNewQuadric();
}

C_SPHERE::C_SPHERE(float P_Rayon) {

#ifdef DEBUG_C_SPHERE
    cerr << __PRETTY_FUNCTION__ << endl;
#endif

    Rayon = P_Rayon;

    if (Objet_Quadric == nullptr) {
        Objet_Quadric = gluNewQuadric();
    }
    Objet_Quadric = gluNewQuadric();
}

void C_SPHERE::Dessine_toi() {

#ifdef DEBUG_C_SPHERE
    cerr << __PRETTY_FUNCTION__ << endl;
#endif
    if (Rayon < 5) gluSphere(Objet_Quadric, Rayon, 30, 30);
    else gluSphere(Objet_Quadric, Rayon, 60, 60);

}