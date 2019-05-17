/* 
 * File:   Class_C_VECTEUR.h
 * Author: ZOMBYY
 *
 * Created on 12 septembre 2013, 08:20
 */

#ifndef CLASS_C_VECTEUR_H
#define	CLASS_C_VECTEUR_H

struct C_VECTEUR {
    
    float X,Y,Z;
    void Affiche_Toi();
    void Mise_A_Zero();
    void Initialise_Toi(float P_X,float P_Y,float P_Z);
    void Debug();
    float Calcul_Norme();
    void Inverse_Toi();
    void Inverse_X();
    void Inverse_Y();
    void Inverse_Z();
};

#endif	/* CLASS_C_VECTEUR_H */

