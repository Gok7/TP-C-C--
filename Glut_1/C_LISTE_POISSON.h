/* 
 * File:   C_LISTE_POISSON.h
 * Author: ZOMBYY
 *
 * Created on 17 octobre 2013, 10:47
 */

#ifndef C_LISTE_POISSON_H
#define	C_LISTE_POISSON_H

#include <vector>
#include "C_POISSON.h"
#include "C_ESPACE.h"

class C_LISTE_POISSON {
public:
    C_LISTE_POISSON();
    virtual ~C_LISTE_POISSON();
    void Ajoute(C_POISSON* P_Poisson);
    void Affiche_toi();
    void Deplace_toi();
    void Set_Espace(C_ESPACE* P_Espace);
protected : 
    
    std::vector<C_POISSON> Les_Poissons;
    
    C_ESPACE* Espace;
};

#endif	/* C_LISTE_POISSON_H */

