/* 
 * File:   main.cpp
 * Author: ZOMBYY
 *
 * Created on 3 octobre 2013, 08:29
 */

#include <cstdlib>
#include <string>
#include <iostream>
#include <array>

using namespace std;

int main(int argc, char** argv) {

    array<char, 10 > L_tableau_1
    {
        1, 2, 3
    };
    array<char, 10 > L_tableau_2
    {
        1, 2, 3
    };
    
    cout<<"size(): " <<L_tableau_1.size()<<endl;
    cout<<"Adrese de l'objet"<<&L_tableau_1<<endl;
    cout<<"Adresse Data"<<(void*)L_tableau_1.data()<<endl;
    
    cout<<"--------------"<<endl;
    
    for(int L_Index=0;L_Index<L_tableau_1.size();++L_Index){
        cout<<(int)L_tableau_1[L_Index]<<".";
    }
    if(L_tableau_1==L_tableau_2)
        cout<<"Les deux tableaux contiennent la meme valeur";
    
    L_tableau_1[0]=0;
    
    if(L_tableau_1!=L_tableau_2)
       cout<<"Les deux tableaux ne contiennent pas la meme valeur";
    
    
    for(int L_Index=0;L_Index<10000;++L_Index){
        cout<<L_tableau_1[L_Index];
    }
    

    


    return 0;
}

