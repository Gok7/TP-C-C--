/* 
 * File:   C_ELEMENT.h
 * Author: ZOMBYY
 *
 * Created on 19 septembre 2013, 15:38
 */

#ifndef C_ELEMENT_H
#define	C_ELEMENT_H
#include <iostream>
#include <memory.h>

using namespace std;

class C_ELEMENT {
public:
    C_ELEMENT();
    C_ELEMENT(const C_ELEMENT& P_Element);
    virtual ~C_ELEMENT();
    void Affiche_Info();
    void Set_Longeur(int P_Longeur){Longeur=P_Longeur;}
    void Affiche_Toi();
protected:
    int Longeur;
    int Les_Resultats[10];
};


       
#endif	/* C_ELEMENT_H */

