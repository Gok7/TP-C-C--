/* 
 * File:   C_CARRE.h
 * Author: ZOMBYY
 *
 * Created on 10 octobre 2013, 15:39
 */

#ifndef C_CARRE_H
#define	C_CARRE_H

#include "C_FIGURE.h"


class C_CARRE : public C_FIGURE {
public:
    C_CARRE(float P_Cote);
    ~C_CARRE();
    
    protected:
        float Cote=1.0f;
};

#endif	/* C_CARRE_H */

