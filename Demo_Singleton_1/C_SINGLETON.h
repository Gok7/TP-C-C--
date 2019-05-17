/* 
 * File:   C_SINGLETON.h
 * Author: ZOMBYY
 *
 * Created on 6 novembre 2013, 14:31
 */

#ifndef C_SINGLETON_H
#define	C_SINGLETON_H

class C_SINGLETON {
public:
    inline static C_SINGLETON* Get_Instance();
    void Affiche_Toi();

protected:
    C_SINGLETON();
    ~C_SINGLETON();

    static C_SINGLETON* Instance;
};

C_SINGLETON* C_SINGLETON::Get_Instance() {

    if (Instance == nullptr) Instance = new C_SINGLETON;
    return Instance;
}
#endif	/* C_SINGLETON_H */



