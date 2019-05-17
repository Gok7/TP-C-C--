/* 
 * File:   C_COMPLEXE.cpp
 * Author: ZOMBYY
 * 
 * Created on 24 octobre 2013, 20:29
 */

#include "C_COMPLEXE.h"
#include <stdio.h>

void C_COMPLEXE::Initialise_Toi(float P_Reel, float P_Imaginaire){
    Reel=P_Reel;
    Imaginaire=P_Imaginaire;
}

void C_COMPLEXE::Affiche_Toi(){
    printf("%g+%gJ \n",Reel,Imaginaire);
}