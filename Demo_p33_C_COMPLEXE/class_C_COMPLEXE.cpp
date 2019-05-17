/* 
 * File:   class_C_COMPLEXE.cpp
 * Author: ZOMBYY
 * 
 * Created on 11 septembre 2013, 16:30
 */

#include "class_C_COMPLEXE.h"
#include <stdio.h>

void C_COMPLEXE::Initialise_Toi(float P_Reel, float p_Imaginaire){
    
    this->Reel=P_Reel;
    this->Imaginaire=p_Imaginaire;
}

void C_COMPLEXE::Affiche_Toi(){
    printf("%g+%gJ \n",this->Reel,this->Imaginaire);
}

