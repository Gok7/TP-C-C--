/* 
 * File:   C_LISTE.h
 * Author: ZOMBYY
 *
 * Created on 10 octobre 2013, 08:32
 */

#ifndef C_LISTE_ETAPE_H
#define	C_LISTE_ETAPE_H

#include "C_ETAPE.h"
#include <vector>
using namespace std;


class C_LISTE_ETAPE {
public:
   
    ~C_LISTE_ETAPE();
    void Ajoute(C_ETAPE* P_Etape);
private:
    
    vector<C_ETAPE*> Liste_Etapes;
};

#endif	/* C_LISTE_H */

