/* 
 * File:   C_TRANSITION.h
 * Author: ZOMBYY
 *
 * Created on 9 octobre 2013, 17:45
 */

#ifndef C_TRANSITION_H
#define	C_TRANSITION_H

#include "C_ETAPE.h"


class C_TRANSITION {
public:
    
    C_TRANSITION(C_ETAPE* Precedente,char P_condition,C_ETAPE* Suivante);
    void Reagis_avec(char P_car);
    
    
private:
    char Condition;
    C_ETAPE* Etape_suivante;
    C_ETAPE* Etape_precedente;
};

#endif	/* C_TRANSITION_H */

