/* 
 * File:   main.cpp
 * Author: ZOMBYY
 *
 * Created on 2 octobre 2013, 14:31
 */

#include <cstdlib>
#include <iostream>

#include "C_ELEMENT.h"
using namespace std;

long C_ELEMENT::Valeur_Statique=200;

C_ELEMENT Un_element;

int main(int argc, char** argv) {

    cout<<"Adresse de la variable globale C_ELEMENT::Valeur_Statique"
            <<(void*)&C_ELEMENT::Valeur_Statique<<endl;
    cout<<"Adresse de l'objet :"<<(void*)&Un_element<<endl;
    
    cout<<"\n --------------------------------\n";
    cout<<"Adresse de la donne membre Valeur_1 : "
            <<(void*)&Un_element.Valeur_1<<endl;
    
    cout<<"Adresse de la donne membre Valeur_2 : "
            <<(void*)&Un_element.Valeur_2<<endl;
    
    cout<<"Adresse de la donne membre Valeur_3 : "
            <<(void*)&Un_element.Valeur_3<<endl;
    
    cout<<"Adresse de la donne membre statique : "
            <<(void*)&Un_element.Valeur_Statique<<endl;
    
    cout<<"Taille C_ELEMENT :  "
            <<sizeof(C_ELEMENT)<<endl;
    return 0;
}

