/* 
 * File:   C_ETAPE.h
 * Author: ZOMBYY
 *
 * Created on 9 octobre 2013, 17:18
 */

#ifndef C_ETAPE_H
#define	C_ETAPE_H
#include <string>
#include <iostream>
using namespace std;

class C_ETAPE {
public:
    
    C_ETAPE(int P_ID,const string& P_Message, bool P_Etat=false);
    
    bool Es_tu_active();
    void Active_toi();
    void Desactive_toi();
    
protected:
    bool Est_active=0;
    int ID=0;
    string Message;
};

#endif	/* C_ETAPE_H */

