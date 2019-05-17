/* 
 * File:   main.cpp
 * Author: ZOMBYY
 *
 * Created on 3 octobre 2013, 09:29
 */

#include <cstdlib>
#include <vector>
#include <iostream>
#include <forward_list>
using namespace std;

typedef forward_list<int> T_LISTE_SIMPLE;

ostream& operator<<(ostream& P_Canal, T_LISTE_SIMPLE& P_liste){
    for(T_LISTE_SIMPLE::iterator L_index=P_liste.begin();L_index!=P_liste.end();
            ++L_index){
        P_Canal<<*L_index<<", ";
    }
    return P_Canal;
}

T_LISTE_SIMPLE Liste_Simple;

int main(int argc, char** argv) {

    Liste_Simple.push_front(10);
    Liste_Simple.push_front(20);
    Liste_Simple.push_front(30);
    cout<<Liste_Simple<<endl;

    cout<<"--------------\n\n";
    cout<<"le haut de la pile est : "<<Liste_Simple.front()<<endl;
    cout<<"Supression de la valeur en haut de la pile...\n";
    Liste_Simple.pop_front();
    cout<<"----------------\n\n";
    cout<<Liste_Simple<<endl;
    
    return 0;
}

