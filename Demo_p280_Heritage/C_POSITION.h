/* 
 * File:   C_POSITION.h
 * Author: ZOMBYY
 *
 * Created on 10 octobre 2013, 14:53
 */

#ifndef C_POSITION_H
#define	C_POSITION_H

class C_POSITION {
public:
    float Donne_Distance();
    void Positionne_toi(float P_X,float P_Y);
    
protected : 
    float X;
    float Y;
};

#endif	/* C_POSITION_H */

