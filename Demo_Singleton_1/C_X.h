/* 
 * File:   C_X.h
 * Author: ZOMBYY
 *
 * Created on 6 novembre 2013, 14:12
 */

#ifndef C_X_H
#define	C_X_H

class C_X {
public:
   static C_X* Get_Instance();

protected:
        C_X();
        static C_X* Instance;

};

#endif	/* C_X_H */

