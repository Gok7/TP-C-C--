/* 
 * File:   class_C_COMPLEXE.h
 * Author: ZOMBYY
 *
 * Created on 11 septembre 2013, 16:30
 */

#ifndef CLASS_C_COMPLEXE_H
#define	CLASS_C_COMPLEXE_H
#include <math.h>

class C_COMPLEXE {
public:
    void Initialise_Toi(float P_Reel, float p_Imaginaire);
    void Initialise_Toi(float P_Reel);
    void Initialise_Toi();

    void Affiche_Toi() const;
    const float& Get_Reel(){return Reel;}
    const float& Get_Imaginaire(){return Imaginaire;}
    inline const float& Get_Module()const;
protected:
    float Reel;
    float Imaginaire;
    mutable float Module=0;
    mutable bool Module_Calcule=false;
};

const float& C_COMPLEXE::Get_Module() const{
    
    if(!Module_Calcule){
        Module=sqrt(Reel*Reel + Imaginaire*Imaginaire);
        Module_Calcule=true;
    }
    return Module;
}


#endif	/* CLASS_C_COMPLEXE_H */

