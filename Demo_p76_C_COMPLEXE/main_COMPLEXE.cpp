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

C_COMPLEXE Les_Complexes[10];
C_COMPLEXE* Les_Pointeurs_Complexe[10];
    
int main(int argc, char** argv) {
//    
//    Les_Complexes[0].Initialise_Toi(1,1);
//    
//    Les_Complexes[0].Affiche_Toi();
//    printf("\n\n");
//    
//    for(int L_index=0;L_index<10;L_index++){
//        Les_Complexes[L_index].Initialise_Toi(L_index,L_index);
//    }
//    
//    for(int L_index=0;L_index<10;L_index++){
//        
//        printf("%d : ",L_index);
//        Les_Complexes[L_index].Affiche_Toi();
//        printf("\n");
//    }
//    
//    printf("\n acces via le tableau de pointeurs : \n");
//    for(int L_Index=0;L_Index<10;L_Index++){
//        Les_Pointeurs_Complexe[L_Index]=&Les_Complexes[L_Index];
//    }
//    for(int L_index=0;L_index<10;L_index++){
//        printf("%d : ",L_index);
//        
//        Les_Pointeurs_Complexe[L_index]->Affiche_Toi();
//        
//        printf("\n\n");
//    }
    
    C_COMPLEXE L_complexe;
    
    L_complexe.Initialise_Toi(1,2);
    L_complexe.Affiche_Toi();
    
    L_complexe.Initialise_Toi(1);
    L_complexe.Affiche_Toi();
    
    L_complexe.Initialise_Toi();
    L_complexe.Affiche_Toi();
    
    
    return 0;
}

