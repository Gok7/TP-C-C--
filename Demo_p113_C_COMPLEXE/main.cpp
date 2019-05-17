#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include "C_COMPLEXE.h"
using namespace std;

int main(int argc, char** argv) {

    const int Nombre_valeur = 5;

    int* Les_Valeurs_Bidons = new int[Nombre_valeur];

    cout << "Les entiers bidons";

    for (int L_index = 0; L_index < Nombre_valeur; L_index++) {

        cout << Les_Valeurs_Bidons[L_index] << " ";
    }
    cout << endl;

    int* Les_Valeurs = new int[Nombre_valeur] {
        1, 2, 3
    };
    
    cout << "Les entiers";

    for (int L_index = 0; L_index < Nombre_valeur; L_index++) {

        cout << Les_Valeurs[L_index] << " ";
    }
    
    C_COMPLEXE* L_un_complexe= new C_COMPLEXE{1,2};

//    C_COMPLEXE* Les_complexes;
//    Les_complexes=new C_COMPLEXE [Nombre_valeur]={(1,1)};
//    
//    cout << "Les complexes";
//
//    for (int L_index = 0; L_index < Nombre_valeur; L_index++) {
//
//        cout << Les_complexes[L_index].Affiche_Toi() << " ";
//    }

    return 0;
}

