/* 
 * File:   main.cpp
 * Author: ZOMBYY
 *
 * Created on 10 octobre 2013, 10:49
 */

#include <cstdlib>
#include <iostream>
using namespace std;

void Test_Exception(){
    string L_chaine;
    L_chaine="Exception venant de ";
    L_chaine+=__PRETTY_FUNCTION__;
    throw L_chaine;
}

int main(int argc, char** argv) {

    
    try{
        throw 10;
    }
    
    catch(int P_valeur){
        cout<<"Exception 1 (int) : "<<P_valeur<<endl;
    }
    catch(float P_valeur){
        cout<<"Exception 1 (float) : "<<P_valeur<<endl;
    }
    try{
        throw 10.0f;
        
    }
    catch(int P_valeur){
        cout<<"Exception 2 (int) : "<<P_valeur<<endl;
    }
    catch(float P_valeur){
        cout<<"Exception 2 (float) : "<<P_valeur<<endl;
    }
    try{
        Test_Exception();
    }
    catch(int P_valeur){
        cout<<"Exception 3 (int) : "<<P_valeur<<endl;
    }
    catch(const string& P_Chaine){
        cout<<"Exception 3 (const string&) : "<<P_Chaine<<endl;
    }
    try{
        Test_Exception();
    }
    catch(int P_valeur){
        cout<<"Exception 4 (int) : "<<P_valeur<<endl;
    }
    return 0;
}

