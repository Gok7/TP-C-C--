/* 
 * File:   main.cpp
 * Author: ZOMBYY
 *
 * Created on 12 septembre 2013, 10:40
 */

#include <cstdlib>

#include "class_C_CHAINE.h"

using namespace std;

/*
 * 
 */

C_CHAINE La_Chaine;

int main(int argc, char** argv) {

    La_Chaine.Debug();
    
    La_Chaine.Initialise_avec('a',10);
    
    La_Chaine.Affiche_Toi();
    La_Chaine.Debug();
    
    La_Chaine.Ajoute_Caractere('Z');
    La_Chaine.Debug();
    
    La_Chaine.Initialise_avec('B',10000);
    La_Chaine.Debug();
    
    
    
    return 0;
}

