#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

class C_PILE_ENTIER {
private:
    int Nombre_max;
    int Nombre_Element;
    float *Adresse_Pile;
public:
    ~C_PILE_ENTIER();
    C_PILE_ENTIER(int);
    C_PILE_ENTIER();
    void Empile(int);
    int Depile();
    int Vide();
    int Pleine();
};

C_PILE_ENTIER::C_PILE_ENTIER(int P_nb) {
    Nombre_Element=0;
    Nombre_max = P_nb;
    Adresse_Pile = new float[Nombre_max];
    for (int i = 0; i < Nombre_max; i++) {
        Adresse_Pile[i] = 0;
    }
}

C_PILE_ENTIER::C_PILE_ENTIER() {
    Nombre_Element=0;
    Nombre_max = 20;
    Adresse_Pile = new float[Nombre_max];
    for (int i = 0; i < Nombre_max; i++) {
        Adresse_Pile[i] = 0;
    }
}

C_PILE_ENTIER::~C_PILE_ENTIER() {

    cout << endl << "***DESTRUCTION***" << endl;
    delete Adresse_Pile;
}

void C_PILE_ENTIER::Empile(int Valeur) {
    
    if (Valeur != 0) {
        Adresse_Pile[Nombre_Element] = Valeur;
        Nombre_Element++;
    }
}

int C_PILE_ENTIER::Depile() {
    Nombre_Element--;
    return Adresse_Pile[Nombre_Element];
    Adresse_Pile[Nombre_Element]=0;
    
}

int C_PILE_ENTIER::Pleine() {
    if (Nombre_Element == Nombre_max) return 1;
    else return 0;
}

int C_PILE_ENTIER::Vide() {
    if (Nombre_Element > 0) return 1;
    else return 0;
}

