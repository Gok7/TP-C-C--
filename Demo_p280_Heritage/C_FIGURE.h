/* 
 * File:   C_FIGURE.h
 * Author: ZOMBYY
 *
 * Created on 10 octobre 2013, 14:55
 */

#ifndef C_FIGURE_H
#define	C_FIGURE_H

#include "C_POSITION.h"


class C_FIGURE : public C_POSITION {
public:
    void Affche_Info();
    void Regle_Taille(float P_Taille);
    protected : 
        float Taille;

};

#endif	/* C_FIGURE_H */

