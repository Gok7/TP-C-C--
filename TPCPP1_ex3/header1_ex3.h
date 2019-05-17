#include <cstdlib>
#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdio.h>
using namespace std;

class C_tableau {
private:
    int Nombre_max;
    float *Adresse_tableau;
public:
    C_tableau(int);
    ~C_tableau();
    void Write(int, int);
    void Read(int);
    void Afficher();
    void Affichage_total();
};

C_tableau::C_tableau(int P_nombre) {

    Nombre_max = P_nombre;
    Adresse_tableau = new float[Nombre_max];
    for (int i = 0; i < Nombre_max; i++) {
        Adresse_tableau[i] = 0;
    }
}

C_tableau::~C_tableau() {

    cout << endl << "***DESTRUCTION***" << endl;
    delete Adresse_tableau;
}

void C_tableau::Write(int P_valeur, int P_position) {
    Adresse_tableau[P_position] = P_valeur;
}

void C_tableau::Read(int position) {
    cout << Adresse_tableau[position];
}

void C_tableau::Affichage_total(){
    
    for (int i = 0; i < Nombre_max; i++) {
        cout << i << " " << Adresse_tableau[i] << endl;
    }
}
