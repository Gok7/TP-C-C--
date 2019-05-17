#include <cstdlib>
#include <iostream>
using namespace std;

template<int BIT,int DECALLAGE>
inline int Shift_Gauche(){
    
    cout<<__PRETTY_FUNCTION__<<endl;
    
    return BIT<<DECALLAGE;
}

int Valeur;

int main(int argc, char** argv) {

    Valeur= Shift_Gauche<1,2>();
    
    cout<<"Shift_Gauche<1,2>() = "<<Valeur<<endl<<endl;
    
    Valeur=Shift_Gauche<1,8>();
    cout<<"SShift_Gauche<1,8>() = "<<Valeur<<endl;
    return 0;
}

