
#include "header1.h"

int main(int argc, char** argv) {

    int Valeur = 0;
    int Position = 0;
    while (1) {
        cout << "  Taille : " << endl;
        fflush(stdin);
        cin >> Valeur;
        C_tableau tableau(Valeur);
        Valeur = 0;
        cout << "  Valeur voulu : " << endl;
        fflush(stdin);
        cin >> Valeur;
        cout << "  Position a ecrire : " << endl;
        fflush(stdin);
        cin >> Position;
        tableau.Write(Valeur, Position);
        tableau.Affichage_total();
    }
    return 0;
}

