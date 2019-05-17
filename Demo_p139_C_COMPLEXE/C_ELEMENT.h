/* 
 * File:   C_ELEMENT.h
 * Author: ZOMBYY
 *
 * Created on 29 octobre 2013, 16:06
 */

#ifndef C_ELEMENT_H
#define	C_ELEMENT_H

#include <cstddef>

class C_ELEMENT {
public:
    C_ELEMENT();
    void* operator new(size_t P_Taille);
    void* operator new(size_t P_Taille, void* P_Zone);
    
    
    
protected:
    int Data_1=0;
    long long Data_2=0;
};

#endif	/* C_ELEMENT_H */

