/* 
 * File:   C_GROUPE_ENTITE.h
 * Author: ZOMBYY
 *
 * Created on 25 septembre 2013, 16:38
 */

#ifndef C_GROUPE_ENTITE_H
#define	C_GROUPE_ENTITE_H
#include "class_C_ENTITE.h"

class C_GROUPE_ENTITE {
public:

    void Creation_Entite(int P_Nombre_Entite);
    void Animation();

    C_GROUPE_ENTITE();
    C_GROUPE_ENTITE(const C_GROUPE_ENTITE& orig);
    ~C_GROUPE_ENTITE();
    
private:
    C_ENTITE* Ptr_c_entite=nullptr;
    int Nb_entite = 0;

};

#endif	/* C_GROUPE_ENTITE_H */

