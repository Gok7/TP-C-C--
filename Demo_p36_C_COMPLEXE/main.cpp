#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include "C_COMPLEXE.h"
using namespace std;

void Affichage_debug(const C_COMPLEXE& P_Complexe) {

    cout << "Nombre Complexe(" << &P_Complexe << ") : " << endl;
    P_Complexe.Affiche_Toi();

}

C_COMPLEXE Creation_Complexe() {

    return C_COMPLEXE(11, 22);
}

int main(int argc, char** argv) {


    C_COMPLEXE();
    C_COMPLEXE().Affiche_Toi();
    C_COMPLEXE(10, 20);

    cout << "-----" << endl;
    C_COMPLEXE().Affiche_Toi();
    cout << "-----" << endl;

    C_COMPLEXE L_Complexe1(1, 2);

    L_Complexe1 = Creation_Complexe();
    L_Complexe1.Affiche_Toi();

    Affichage_debug(C_COMPLEXE(20, 50));

    cout << endl << endl;

    return 0;
}

