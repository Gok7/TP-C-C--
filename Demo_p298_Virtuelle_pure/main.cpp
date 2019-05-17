/* 
 * File:   main.cpp
 * Author: ZOMBYY
 *
 * Created on 10 octobre 2013, 14:53
 */

//A terminer

#include <cstdlib>
#include "C_FIGURE.h"
#include "C_POSITION.h"
#include "C_CARRE.h"
#include <iostream>
using namespace std;


int main(int argc, char** argv) {

    C_CARRE un_carre(5);
    cout<<"------------------------------------"<<endl;
    un_carre.Affiche_Info();
    return 0;
}

