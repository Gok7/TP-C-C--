/* 
 * File:   C_FIGURE.h
 * Author: ZOMBYY
 *
 * Created on 16 octobre 2013, 14:59
 */

#ifndef C_FIGURE_H
#define	C_FIGURE_H

class C_FIGURE {
public:
    C_FIGURE();
    C_FIGURE(float P_X, float P_Y, float P_Z);
    virtual ~C_FIGURE();

    void Set_Couleur(float P_Red, float P_Green, float P_Blue, float P_Alpha = 0.0f);
    void Affiche_toi();
    void Deplace_toi(float P_DX, float P_DY, float P_DZ);
    void Positionne_toi(float P_X, float P_Y, float P_Z);
    void Deforme_Toi(float P_Echelle_X,float Echelle_Y,float Echelle_Z);
protected:

    virtual void Dessine_toi() = 0;
    float X, Y, Z;
    float Echelle_X = 1.0f;
    float Echelle_Y = 1.0f;
    float Echelle_Z = 1.0f;

    float Couleurs[4] = {1.0f, 1.0f, 1.0f, 0.0f};
};

#endif	/* C_FIGURE_H */

