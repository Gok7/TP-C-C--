/* 
 * File:   C_ELEMENT.h
 * Author: ZOMBYY
 *
 * Created on 2 octobre 2013, 14:32
 */

#ifndef C_ELEMENT_H
#define	C_ELEMENT_H

class C_ELEMENT {
public:
    unsigned char Valeur_1=10;
    unsigned char Valeur_2=20;
    static long Valeur_Statique;
    unsigned char Valeur_3=30;
    C_ELEMENT();
    C_ELEMENT(const C_ELEMENT& orig);
    virtual ~C_ELEMENT();
private:

};

#endif	/* C_ELEMENT_H */

