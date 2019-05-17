/* 
 * File:   class_C_COMPLEXE.h
 * Author: ZOMBYY
 *
 * Created on 11 septembre 2013, 16:30
 */

#ifndef CLASS_C_COMPLEXE_H
#define	CLASS_C_COMPLEXE_H

struct C_COMPLEXE {
public:
    void Initialise_Toi(float P_Reel, float p_Imaginaire);
    void Affiche_Toi();
protected:
    float Reel;
    float Imaginaire;
};

#endif	/* CLASS_C_COMPLEXE_H */

