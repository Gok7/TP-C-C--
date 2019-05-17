/* 
 * File:   C_FIGURE.cpp
 * Author: ZOMBYY
 * 
 * Created on 10 octobre 2013, 14:55
 */

#include "C_FIGURE.h"
#include <iostream>

using namespace std;

void C_FIGURE::Regle_Taille(float P_Taille) {

    cout << __PRETTY_FUNCTION__ << endl;
    Taille = P_Taille;
}

void C_FIGURE::Affche_Info(){
    
        cout << __PRETTY_FUNCTION__ << endl;
        cout<<"l'objet occupe la memoire de "<<this<<"--> " <<
                (void*)((int)this+sizeof(C_FIGURE))<<endl;
        cout<<" Adresse de C_FIGURE::Taille "<<&Taille<<endl;
        cout<<"Adresse de C_POSITION::Y"<<&Y<<endl;
        cout<<endl;
}