/* 
 * File:   C_CUVE.h
 * Author: ZOMBYY
 *
 * Created on 9 octobre 2013, 14:02
 */

#ifndef C_CUVE_H
#define	C_CUVE_H

#include "C_CAPTEUR.h"
#include "C_CUVE.h"

class C_CUVE {
public:
        typedef enum {TROP_BAS=0,TROP_HAUT=3,NORMAL=1,ERREUR=2} T_NIVEAU;
        T_NIVEAU Quel_est_ton_niveau();
private:
    C_CAPTEUR Capteur_haut;
    C_CAPTEUR Capteur_bas;

};

#endif	/* C_CUVE_H */

