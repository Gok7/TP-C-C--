#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include "C_ELEMENT.h"
using namespace std;


int main(int argc, char** argv) {

    cout<<"Sizeof C_ELEMENT : "<<sizeof(C_ELEMENT)<<endl<<endl;
    
    cout<<"Fonctionnalite new"<<endl<<endl;
    
    C_ELEMENT* L_Element_1 = new C_ELEMENT;
    
    cout<<" Equivalent"<<endl<<endl;
    
    C_ELEMENT* L_Element_2 = (C_ELEMENT*)operator new(sizeof(C_ELEMENT));
    
    new(L_Element_2)C_ELEMENT;
    return 0;
}

