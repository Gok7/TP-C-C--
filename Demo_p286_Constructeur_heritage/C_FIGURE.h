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
    
    C_FIGURE(float P_X,float P_Y,float P_Echelle);
    ~C_FIGURE();
    void Affche_Info();
    void Regle_Taille(float P_Taille);
    protected : 
        float Echelle=1.0f;
        float Taille;

};

#endif	/* C_FIGURE_H */

