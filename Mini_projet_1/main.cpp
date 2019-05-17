/* 
 * File:   main.cpp
 * Author: ZOMBYY
 *
 * Created on 9 octobre 2013, 12:13
 */

#include <cstdlib>

#include "C_PROCESS.h"

using namespace std;

/*
 * 
 */
C_PROCESS Le_process;
int main(int argc, char** argv) {

    
    while(1) Le_process.Run();
    
    return 0;
}

