/* 
 * File:   C_SPHERE.h
 * Author: ZOMBYY
 *
 * Created on 16 octobre 2013, 14:59
 */

#ifndef C_SPHERE_H
#define	C_SPHERE_H

#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <glut.h>
#include "C_FIGURE.h"

class C_SPHERE : public C_FIGURE {
public:
    C_SPHERE();
    C_SPHERE(float P_Rayon);
    static GLUquadricObj* Objet_Quadric;
    
protected:
    
    void Dessine_toi();
    float Rayon;
};

#endif	/* C_SPHERE_H */

