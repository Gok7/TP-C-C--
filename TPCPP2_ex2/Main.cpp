
#include "header1.h"

int Saisi(){
    int Valeur=0;
    cout<<" : ";
    fflush(stdin);
    cin>>Valeur;
    return Valeur;
}

int main(int argc, char** argv) {

    C_PILE_ENTIER *ptr_pile;
    int L_Valeur=0;
    cout<<"Taille de la pile";
    L_Valeur=Saisi();
    ptr_pile = new C_PILE_ENTIER(L_Valeur);
    cout<<"Variable";
    L_Valeur=Saisi();
    ptr_pile->Empile(L_Valeur);
    cout<<"Variable";
    L_Valeur=Saisi();
    ptr_pile->Empile(L_Valeur);
    cout<<ptr_pile->Depile()<<endl;
    cout<<ptr_pile->Depile()<<endl;
    return 0;
}

