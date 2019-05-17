/* 
 * File:   C_POISSON.h
 * Author: ZOMBYY
 *
 * Created on 16 octobre 2013, 17:41
 */

#ifndef C_POISSON_H
#define	C_POISSON_H

#include "C_FIGURE.h"
#include "C_SPHERE.h"
#include "C_CUBE.h"

class C_POISSON {
public:
    C_POISSON(float P_X, float P_Y, float P_Z,
            float P_VX = 0.0f, float P_VY = 0.0f, float P_VZ = 0.0f);

    ~C_POISSON();
    
    virtual void Affiche_toi();
    virtual void Creation();
    virtual void Deplace_toi();
    
    void Get_Position(float* P_X,float* P_Y,float* P_Z);
    virtual void Retourne_toi_X();
protected:

    float X, Y, Z;
    float VX, VY, VZ;

    C_FIGURE* Oeil = nullptr;
    C_FIGURE* Corp = nullptr;
    C_FIGURE* Dorsale = nullptr;
    C_FIGURE* Caudale = nullptr;

};

#endif	/* C_POISSON_H */

