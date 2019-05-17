#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include "C_COMPLEXE.h"
using namespace std;

int main(int argc, char** argv) {

    void* Zone_Memoire = malloc(sizeof(C_COMPLEXE));
    
    cout<<"Adresse de zone memoire : "<<hex<<Zone_Memoire<<endl;
    
    C_COMPLEXE* Un_complexe = new (Zone_Memoire) C_COMPLEXE;
    
    cout<<"____________"<<endl;
    
    int Liste_Entiers[10]{1,2,3,4,5,6,7,8,9,10};
    
    cout<<"Adresse de Liste_Entiers : "<<hex<<Liste_Entiers<<dec<<endl;
    
    for(int L_index=0;L_index<10;L_index++){
        cout<<Liste_Entiers[L_index]<<",";
    }
  
    int* Les_valeurs= new(Liste_Entiers) int [10]{};
    
    cout<<"Adresse de Les_valeurs : "<<hex<<Les_valeurs<<dec<<endl;
    
    for(int L_index=0;L_index<10;L_index++){
        cout<<Les_valeurs[L_index]<<",";
    }
    cout<<endl;
    
     for(int L_index=0;L_index<10;L_index++){
        cout<<Liste_Entiers[L_index]<<",";
    }
    
    return 0;
}

