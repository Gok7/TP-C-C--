/* 
 * File:   main.cpp
 * Author: ZOMBYY
 *
 * Created on 24 octobre 2013, 20:26
 */

#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include "C_COMPLEXE.h"
using namespace std;

void Test_Complexe(){
    C_COMPLEXE L_Complexe;
    
    L_Complexe.Initialise_Toi(10,20);
    L_Complexe.Affiche_Toi();
    printf("\n");
}

void Calcul(C_COMPLEXE P_Complexe){
    
    cout<<__PRETTY_FUNCTION__<<endl;
    P_Complexe.Affiche_Toi();
    printf("\n");
}

C_COMPLEXE Complexe_Global;

int main(int argc, char** argv) {

    C_COMPLEXE L_Complexe_1;
    
    Complexe_Global.Initialise_Toi(1,2);
    Complexe_Global.Affiche_Toi();
    
    Test_Complexe();
    
    L_Complexe_1.Reel=100;
    L_Complexe_1.Imaginaire=200;
    
    Calcul(L_Complexe_1);
    
    return 0;
}

