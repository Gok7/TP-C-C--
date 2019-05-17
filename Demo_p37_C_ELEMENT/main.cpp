/* 
 * File:   main.cpp
 * Author: ZOMBYY
 *
 * Created on 11 septembre 2013, 16:28
 */

#include <cstdlib>
#include <stdio.h>
#include "C_ELEMENT.h"

using namespace std;

C_ELEMENT Un_Element;
C_ELEMENT Un_Autre_Element;


void Test_Element_Reference(const C_ELEMENT& P_Element){
    
    cout<<__func__<<endl;
}

void Test_Element_Valeur(C_ELEMENT P_Element){
    cout<<__func__<<endl;
}

int main(int argc, char** argv) {
    
    cout<<"creation c element l_element 1"<<endl;
    C_ELEMENT L_element_1;
    L_element_1.Affiche_Toi();
    
    L_element_1.Set_Longeur(100);
    
    cout<<"creation de c_element l_element_2 = l_element 1"<<endl;
    C_ELEMENT L_element_2=L_element_1;
    
    L_element_2.Affiche_Toi();
    
    cout<<"appel test element valeur (l_element 1"<<endl;       
    
    Test_Element_Valeur(L_element_1);
    
    Test_Element_Reference(L_element_1);
    
    cout<<endl;
    
    return 0;
}       