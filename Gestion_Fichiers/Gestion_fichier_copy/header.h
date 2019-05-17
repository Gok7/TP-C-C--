//ouverture fichier 
//FILE *fopen(const char *filename, const char *mode);

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 100

    FILE *fp1, *fp2;
    char filename1[80], filename2[92], *buffer,extension[5];
    long lSize;
    size_t result;
    int i=0,taille=0;
    char car;
    

  
void Extraire_extension(){
    strtok(filename1, "\n");
    taille=strlen(filename1);
    i=taille;
    while(car!='.' || i==0){
        car=filename1[i];
        i--;
    }
    i++;
    strncpy(extension,filename1+i,taille-i);
}  
    

