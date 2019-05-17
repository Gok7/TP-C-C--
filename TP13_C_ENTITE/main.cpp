/* 
 * File:   main.cpp
 * Author: ZOMBYY
 *
 * Created on 12 septembre 2013, 10:40
 */

#include <cstdlib>
#include <windows.h>
#include "class_C_ENTITE.h"
#include <iostream>
#include <memory.h>

using namespace std;

C_ENTITE entite_un;

int main(int argc, char** argv) {

    
        entite_un.Positionne_Toi(0, 0, 0);
        entite_un.Initialise_Deplacement(1, 2, 0);
    
        entite_un.Affiche_Position();
        printf("\n");
    
        for (int L_nb = 0; L_nb < 30; L_nb++) {
            printf("index %d  : ", L_nb);
    
            entite_un.Deplace_Toi();
            entite_un.Affiche_Position();
        }
            
    return 0;
}



        


