/* 
 * File:   C_ELEMENT.cpp
 * Author: ZOMBYY
 * 
 * Created on 19 septembre 2013, 15:38
 */

#include "C_ELEMENT.h"
#include <stdio.h>

C_ELEMENT::C_ELEMENT()
        :Longeur(0),Les_Resultats{}
{
    cout<<"par default"<<__func__<<this<<endl;
}

C_ELEMENT::C_ELEMENT(const C_ELEMENT& P_Element){
    
    cout<<"copie"<<__func__<<this<<"P_element : "<<&P_Element<<endl;
    
    memcpy(this,&P_Element,sizeof(C_ELEMENT));
}     

void C_ELEMENT::Affiche_Toi(){
    
    cout<<__func__<<"longueur : "<<Longeur<<endl;
}

C_ELEMENT::~C_ELEMENT() {
}


void C_ELEMENT::Affiche_Info(){
    printf("Je suis dans C_ELEMENT::Affiche_Info(). this : %X\n",this);
    
}