/* 
 * File:   C_FIGURE.h
 * Author: ZOMBYY
 *
 * Created on 10 octobre 2013, 14:55
 */

#ifndef C_FIGURE_H
#define	C_FIGURE_H

class C_FIGURE {
public:

    C_FIGURE(float P_X, float P_Y, float P_Echelle);
    void Deplace_Toi(float P_Delta_X,float P_Delta_Y);
    void Affiche_toi();
protected:
    virtual void Dessine_toi()=0;    
    float Echelle = 1.0f;
    float X=0,Y=0;
    
};

#endif	/* C_FIGURE_H */

