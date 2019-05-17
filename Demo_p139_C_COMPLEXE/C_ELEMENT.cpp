/* 
 * File:   C_ELEMENT.cpp
 * Author: ZOMBYY
 * 
 * Created on 29 octobre 2013, 16:06
 */

#include "C_ELEMENT.h"
#include <iostream>
#include <malloc.h>
using namespace std;

C_ELEMENT::C_ELEMENT(){
    cout<<"C_ELEMENT::C_ELEMENT  this =  "<<this<<endl;
}

void* C_ELEMENT::operator new(size_t P_Taille){
    cout<<__PRETTY_FUNCTION__<<endl;
    cout<<"taille : "<<P_Taille<<endl;
    
    void* L_zone_memoire=malloc(P_Taille);
    
    cout<<"\n Adresse allouee : "<<L_zone_memoire<<endl;
    
    return L_zone_memoire;
}

void* C_ELEMENT::operator new(size_t P_Taille, void* P_Zone){
    
    cout<<__PRETTY_FUNCTION__<<endl;
    cout<<"taille : "<<P_Taille<<endl;
    
    cout<<"\nP_Zone : "<<P_Zone<<endl;
    
    return P_Zone;   
}
