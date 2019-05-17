#include <cstdlib>
#include <stdio.h>
#include <iostream>

//le symbole # dans une macro permet d'encapsuler l'information accolée avec des ""

#define DBG_INT(INFO) printf("DEBUG - %s (%x) : %d \n ",INFO,&INFO,INFO);
#define DBG_FLOAT(INFO) printf("DEBUG - %s (%x) : %f \n ",#INFO,&INFO,INFO);
#define DBG_CHAINE(INFO) printf("DEBUG - %s (%x) : %s \n ",#INFO,&INFO,INFO);

using namespace std;

int main(int argc, char** argv) {

    int L_Valeur_1=10;
    float L_Valeur_2=1.1f;
    char* L_Message="Test de chaine en C";
    
    DBG_INT(L_Valeur_1);
    
    DBG_FLOAT(L_Valeur_2);
    
    DBG_CHAINE(L_Message);
    
    return 0;
}

