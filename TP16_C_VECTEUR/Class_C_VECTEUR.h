/* 
 * File:   Class_C_VECTEUR.h
 * Author: ZOMBYY
 *
 * Created on 12 septembre 2013, 08:20
 */
#include <fstream>

#ifndef CLASS_C_VECTEUR_H
#define	CLASS_C_VECTEUR_H

using namespace std;

struct C_VECTEUR {
    
    friend ostream& operator<<(ostream& P_canal,const C_VECTEUR& P_complexe);

    C_VECTEUR() = default;
    C_VECTEUR(float P_X = 0, float P_Y = 0, float P_Z = 0);

    float X = 0, Y = 0, Z = 0;
    void Affiche_Toi()const;
    void Mise_A_Zero();
    void Initialise_Toi(float P_X, float P_Y, float P_Z);
    void Grandir(float Taille);
    void Grandir(const C_VECTEUR & P_vecteur);

    void Initialise_Toi();
    void Debug();
    float Calcul_Norme();
    void Inverse_Toi();
    void Inverse_X();
    void Inverse_Y();
    void Inverse_Z();
    
    C_VECTEUR operator++();
    C_VECTEUR operator--();
    C_VECTEUR  operator*(const C_VECTEUR& P_vecteur);
    float operator^(const C_VECTEUR& P_vecteur);
    C_VECTEUR operator+(const C_VECTEUR& P_vecteur);
    C_VECTEUR operator-(const C_VECTEUR& P_vecteur);

};

#endif	/* CLASS_C_VECTEUR_H */

