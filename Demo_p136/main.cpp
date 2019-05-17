#include <cstdlib>
#include <stdio.h>
#include <iostream>
using namespace std;

constexpr unsigned long long operator"" _KO(unsigned long long P_Valeur){
    return P_Valeur<<10;
}

constexpr unsigned long long operator"" _MO(unsigned long long P_Valeur){
    return P_Valeur<<20;
}

constexpr unsigned long long operator"" _GO(unsigned long long P_Valeur){
    return P_Valeur<<30;
}

int main(int argc, char** argv) {

    cout<<1_KO<<endl;
    cout<<2_MO<<endl;
    cout<<1_GO<<endl;
    return 0;
}

