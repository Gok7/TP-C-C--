#include <cstdlib>
#include <iostream>
using namespace std;
#include <map>

#include "C_BASE.h"
#include "La_Fabrique.h"
//-------------------------------------------------------------

class C_DERIVE1 : public C_BASE {
public:
    void Affiche_Toi();
    C_DERIVE1* Clone_Toi();
};

C_DERIVE1* C_DERIVE1::Clone_Toi() {
    return new C_DERIVE1(*this);
}

void C_DERIVE1::Affiche_Toi() {
    cout << "C_DERIVE1" << endl;
}
//-------------------------------------------------------------

class C_DERIVE2 : public C_BASE {
    void Affiche_Toi();
    C_DERIVE2* Clone_Toi();

};

void C_DERIVE2::Affiche_Toi() {
    cout << "C_DERIVE2" << endl;
}

C_DERIVE2* C_DERIVE2::Clone_Toi() {
    return new C_DERIVE2(*this);
}
//-------------------------------------------------------------

class C_DERIVE3 : public C_BASE {
    void Affiche_Toi();
    C_DERIVE3* Clone_Toi();

};

void C_DERIVE3::Affiche_Toi() {
    cout << "C_DERIVE3" << endl;
}

C_DERIVE3* C_DERIVE3::Clone_Toi() {
    return new C_DERIVE3(*this);
}
//-------------------------------------------------------------

class C_FABRIQUE_TABLEAU {
public:
    void Reference_Objet(int P_Numero, C_BASE* P_Objet);
    C_BASE* Creation(int P_Numero);
protected:
    C_BASE* Objets_de_Base[3]{};

};

C_BASE* C_FABRIQUE_TABLEAU::Creation(int P_Numero) {
    return Objets_de_Base[P_Numero]->Clone_Toi();
}

void C_FABRIQUE_TABLEAU::Reference_Objet(int P_Numero, C_BASE* P_Objet) {

    Objets_de_Base[P_Numero] = P_Objet;
}
//-------------------------------------------------------------

//-------------------------------------------------------------

int main(int argc, char** argv) {

    //
    //
    //    Objet1 = new C_DERIVE1;
    //    Objet2 = new C_DERIVE2;
    //
    //    Objet2->Affiche_Toi();
    //
    //    C_BASE* Objet3;
    //
    //    Objet3 = Objet1->Clone_Toi();
    //    Objet3->Affiche_Toi();
    //
    //

//    C_FABRIQUE_TABLEAU La_Fabrique;
//    La_Fabrique.Reference_Objet(0, new C_DERIVE1);
//    La_Fabrique.Reference_Objet(1, new C_DERIVE2);
//    La_Fabrique.Reference_Objet(2, new C_DERIVE3);
//
//    C_BASE* Un_Objet1;
//
//    Un_Objet1 = La_Fabrique.Creation(0);
//    Un_Objet1->Affiche_Toi();
//
//    C_BASE* Un_Objet2;
//
//    Un_Objet2 = La_Fabrique.Creation(1);
//    Un_Objet2->Affiche_Toi();
//
//    C_BASE* Un_Objet3;
//
//    Un_Objet3 = La_Fabrique.Creation(2);
//    Un_Objet3->Affiche_Toi();
    
    C_FABRIQUE La_Fabrique;
    
    La_Fabrique.Reference_Objet("type_1",new C_DERIVE1);
    La_Fabrique.Reference_Objet("type_2",new C_DERIVE2);
    La_Fabrique.Reference_Objet("type_3",new C_DERIVE3);
    
    C_BASE* Un_Objet;
    
    Un_Objet = La_Fabrique.Creation("type_3");
    
    Un_Objet->Affiche_Toi();

    return 0;
}

