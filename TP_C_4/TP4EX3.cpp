
#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#define temps 1500

using namespace std;


int nb_etoile=0;
int nb_ligne=0;


void Saisir_valeur(){
    cout<<"Veuillez entrer le nombre d'etoile \n"<<endl;
    cin>>nb_etoile;
    cout<<endl;
}

void Affichage_Ligne(int nb_ligne){
    int L_compteur=0;
    for(L_compteur=0;L_compteur!=nb_ligne;L_compteur++){
        cout<<"*";
    }
}

void Affichage(){
    for(nb_ligne=0,nb_etoile;nb_etoile>nb_ligne;nb_ligne++){
       Affichage_Ligne(nb_ligne+1);
       cout<<endl;
    }
    
}

int main(int argc, char** argv){
    Saisir_valeur();
    Affichage();
    cout<<endl;
    getch();
    return 0;
} 
