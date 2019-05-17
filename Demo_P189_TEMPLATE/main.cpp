/* 
 * File:   main.cpp
 * Author: ZOMBYY
 *
 * Created on 2 octobre 2013, 17:20
 */

#include <cstdlib>
#include <iostream>
using namespace std;

#define TAILLE_MAX 10

template <typename TYPE_GENE>
class C_LISTE{
    
public: 
    void Ajoute(TYPE_GENE P_valeur);
    void Affiche_toi();
protected: 
    TYPE_GENE DATA[TAILLE_MAX];
    int Taille_Reelle=0;
};

template <typename TYPE_GENE> 
void C_LISTE<TYPE_GENE>::Affiche_toi(){
    
    for(int L_index=0;L_index<Taille_Reelle; L_index++){
        cout<<DATA[L_index]<<", ";
    }
    
    cout<<endl;
}

template <typename TYPE_GENE>
void C_LISTE<TYPE_GENE>::Ajoute(TYPE_GENE P_valeur){
    if(Taille_Reelle<TAILLE_MAX){
        DATA[Taille_Reelle]=P_valeur;
        Taille_Reelle++;
    }
}

int main(int argc, char** argv) {

    C_LISTE<int> La_liste;

    La_liste.Ajoute(10);

    La_liste.Affiche_toi();
    return 0;
}

