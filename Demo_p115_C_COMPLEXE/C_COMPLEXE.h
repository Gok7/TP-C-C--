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
    C_COMPLEXE()=default;
    C_COMPLEXE(float P_Reel, float P_Imaginaire);
    void Initialise_Toi(float P_Reel,float P_Imaginaire);
    void Affiche_Toi()const;
    
protected:
    
    float Reel;
    float Imaginaire;
};

#endif	/* C_COMPLEXE_H */

