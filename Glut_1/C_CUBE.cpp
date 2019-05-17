/* 
 * File:   C_CUBE.cpp
 * Author: ZOMBYY
 * 
 * Created on 16 octobre 2013, 14:59
 */

#include "C_CUBE.h"
#include <windows.h>
#include "glut.h"

#define DEBUG_C_CUBE

#ifdef DEBUG_C_CUBE
        #include <iostream>
        using namespace std;
#endif

C_CUBE::C_CUBE() {
}

C_CUBE::C_CUBE(float P_Taille){
    Taille=P_Taille;
}


void C_CUBE::Dessine_toi() {

#ifdef DEBUG_C_CUBE
    cerr << __PRETTY_FUNCTION__ << endl;
#endif
    glutSolidCube(Taille);
}