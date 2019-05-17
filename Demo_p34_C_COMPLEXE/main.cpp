#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include "C_COMPLEXE.h"
using namespace std;

void Traitement_Complexe(C_COMPLEXE** P_Complexe){
    
    P_Complexe->Affiche_Toi();
}

int main(int argc, char** argv) {

    C_COMPLEXE L_Complexe_1;
    
    L_Complexe_1.Initialise_Toi(1,2);
    L_Complexe_1.Affiche_Toi();
        
    (&L_Complexe_1)->Affiche_Toi();
    
    C_COMPLEXE* L_pointeur_complexe;
    L_pointeur_complexe=&L_Complexe_1;
    
    L_pointeur_complexe->Affiche_Toi();
    
    Traitement_Complexe(&L_Complexe_1);
    
    return 0;
}

