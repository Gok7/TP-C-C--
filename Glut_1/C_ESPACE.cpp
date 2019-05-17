///* 
// * File:   C_ESPACE.cpp
// * Author: ZOMBYY
// * 
// * Created on 17 octobre 2013, 14:50
// */
//
//#include "C_ESPACE.h"
//
//C_ESPACE::C_ESPACE(float P_X1, float P_X2, float P_Y1, float P_Y2, float P_Z1, float P_Z2){
//    
//     X_Gauche=P_X1;
//     X_Droite=P_X2;
//     Y_Haut=P_Y1;
//     Y_Bas=P_Y2;
//     Z_Devant=P_Z1;
//     Z_Derriere=P_Z2;
//}
//
//C_ESPACE::T_POSITION C_ESPACE::Ou_Suis_Je(float P_X, float P_Z, float P_Y){
//    
//    T_POSITION L_Position = C_ESPACE::CENTRE;
//    
//    if(P_X<X_Gauche) L_Position= (T_POSITION) (L_Position|GAUCHE);
//    if(P_X>X_Droite) L_Position=(T_POSITION) (L_Position|DROITE);
//    if(P_Y<Y_Bas)L_Position= (T_POSITION) (L_Position|BAS);
//    if(P_Y>Y_Haut) L_Position=(T_POSITION)(L_Position|HAUT);
//    if(P_Z<DERRIERRE) L_Position=(T_POSITION) (L_Position|DERRIERRE);
//    if(P_Z>DEVANT)L_Position= (T_POSITION)  (L_Position|DEVANT);
//    
//    return L_Position;
//}