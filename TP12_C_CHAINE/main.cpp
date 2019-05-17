/* 
 * File:   main.cpp
 * Author: ZOMBYY
 *
 * Created on 12 septembre 2013, 10:40
 */

#include <cstdlib>

#include "class_C_CHAINE.h"
#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    
    C_CHAINE Ma_Chaine;
    
    Ma_Chaine.Initialise_toi("coucou");
    Ma_Chaine.Affiche_Toi();
    
    Ma_Chaine.Initialise_toi('A');
    Ma_Chaine.Affiche_Toi();
    
    Ma_Chaine.Initialise_toi('A',10);
    Ma_Chaine.Affiche_Toi();
    
    Ma_Chaine.Initialise_toi("coucou", 3);
    Ma_Chaine.Affiche_Toi();
    
    
    return 0;
}

