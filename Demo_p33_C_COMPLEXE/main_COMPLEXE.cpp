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

int main(int argc, char** argv) {

    C_COMPLEXE L_Complexe_1;
    
    Complexe_1.Initialise_Toi(1,2);
    Complexe_1.Affiche_Toi();
    printf("\n");
    
    Test_Complexe();
    
    L_Complexe_1.Reel=100;
    L_Complexe_1.Imaginaire=200;
    
    Calcul(L_Complexe_1);
    
    return 0;
}

