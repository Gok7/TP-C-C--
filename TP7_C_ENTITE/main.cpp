/* 
 * File:   main.cpp
 * Author: ZOMBYY
 *
 * Created on 12 septembre 2013, 10:40
 */

#include <cstdlib>
#include <stdio.h>

#include "class_C_ENTITE.h"

using namespace std;

C_ENTITE entite_un;
C_ENTITE entite_deux;


int main(int argc, char** argv) {

    entite_un.Positionne_Toi(0, 0, 0);
    entite_un.Initialise_Deplacement(1, 1, 1);

    entite_un.Affiche_Position();
    printf("\n");

    for (int L_nb = 0; L_nb < 30; L_nb++) {
        printf("index %d  : ", L_nb);

        entite_un.Deplace_Toi();
        entite_un.Affiche_Position();
    }

    printf("%u\n", entite_un.Get_ID());
    printf("%u\n", entite_deux.Get_ID());
    printf("\n");

    Affichage_debug(&entite_deux);
    
    return 0;
}

