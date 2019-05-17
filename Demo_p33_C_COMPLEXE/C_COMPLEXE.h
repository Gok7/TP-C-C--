/* 
 * File:   C_COMPLEXE.h
 * Author: ZOMBYY
 *
 * Created on 24 octobre 2013, 20:28
 */

#ifndef C_COMPLEXE_H
#define	C_COMPLEXE_H

struct C_COMPLEXE {
public:
    float Reel;
    float Imaginaire;
    
    void Initialise_Toi(float P_Reel,float P_Imaginaire);
    void Affiche_Toi();
};

#endif	/* C_COMPLEXE_H */

