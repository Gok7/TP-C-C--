
#include "header1.h"

int main(int argc, char** argv) {
    bool resultat = 0;
    float Surface=0;
    C_cercle cercle1;
    C_cercle cercle2(20,40,60);
    getch();
    //cercle1.Init(10, 20, 30); pas besoin (constructeur voir precedemment)
    cercle1.Deplace(2, 2);
    getch();
    cercle1.Affiche(cercle1);
    getch();
    cercle2.Affiche(cercle2);
    getch();
    Surface=cercle1.Surface(cercle1);
    getch();
    resultat=cercle1.Compare(cercle1,cercle2);
    getch();
            //retourne 1 si le 1er argument est superieur
    cout<<"surface cercle 1: "<<Surface<<" resultat comparaison : "<<resultat<<
            endl;
    getch();
   // cercle1.Affiche(cercle1);
    return 0;
}

