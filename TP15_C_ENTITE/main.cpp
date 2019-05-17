/* 
 * File:   main.cpp
 * Author: ZOMBYY
 *
 * Created on 12 septembre 2013, 10:40
 */

//A FAIRE

#include <cstdlib>
#include "class_C_ENTITE.h"
#include "C_GROUPE_ENTITE.h"
#include <iostream>

using namespace std;

C_GROUPE_ENTITE Le_groupe_entite;

int main(int argc, char** argv) {

    long int L_nb_voulu = 0;

    cout << "Veuillez entrer le nombre d'entite : " << endl;
    cin >> L_nb_voulu;

    Le_groupe_entite.Creation_Entite(L_nb_voulu);
    Le_groupe_entite.Animation();
            
    return 0;
}



    //    
    //    entite_un.Positionne_Toi(0, 0, 0);
    //    entite_un.Initialise_Deplacement(1, 2, 0);
    //
    //    entite_un.Affiche_Position();
    //    printf("\n");
    //
    //    for (int L_nb = 0; L_nb < 30; L_nb++) {
    //        printf("index %d  : ", L_nb);
    //
    //        entite_un.Deplace_Toi();
    //        entite_un.Affiche_Position();
    //    }


