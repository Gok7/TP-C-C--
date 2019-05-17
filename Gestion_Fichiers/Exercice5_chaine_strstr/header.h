

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


bool cmp_car(char P_car1, char P_car2) {
    //comparaison de car
    //32 est la différence entre lettre maj et min en ASCII
    bool L_result = false;
    if (P_car1 == P_car2 || P_car1 == P_car2 + 32 || P_car1 == P_car2 - 32) {
        L_result = true;
    }
    return L_result;
}




    
    
