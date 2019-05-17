/* 
 * File:   C_X.cpp
 * Author: ZOMBYY
 * 
 * Created on 6 novembre 2013, 14:12
 */

#include "C_X.h"
#include <iostream>

using namespace std;

C_X::C_X() {
    cout<<__PRETTY_FUNCTION__<<endl;
}

C_X* C_X::Instance = nullptr;

C_X* C_X::Get_Instance(){
    
    if(C_X::Instance==nullptr) C_X::Instance = new C_X;
    return C_X::Instance;
}
