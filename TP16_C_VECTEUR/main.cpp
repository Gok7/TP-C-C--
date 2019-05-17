/* 
 * File:   main.cpp
 * Author: ZOMBYY
 *
 * Created on 12 septembre 2013, 08:16
 */


#include <cstdlib>
#include <stdio.h>
#include "Class_C_VECTEUR.h"

using namespace std;



int main(int argc, char** argv) {

    C_VECTEUR Vecteur1(2,2,2);       
    Vecteur1.Affiche_Toi();
     C_VECTEUR Vecteur2(2,2,2);       
    Vecteur2.Affiche_Toi();
     C_VECTEUR Vecteur3(0,0,0);       
    Vecteur3.Affiche_Toi();
    
    Vecteur3=Vecteur1-Vecteur2;
    Vecteur3.Affiche_Toi();
    
    return 0;
}

