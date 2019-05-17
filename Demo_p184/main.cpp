#include <cstdlib>
#include <iostream>
using namespace std;

template<typename TYPE_GENE>
class C_ELEMENT_GENE {
public:
    void Initialise_Toi(const TYPE_GENE& P_Objet);
    void Affiche_Toi();
    void Affiche_Debug();
protected:
    TYPE_GENE Data;
};

template<typename TYPE_GENE>
void C_ELEMENT_GENE<TYPE_GENE>::Initialise_Toi(const TYPE_GENE& P_Objet) {
    Data = P_Objet;
}

template<typename TYPE_GENE>
void C_ELEMENT_GENE<TYPE_GENE>::Affiche_Toi() {
    cout << Data << endl;
}

template<typename TYPE_GENE>
void C_ELEMENT_GENE<TYPE_GENE>::Affiche_Debug() {

#pragma GCC diagnostic push //sauvegarde la config actuelle
#pragma GCC diagnostic ignored "-Wpmf-conversions" 
    //desactive warning conversion &Methode --> void*

    cout << "Objet : " << hex << this 
            << " Adresse de la methode.Affiche_Toi  : "
            << hex << (void*) &C_ELEMENT_GENE<TYPE_GENE>::Affiche_Toi 
            << dec << endl;
#pragma GCC diagnostic pop
}

int main(int argc, char** argv) {

    C_ELEMENT_GENE<int> Element_1;

    Element_1.Initialise_Toi(10);
    Element_1.Affiche_Toi();
    Element_1.Affiche_Debug();
    cout << "____________________" << endl;

    C_ELEMENT_GENE<int> Element_2;

    Element_2.Initialise_Toi(20);
    Element_2.Affiche_Toi();
    Element_2.Affiche_Debug();
    cout << "____________________" << endl;

    Element_1 = Element_2;

    C_ELEMENT_GENE<float> Element_3;

    Element_3.Initialise_Toi(100.1f);
    Element_3.Affiche_Toi();
    Element_3.Affiche_Debug();
    cout << "____________________" << endl;
    return 0;
}

