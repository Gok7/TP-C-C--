/* 
 * File:   C_GROUPE_ENTITE.cpp
 * Author: ZOMBYY
 * 
 * Created on 25 septembre 2013, 16:38
 */

#include "C_GROUPE_ENTITE.h"
#include "class_C_ENTITE.h"
#include <windows.h>
#include <iostream>
using namespace std;

C_GROUPE_ENTITE::C_GROUPE_ENTITE() {


}

C_GROUPE_ENTITE::C_GROUPE_ENTITE(const C_GROUPE_ENTITE& orig) {
}

C_GROUPE_ENTITE::~C_GROUPE_ENTITE() {

    cout<<"DESTRUCTION BOOOM"<<endl;
    if(Nb_entite>0) delete[] Ptr_c_entite;
    Nb_entite=0;
}

void C_GROUPE_ENTITE::Creation_Entite(int P_Nombre_Entite) {

    C_ENTITE* Les_Entites = new (nothrow) C_ENTITE[P_Nombre_Entite];

    if (Les_Entites) Nb_entite = P_Nombre_Entite;
    else Nb_entite = 0;

}

void C_GROUPE_ENTITE::Animation() {


    do {
        for (int L_index = 0; L_index <= this->Nb_entite; L_index++) {
            printf("index %d  : ", L_index);
            Ptr_c_entite=this[L_index];
            Ptr_c_entite->Deplace_Toi();
            Ptr_c_entite->Affiche_Position();
            Ptr_c_entite++;
        }
    } while (GetAsyncKeyState(VK_ESCAPE) == 0);
}


