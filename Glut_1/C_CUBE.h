/* 
 * File:   C_CUBE.h
 * Author: ZOMBYY
 *
 * Created on 16 octobre 2013, 14:59
 */

#ifndef C_CUBE_H
#define	C_CUBE_H

#include "C_FIGURE.h"

class C_CUBE : public C_FIGURE {
public:
    C_CUBE();
    C_CUBE(float P_Taille);

protected:

    void Dessine_toi();
    float Taille = 0;
};

#endif	/* C_CUBE_H */