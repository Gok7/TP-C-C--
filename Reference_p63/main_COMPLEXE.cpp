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

int main(int argc, char** argv) {

    C_COMPLEXE L_Complexe;
    
    L_Complexe.Initialise_Toi(1,2);
    
    float L_Reel;
    L_Reel=L_Complexe.Get_Reel();
    
    cout<<"La partie reelle vaut : "<<L_Reel<<endl;
    cout<<"La partie reelle vaut toujours : "<<L_Complexe.Get_Reel()<<endl<<endl;
    
    float& L_Reference_Reel = L_Complexe.Get_Reel();
    
    L_Reference_Reel=100;
    
    cout<<"Apres L_reference_reel=100"<<endl;
    
    L_Complexe.Affiche_Toi();
    
    cout<<"Apres L_complexe.Get_reel() = 200"<<endl;
    
    L_Complexe.Get_Reel()=200;
    
    L_Complexe.Affiche_Toi();
    
    cout<<"on peut donc modifier une donnée membre qui est protected";
    return 0;
}

