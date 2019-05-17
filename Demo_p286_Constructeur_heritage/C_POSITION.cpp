/* 
 * File:   C_POSITION.cpp
 * Author: ZOMBYY
 * 
 * Created on 10 octobre 2013, 14:53
 */

#include "C_POSITION.h"
#include <iostream>
#include <math.h>
using namespace std;

float C_POSITION::Donne_Distance() {

    cout << __PRETTY_FUNCTION__ << endl;
    return sqrt(X * X + Y * Y);
}

void C_POSITION::Positionne_toi(float P_X, float P_Y) {

    X = P_X;
    Y = P_Y;
}

C_POSITION::C_POSITION(float P_X, float P_Y) {

    cout << __PRETTY_FUNCTION__ << endl;
    X = P_X;
    Y = P_Y;
}
C_POSITION::~C_POSITION(){
        cout << __PRETTY_FUNCTION__ << endl;

}