/* 
 * File:   main.cpp
 * Author: ZOMBYY
 *
 * Created on 10 octobre 2013, 10:49
 */

#include <cstdlib>
#include <bitset>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;



int main(int argc, char** argv) {

    try{
        char* L_buffer_1=new char [1024*1024*1024L];
        cout<<"1 Go reserve ! \n";
        
         char* L_buffer_2=new char [1024*1024*1024L];
        cout<<"2 Go reserve ! \n";
    }
    catch(std::bad_alloc& P_exception){
        
        cout<<"Impossible d'allouer cet espace memoire ! \n";
        cout<<"EXCEPTION : "<<P_exception.what()<<endl<<endl;
    }
    
    bitset<64>L_64Bits;
    L_64Bits.set();
    
    try{
        unsigned long L_entier_long;
        L_entier_long=L_64Bits.to_ulong();
    }
    catch(std::overflow_error& P_exception){
        cout<<"Impossible de copier 64 bits dans 32 bits"<<endl;
    }
    
    
    return 0;
}

