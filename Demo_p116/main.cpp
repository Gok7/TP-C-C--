/* 
 * File:   main.cpp
 * Author: ZOMBYY
 *
 * Created on 25 septembre 2013, 14:58
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int* L_Zone_Entiere = nullptr;
    
    L_Zone_Entiere=new int[1000000000L];
    
    cout<<hex<<L_Zone_Entiere<<endl;
    
    L_Zone_Entiere=new int[100000000L];
    
    cout<<hex<<L_Zone_Entiere<<endl;
    cout<<endl;
        
    return 0;
}

