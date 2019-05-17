/* 
 * File:   C_CUVE.cpp
 * Author: ZOMBYY
 * 
 * Created on 9 octobre 2013, 14:02
 */

#include "C_CUVE.h"

C_CUVE::T_NIVEAU C_CUVE::Quel_est_ton_niveau(){
    T_NIVEAU L_niveau;
    
    int L_etat_bas=Capteur_bas.Quel_est_ton_etat();
    int L_etat_haut= Capteur_haut.Quel_est_ton_etat();
    
    L_niveau=T_NIVEAU((L_etat_haut<<1)+L_etat_bas);
    
    return L_niveau;
}