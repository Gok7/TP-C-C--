/* 
 * File:   C_PROCESS.cpp
 * Author: ZOMBYY
 * 
 * Created on 9 octobre 2013, 14:02
 */

#include "C_PROCESS.h"
#include <iostream>

using namespace std;
void C_PROCESS::Run() {
    int L_Niveau_Cuve = La_cuve.Quel_est_ton_niveau();

    switch (L_Niveau_Cuve) {
        case C_CUVE::TROP_BAS: Phase_de_remplissage();
            break;
        case C_CUVE::NORMAL: Phase_Normale();
            break;
        case C_CUVE::TROP_HAUT: Phase_de_vidange();
            break;
        case C_CUVE::ERREUR: Phase_erreur();
            break;
        default:;
    }
}

void C_PROCESS::Phase_de_remplissage() {
    La_vanne.Ferme_toi();
    La_pompe.Mets_toi_en_marche();
}

void C_PROCESS::Phase_de_vidange() {
    La_pompe.Stoppe_toi();
    La_vanne.Ouvre_toi();

}

void C_PROCESS::Phase_Normale(){
    
    cout<<"ATTENTION VOUS ETES ENTRE DANS LA PHASE NORMALE"<<endl;
}

void C_PROCESS::Phase_erreur(){
    cerr<<"Erreur etat impossible "<<endl;
}