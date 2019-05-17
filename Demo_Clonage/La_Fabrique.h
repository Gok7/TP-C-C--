/* 
 * File:   La_Fabrique.h
 * Author: ZOMBYY
 *
 * Created on 6 novembre 2013, 16:55
 */

#ifndef LA_FABRIQUE_H
#define	LA_FABRIQUE_H
#include <map>
#include <iostream>
#include <cstdlib>
using namespace std;


class C_FABRIQUE {
public:
    void Reference_Objet(const string& P_Nom, C_BASE* P_Objet);
    map<string, C_BASE*> Les_Objets_Modeles;
    C_BASE* Creation(const string& P_Nom);
};

void C_FABRIQUE::Reference_Objet(const string& P_Nom, C_BASE* P_Objet) {


    if (Les_Objets_Modeles.find(P_Nom) == Les_Objets_Modeles.end()) {
        Les_Objets_Modeles[P_Nom] = P_Objet;
    }
}

C_BASE* C_FABRIQUE::Creation(const string& P_Nom) {

    C_BASE* L_Clone = nullptr;

    if (Les_Objets_Modeles.find(P_Nom) != Les_Objets_Modeles.end()) {

        L_Clone = Les_Objets_Modeles[P_Nom]->Clone_Toi();
    }
    return L_Clone;
}



#endif	/* LA_FABRIQUE_H */

