/* 
 * File:   C_CARRE.cpp
 * Author: ZOMBYY
 * 
 * Created on 10 octobre 2013, 15:39
 */

#include "C_CARRE.h"
#include <iostream>

using namespace std;
C_CARRE::C_CARRE(float P_Cote):C_FIGURE(0,0,1) {   
    
            cout << __PRETTY_FUNCTION__ << endl;
            Cote=P_Cote;
    
}

void C_CARRE::Dessine_toi(){
    
    cout<<" Je suis un carre je me dessine avec "<<Cotee<<" de cote\n";
}




