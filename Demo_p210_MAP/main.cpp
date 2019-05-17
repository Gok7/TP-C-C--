/* 
 * File:   main.cpp
 * Author: ZOMBYY
 *
 * Created on 3 octobre 2013, 09:29
 */

#include <cstdlib>
#include <iostream>
#include <map>
using namespace std;

map<string, int>Le_map;

int main(int argc, char** argv) {

    Le_map["CLE_1"] = 10;
    Le_map["CLE_2"] = 20;
    Le_map["CLE_3"] = 30;
    Le_map["CLE_4"] = 100;

    cout << "Il y a : " << Le_map.size() << "noeuds\n";
    cout << "La valeur de la cle 1 : " << Le_map["CLE_1"] << endl;

    Le_map["CLE_1"] = 100;
    cout << "La valeur de la cle 1 est maintenant : " << Le_map["CLE_1"] << endl;

    map<string,int>::iterator L_Noeud;
    
    cout<<"\n----------------\n";
    
    for(L_Noeud=Le_map.begin();L_Noeud!=Le_map.end();L_Noeud++){
        cout<<"Cle : "<<L_Noeud->first<<" Valeur  : "<<L_Noeud->second<<endl;
    }
    
    cout<<"\n----------------\n";
        
    L_Noeud=Le_map.find("CLE_3");
    cout<<L_Noeud->first<<" est associe a : "<<L_Noeud->second<<endl;
    return 0;
}

