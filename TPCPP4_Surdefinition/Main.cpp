
#include "header1.h"

int Saisi(){
    int Valeur=0;
    cout<<" : ";
    fflush(stdin);
    cin>>Valeur;
    return Valeur;
}

int main(int argc, char** argv) {

    bool result;
    C_VECTEUR_3D a(2,2);
    a.Affiche();
    C_VECTEUR_3D b(2,5,1);
    b.Affiche();
    C_VECTEUR_3D c;
    c=b;
    
    c.Affiche();
    
    return 0;
}

