/* 
 * File:   main.cpp
 * Author: ZOMBYY
 *
 * Created on 11 septembre 2013, 16:28
 */

#include <cstdlib>
#include <iostream>
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

C_COMPLEXE Les_Complexes[10];
C_COMPLEXE* Les_Pointeurs_Complexe[10];
    

void Test_Valeur(C_COMPLEXE P_Complexe){
    cout<<"Passage par valeur : Adresse de P_complexe : "<<&P_Complexe<<endl<<endl;
}

void Test_Adresse(C_COMPLEXE* P_Complexe){
    cout<<"Passage par adresse : Adresse de P_complexe : "<<&P_Complexe<<endl<<endl;
}

void Test_Reference(C_COMPLEXE& P_Complexe){
    cout<<"Passage par reference : Adresse de P_complexe : "<<&P_Complexe<<endl<<endl;
}

int main(int argc, char** argv) {
    
    C_COMPLEXE L_complexe;
    
    cout<<"Adresse de L_complexe : "<<&L_complexe<<
            endl<<"---------------------"<<endl;
    
    Test_Valeur(L_complexe);
    Test_Adresse(&L_complexe);
    Test_Reference(L_complexe);
    
    return 0;
}

