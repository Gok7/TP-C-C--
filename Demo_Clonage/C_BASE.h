/* 
 * File:   C_BASE.h
 * Author: ZOMBYY
 *
 * Created on 6 novembre 2013, 16:56
 */

#ifndef C_BASE_H
#define	C_BASE_H


class C_BASE {
public:
    virtual void Affiche_Toi() = 0;
    virtual C_BASE* Clone_Toi() = 0;
};

#endif	/* C_BASE_H */

