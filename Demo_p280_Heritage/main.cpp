/* 
 * File:   main.cpp
 * Author: ZOMBYY
 *
 * Created on 10 octobre 2013, 14:53
 */

#include <cstdlib>
#include "C_FIGURE.h"
#include "C_POSITION.h"
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    cout<<"Taille de C_Position"<<sizeof(C_POSITION)<<endl;
        cout<<"Taille de C_FIGURE"<<sizeof(C_FIGURE)<<endl;
        
        C_FIGURE la_figure;
        la_figure.Affche_Info();
        
        la_figure.Positionne_toi(10,20);
        cout<<"Distance : "<<la_figure.Donne_Distance()<<endl<<endl;
        
        la_figure.Regle_Taille(2);

    return 0;
}

