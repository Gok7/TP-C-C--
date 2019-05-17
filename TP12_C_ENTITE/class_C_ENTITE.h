/* 
 * File:   class_C_ENTITE.h
 * Author: ZOMBYY
 *
 * Created on 12 septembre 2013, 14:38
 */

#ifndef CLASS_C_ENTITE_H
#define	CLASS_C_ENTITE_H

#include <stdio.h>
#include <math.h>

class C_ENTITE {
public:

    void Positionne_Toi(float P_X, float P_Y, float P_Z);
    void Initialise_Deplacement(float P_cap_X, float P_cap_Y, float P_cap_Z);
    C_ENTITE() = default;
    C_ENTITE(int P_nb);
    //C_ENTITE(const C_ENTITE& P_Entite);
    void Affiche_Position();
    void Deplace_Toi();
    float Donne_Distance();
    inline void Reagir_au_Bord();
protected:
    float X, Y, Z;
    float capacite_X=1, capacite_Y=1, capacite_Z=1;

    

};

void C_ENTITE::Reagir_au_Bord() {

    if (( X >= 20) || ( X <= -20))  capacite_X = -( capacite_X);
    if (( Y >= 20) || ( Y <= -20))  capacite_Y = -( capacite_Y);
    if (( Z >= 20) || ( Z <= -20))  capacite_Z = -( capacite_Z);

}

#endif	/* CLASS_C_ENTITE_H */
