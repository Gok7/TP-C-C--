/* 
 * File:   main.cpp
 * Author: ZOMBYY
 *
 * Created on 19 septembre 2013, 10:49
 */

#include <cstdlib>
#include <iostream>
#include "C_ELEMENT.h"

using namespace std;

/*
 * 
 */

C_ELEMENT Un_element;

void Test_Local() {
    cout << __func__ << endl;
    C_ELEMENT L_Element;
}

void Test_Local_Static() {
    cout << __func__ << endl;
    static C_ELEMENT LS_Element;
}

C_ELEMENT Les_Elements[10];

int main(int argc, char** argv) {

    cout << __func__ << endl;
//    
//        C_ELEMENT L_Element;
//    
//    
//        cout << "-----";
//        Test_Local();
//        Test_Local();
//        cout << "-----";
//    
//        Test_Local_Static();
//        Test_Local_Static();




    return 0;
}

