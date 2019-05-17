/* 
 * File:   C_LISTE_TRANSITION.h
 * Author: ZOMBYY
 *
 * Created on 10 octobre 2013, 08:57
 */

#ifndef C_LISTE_TRANSITION_H
#define	C_LISTE_TRANSITION_H

#include <vector>

#include "C_TRANSITION.h"
using namespace std;

class C_LISTE_TRANSITION {
public:
   
    ~C_LISTE_TRANSITION();
    void Ajoute(C_TRANSITION* P_transition);
    void Reagis_avec(char P_condition);
    
private:
    
    vector<C_TRANSITION*> Liste_transition;
};

#endif	/* C_LISTE_TRANSITION_H */

