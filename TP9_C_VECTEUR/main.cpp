/* 
 * File:   main.cpp
 * Author: ZOMBYY
 *
 * Created on 12 septembre 2013, 10:40
 */

#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include "class_C_ENTITE.h"

using namespace std;

C_ENTITE entite_un;
C_ENTITE entite_deux;

void Affiche_Distance(const C_ENTITE& P_Entite){
    
    cout<<"L'entite est a : "<<P_Entite.Get_Distance()<<endl;
}

int main(int argc, char** argv) {

    
    C_ENTITE Mon_entite;
    
    Mon_entite.Positionne_Toi(1,1,1);
    Affiche_Distance(Mon_entite);
    
    Mon_entite.Positionne_Toi(2,2,2);
    Affiche_Distance(Mon_entite);
    
    return 0;
}

