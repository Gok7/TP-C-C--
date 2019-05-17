/* 
 * File:   C_SINGLETON.cpp
 * Author: ZOMBYY
 * 
 * Created on 6 novembre 2013, 14:31
 */

#include "C_SINGLETON.h"

#include <iostream>

using namespace std;

C_SINGLETON* C_SINGLETON::Instance=nullptr;

C_SINGLETON::C_SINGLETON() {
        cout<<__PRETTY_FUNCTION__<<endl;
}

void C_SINGLETON::Affiche_Toi(){
    
    cout<<"Je suis le singleton"<<this<<endl;
}