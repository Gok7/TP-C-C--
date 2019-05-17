#include "header.h"

char *loc, buf1[80], buf2[80];

size_t str_search(char P_buf[], char P_buf2[]) {

    bool L_result_test_car = false;
    int L_verification;
    size_t L_location, lenght1, lenght2;
    int i, Compteur, loop_time;
    lenght1 = strlen(P_buf);
    lenght2 = strlen(P_buf2);

    L_location=0;
    L_verification=0;
    for(i=0;i<lenght1;i++){
        
    }
    L_result_test_car = cmp_car(P_buf[i], P_buf2[i]);
    return L_location;
}

int main(int argc, char** argv) {

    size_t location;
    strcpy(buf1, "aaah 1 aaah Aa");
    strcpy(buf2, "aaah");
    location = str_search(buf1, buf2);
    printf("%lu\n", location);
    //printf("%lu\n",str_search(buf1,buf2));

    //    loc = str_search(buf1, buf2);

    //    if (loc == NULL) {
    //        printf("pas de correspondance\n");
    //    } else {
    //        printf("%s a ete decouvert a  la position %d\n", buf2, loc - buf1);
    //    }
    return 0;
}