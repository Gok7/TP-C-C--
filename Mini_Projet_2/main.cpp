/* 
 * File:   main.cpp
 * Author: ZOMBYY
 *
 * Created on 9 octobre 2013, 16:57
 */

//**************** -rendre fonctionnel ce prog
//rendre le prog interacactif : 
// -choix nombre etapes;
// - choix des transitions;
// -dans un fichier texte décrire etape et transition

#include <cstdlib>
#include <iostream>
#include "C_ETAPE.h"
#include "C_LISTE_ETAPE.h"
#include "C_TRANSITION.h"
#include "C_LISTE_TRANSITION.h"

using namespace std;

int main(int argc, char** argv) {

    C_ETAPE* Etape_0 = new C_ETAPE(0, "coucou");
    C_ETAPE* Etape_1 = new C_ETAPE(1, "suite");
    C_ETAPE* Etape_2 = new C_ETAPE(2, "bof");

    C_LISTE_ETAPE.Ajoute(Etape_0);
    C_LISTE_ETAPE.Ajoute(Etape_1);
    C_LISTE_ETAPE.Ajoute(Etape_2);

    C_TRANSITION* Transition0(Etape_0, 'a', Etape_1);
    C_TRANSITION* Transition1(Etape_1, 'b', Etape_2);
    C_TRANSITION* Transition2(Etape_2, 'c', Etape_0);

    C_LISTE_TRANSITION Les_transitions;

    Les_transitions.Ajoute(Transition0);
    Les_transitions.Ajoute(Transition1);
    Les_transitions.Ajoute(Transition2);

    Etape_0->Active_toi();
    return 0;
}

