
#include "header1.h"

int Saisi() {
    int Valeur = 0;
    cout << " : ";
    fflush(stdin);
    cin >> Valeur;
    return Valeur;
}

int main(int argc, char** argv) {

    int L_Valeur = 0;
    cout << "Taille de la pile";
    L_Valeur = Saisi();
    C_PILE_ENTIER pile(L_Valeur);
    cout << "Variable";
    L_Valeur = Saisi();
    pile.Empile(L_Valeur);
    cout << "Variable";
    L_Valeur = Saisi();
    pile.Empile(L_Valeur);
    C_PILE_ENTIER pile2(pile);
    L_Valeur=pile2.Depile();
    cout<<L_Valeur<<endl;
    L_Valeur=pile2.Depile();
    cout<<L_Valeur<<endl;

    return 0;
}

