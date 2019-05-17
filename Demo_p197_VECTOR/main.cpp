/* 
 * File:   main.cpp
 * Author: ZOMBYY
 *
 * Created on 3 octobre 2013, 09:29
 */

#include <cstdlib>
#include <vector>
#include <iostream>
using namespace std;

vector<int> Le_Vecteur;

int main(int argc, char** argv) {

    for(int L_Index=0;L_Index<10;L_Index++){
        
        Le_Vecteur.push_back(L_Index);
        
    }
    
    cout<<"Il y a : "<<Le_Vecteur.size()<<"elements dans le vecteur"<<endl;
    
    for(int L_index=0;L_index<Le_Vecteur.size();L_index++){
        cout<<Le_Vecteur[L_index]<<',';
    }
    
    Le_Vecteur.pop_back();
    
    cout<<"Il y a : "<<Le_Vecteur.size()<<"elements dans le vecteur"<<endl;
    for(int L_index=0;L_index<Le_Vecteur.size();L_index++){
        cout<<Le_Vecteur.at(L_index)<<',';
    }
    
    cout<<endl<<endl;
    
    
    return 0;
}

