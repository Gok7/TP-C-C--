#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include "C_COMPLEXE.h"
using namespace std;

C_COMPLEXE Les_Complexes[10];

C_COMPLEXE* Les_ptr_Complexes[10];

int main(int argc, char** argv) {

    Les_Complexes[0].Initialise_Toi(1, 1);

    Les_Complexes[0].Affiche_Toi();

    for (int L_index = 0; L_index < 10; L_index++) {
        Les_Complexes[L_index].Initialise_Toi(L_index, L_index);
    }

    for (int L_index = 0; L_index < 10; L_index++) {
        cout << L_index << endl;
        Les_Complexes[L_index].Affiche_Toi();
    }

    for (int L_index = 0; L_index < 10; L_index++) {

        Les_ptr_Complexes[L_index] = &Les_Complexes[L_index];
    }

    for (int L_index = 0; L_index < 10; L_index++) {

        Les_ptr_Complexes[L_index]->Affiche_Toi();
    }
    
    return 0;
}

