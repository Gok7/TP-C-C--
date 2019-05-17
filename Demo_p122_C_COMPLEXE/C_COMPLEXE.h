/* 
 * File:   C_COMPLEXE.h
 * Author: ZOMBYY
 *
 * Created on 24 octobre 2013, 20:28
 */

#ifndef C_COMPLEXE_H
#define	C_COMPLEXE_H


#include <iostream>
using namespace std;

struct C_COMPLEXE {
      friend  ostream& operator<<(ostream&,const C_COMPLEXE);

public:
    C_COMPLEXE()=default;
    C_COMPLEXE(float P_Reel, float P_Imaginaire);
    void Initialise_Toi(float P_Reel,float P_Imaginaire);
    void Affiche_Toi()const;
    C_COMPLEXE& operator++();
    C_COMPLEXE operator++(int);
    C_COMPLEXE operator~();
    C_COMPLEXE operator-();
    float operator[](int P_Index);
    float operator[](const char* P_Partie);
    C_COMPLEXE operator+(const C_COMPLEXE& P_Avec);
    C_COMPLEXE operator+(float);
    int operator==(const C_COMPLEXE& P_Avec);
    
protected:
    
    float Reel;
    float Imaginaire;
    char Caractere_Imaginaire='a';
};

#endif	/* C_COMPLEXE_H */

