#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include "C_COMPLEXE.h"
#include <fstream>
using namespace std;

C_COMPLEXE Complexe_1(10, 20);
C_COMPLEXE Complexe_2;

int main(int argc, char** argv) {

    cout<<"Complexe 1 :" <<Complexe_1<<endl;
    cout<<"Autre Complexe: " <<C_COMPLEXE(10,20)<<endl;
    cout<<"Un autre"<<C_COMPLEXE(3,50)<<endl;
    
    fstream Mon_fichier;
    
    Mon_fichier.open("C:\\Users\\ZOMBYY\\Desktop\\test213.txt",ios_base::out);
    Mon_fichier<<"Test"<<endl;
    
    Mon_fichier.close();
    return 0;
}

