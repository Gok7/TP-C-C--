/* 
 * File:   class_C_CHAINE.h
 * Author: ZOMBYY
 *
 * Created on 12 septembre 2013, 10:40
 */

#include "stdio.h"
#include <memory.h>

class C_CHAINE {
public:

    C_CHAINE() = default;
    C_CHAINE(const char* P_message);
    C_CHAINE(char P_car, int P_nombre);

    inline void Mise_A_Zero();

    void Initialise_toi(char P_Caractere, int P_Nombre);

    const char*Get_Data()const {
        return Data;
    }
    void Initialise_toi(const char* P_message);
    void Initialise_toi(char P_car);
    void Initialise_toi(char* P_message, int P_compteur);
    void Affiche_Toi();
    inline void Donne_Taille();
    void Ajoute_Caractere(char P_Caractere);
    void Debug();

protected:
    char Data[255];
    int Taille = 0;

};

void C_CHAINE::Mise_A_Zero() {

    Taille = 0;
    Data[0] = '\0';
}

void C_CHAINE::Donne_Taille() {

    printf("Taille : %d\n", Taille);

}

