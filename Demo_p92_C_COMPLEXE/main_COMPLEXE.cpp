/* 
 * File:   main.cpp
 * Author: ZOMBYY
 *
 * Created on 11 septembre 2013, 16:28
 */

#include <cstdlib>
#include <stdio.h>
#include "class_C_COMPLEXE.h"

using namespace std;


C_COMPLEXE Complexe_1;
C_COMPLEXE Complexe_Global;


void Test_Complexe(){
    C_COMPLEXE L_Complexe;
    
    L_Complexe.Initialise_Toi(10,20);
    L_Complexe.Affiche_Toi();
    printf("\n");
}

void Calcul(C_COMPLEXE P_Complexe){
    
    printf("Je suis dans Calcul qui recoit un C_COMPLEXE : ");
    P_Complexe.Affiche_Toi();
    printf("\n");
}

void Traitement_Complexe(C_COMPLEXE *P_Complexe){
    
    P_Complexe->Affiche_Toi();
}


int main(int argc, char** argv) {

    C_COMPLEXE L_complexe_1;
    C_COMPLEXE L_complexe_2(10);
    C_COMPLEXE L_complexe_3(10,20);
    C_COMPLEXE L_complexe_4(("1.1+2.2J"));
    C_COMPLEXE L_complexe_5("11.11-22.22J");
    C_COMPLEXE L_complexe_6("-111.1-222.2i");
    
    L_complexe_1.Affiche_Toi();
    L_complexe_2.Affiche_Toi();
    L_complexe_3.Affiche_Toi();
    L_complexe_4.Affiche_Toi();
    L_complexe_5.Affiche_Toi();
    L_complexe_6.Affiche_Toi();
        
    return 0;
}

