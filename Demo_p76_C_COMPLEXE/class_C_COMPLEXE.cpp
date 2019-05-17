/* 
 * File:   class_C_COMPLEXE.cpp
 * Author: ZOMBYY
 * 
 * Created on 11 septembre 2013, 16:30
 */

#include "class_C_COMPLEXE.h"
#include <stdio.h>
#include <iostream>

using namespace std;

void C_COMPLEXE::Initialise_Toi(float P_Reel, float p_Imaginaire){
    
    this->Reel=P_Reel;
    this->Imaginaire=p_Imaginaire;
    Module_Calcule=false;
}

void C_COMPLEXE::Initialise_Toi(float P_Reel){
    
    this->Reel=P_Reel;
    this->Imaginaire=0;
    Module_Calcule=false;
}

void C_COMPLEXE::Initialise_Toi(){
    
    this->Reel=0;
    this->Imaginaire=0;
    Module_Calcule=false;
}

void C_COMPLEXE::Affiche_Toi()const{
    
    cout<<Reel<<"+"<<Imaginaire<<"J"<<endl;
}


