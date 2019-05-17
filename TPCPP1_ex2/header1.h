/* 
 * File:   header1.h
 * Author: Zombie
 *
 * Created on 8 février 2013, 14:19
 */

#ifndef HEADER1_H
#define	HEADER1_H


#include <cstdlib>
#include <iostream>
#include <math.h>
#include <conio.h>
#define default 100
using namespace std;

class C_cercle {
private:
    float x, y, rayon;
public:
    C_cercle(float = default, float = default, float = default); //constructeur
    ~C_cercle(); //destructeur

    void Deplace(float = default, float = default);
    void Affiche(C_cercle = default);
    int Compare(C_cercle &, C_cercle &);
    float Surface(C_cercle = default);
};

C_cercle::C_cercle(float P_x, float P_y, float P_rayon) {//constructeur
    x = P_x;
    y = P_y;
    rayon = P_rayon;
}

C_cercle::~C_cercle() {
    cout << endl << "***appel destructeur***" << endl;
}

float C_cercle::Surface(C_cercle P_cercle) {
    return (M_PI * (P_cercle.rayon * P_cercle.rayon));
}

int C_cercle::Compare(C_cercle &P_cercle1, C_cercle &P_cercle2) {
    if (P_cercle1.rayon > P_cercle2.rayon) return 1;
    else return 0;
}

void C_cercle::Deplace(float delta_x, float delta_y) {
    x += delta_x;
    y += delta_y;
}

void C_cercle::Affiche(C_cercle P_cercle) {
    cout << "x : " << P_cercle.x << "  y : " << P_cercle.y << "  rayon : "
            << P_cercle.rayon << endl;
}

#endif	/* HEADER1_H */

