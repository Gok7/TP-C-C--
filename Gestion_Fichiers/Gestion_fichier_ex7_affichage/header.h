//ouverture fichier 
//FILE *fopen(const char *filename, const char *mode);
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>
#include <iostream>

#define BUFSIZE 128

using namespace std;

    FILE *fp1;
    char filename1[80],buffer[BUFSIZE];
    size_t result,lSize;
    int i=0;
    
