/* 
 * File:   main.cpp
 * Author: ZOMBYY
 *
 * Created on 12 septembre 2013, 10:40
 */

#include <cstdlib>
#include <iostream>
#include "class_C_CHAINE.h"
using namespace std;


int main(int argc, char** argv) {

//    La_Chaine.Debug();
//    
//    La_Chaine.Initialise_avec('a',10);
//    
//    La_Chaine.Affiche_Toi();
//    La_Chaine.Debug();
//    
//    La_Chaine.Ajoute_Caractere('Z');
//    La_Chaine.Debug();
//    
//    La_Chaine.Initialise_avec('B',10000);
//    La_Chaine.Debug();
    
    C_CHAINE Ma_Chaine;

    Ma_Chaine.Initialise_toi("coucou\n");
    const C_CHAINE& La_Chaine_ref=Ma_Chaine;
    
    cout<<La_Chaine_ref.Get_Data();
    
    
    return 0;
}

