///* 
// * File:   C_AQUARIUM.cpp
// * Author: ZOMBYY
// * 
// * Created on 17 octobre 2013, 15:29
// */
//
//#include "C_AQUARIUM.h"
//#include "C_POISSON.h"
//
//C_AQUARIUM::C_AQUARIUM() {
//
//    Espace = new C_ESPACE(-10, 10, 10, -10, -10, 10);
//    Liste_poissons = new C_LISTE_POISSON;
//    Les_poissons->Set_Espace(Espace);
//
//}
//
//C_AQUARIUM::C_AQUARIUM(const C_AQUARIUM& orig) {
//}
//
//C_AQUARIUM::~C_AQUARIUM() {
//
//    if (Les_poissons) delete Les_poissons;
//    if (Espace) delete Espace;
//}
//
//void C_AQUARIUM::Ajoute_Poisson() {
//
//    float L_VX = (rand()200 - 100) / 100.0f;
//    float L_VY = (rand()200 - 100) / 100.0f;
//    float L_VZ = (rand()200 - 100) / 100.0f;
//
//    C_POISSON* L_Poisson = new C_POISSON(0, 0, 0, 1, 0, 0);
//    
//}
//
//void C_AQUARIUM::Animation(){
//    
//    Les_poissons->Deplace_Toi();
//}