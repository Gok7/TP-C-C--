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
#include <time.h>

extern unsigned int ID_Global;

unsigned int Donne_Nouvel_ID();

class C_ENTITE {
public:

    void Positionne_Toi(float P_X, float P_Y, float P_Z);
    void Initialise_Deplacement(float P_cap_X, float P_cap_Y, float P_cap_Z);
    void Affiche_Position();
    void Deplace_Toi();
    float Donne_Distance();
    inline unsigned int Get_ID();
protected:
    unsigned int ID = ++ID_Global;//Donne_Nouvel_ID();
    float X = 0, Y = 0, Z = 0;
    float capacite_X = 1, capacite_Y = 1, capacite_Z = 1;

    inline void Reagir_au_Bord();

};

#endif	/* CLASS_C_ENTITE_H */


void C_ENTITE::Reagir_au_Bord() {

    if (( X >= 20) || ( X <= -20))  capacite_X = -( capacite_X);
    if (( Y >= 20) || ( Y <= -20))  capacite_Y = -( capacite_Y);
    if (( Z >= 20) || ( Z <= -20))  capacite_Z = -( capacite_Z);

}

unsigned int C_ENTITE::Get_ID(){

    return ID;
}
