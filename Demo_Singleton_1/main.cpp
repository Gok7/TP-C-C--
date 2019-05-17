#include <cstdlib>
#include <iostream>
using namespace std;
#include "C_X.h"
#include "C_SINGLETON.h"

int main(int argc, char** argv) {

    
    C_SINGLETON* Le_Singleton = C_SINGLETON::Get_Instance();

    
    Le_Singleton->Affiche_Toi();
    
    //delete Le_Singleton;
    
    C_SINGLETON::Get_Instance()->Affiche_Toi();
    return 0;
}

