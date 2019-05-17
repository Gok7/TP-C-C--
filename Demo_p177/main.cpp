#include <cstdlib>
#include <stdio.h>
#include <iostream>

#define DECLARE_SOMME(TYPE) TYPE Somme_##TYPE (TYPE P_Valeur_1, TYPE P_Valeur_2)\
{ return P_Valeur_1+P_Valeur_2;}

#define APPEL_SOMME(TYPE, VALEUR_1,VALEUR_2) Somme_##TYPE(VALEUR_1,VALEUR_2)

DECLARE_SOMME(int)
DECLARE_SOMME(float)

using namespace std;

int main(int argc, char** argv) {

    int L_Un_Test= Somme_int(1,2);
    
    int L_Un_Resultat = APPEL_SOMME(int, 100,200);
    
    cout<<"Resultat : "<<L_Un_Resultat<<endl;
    
    cout<<APPEL_SOMME(int,10,20)<<endl;
    cout<<APPEL_SOMME(float,1.1f,2.2f)<<endl;
    
    printf("Addresse somme_int : %X  \n",Somme_int);
    printf("Addresse somme_float : %X \n",Somme_float);
    printf("ok");

    return 0;
}

