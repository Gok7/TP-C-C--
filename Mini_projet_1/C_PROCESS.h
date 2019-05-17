/* 
 * File:   C_PROCESS.h
 * Author: ZOMBYY
 *
 * Created on 9 octobre 2013, 14:02
 */

#ifndef C_PROCESS_H
#define	C_PROCESS_H

#include "C_VANNE.h"
#include "C_POMPE.h"
#include "C_CUVE.h"


class C_PROCESS {
public:
    
    void Run();
    void Phase_de_remplissage();
    void Phase_de_vidange();
    void Phase_Normale();
    void Phase_erreur();
protected:
    
    C_VANNE La_vanne;
    C_POMPE La_pompe;
    C_CUVE La_cuve;
};

#endif	/* C_PROCESS_H */

