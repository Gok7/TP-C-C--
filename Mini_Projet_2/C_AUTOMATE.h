/* 
 * File:   C_AUTOMATE.h
 * Author: ZOMBYY
 *
 * Created on 10 octobre 2013, 09:25
 */

#ifndef C_AUTOMATE_H
#define	C_AUTOMATE_H

#include "C_LISTE_ETAPE.h"
#include "C_LISTE_TRANSITION.h"


class C_AUTOMATE {
public:
    C_AUTOMATE();
    bool Run();
private:
    C_LISTE_ETAPE Les_Etapes;
    C_LISTE_TRANSITION Les_Transitions;

};

#endif	/* C_AUTOMATE_H */

