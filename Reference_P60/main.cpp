/* 
 * File:   main.cpp
 * Author: ZOMBYY
 *
 * Created on 18 septembre 2013, 14:16
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {


int L_Valeur=10;

cout<<"Adresse de L_valeur : "<<&L_Valeur<<endl;

int& L_reference_Valeur = L_Valeur ;
cout<<"Adresse de L_reference__valeur : "<<&L_reference_Valeur<<endl;

L_reference_Valeur=100;

cout<<"Valeur de L_valeur : "<<L_Valeur<<endl;
cout<<endl;



    return 0;
}

