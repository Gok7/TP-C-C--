#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>
#include <unistd.h>
int main(int argc, char** argv) {
    char *buffer;
    FILE fd;
    FILE *tmpfd;
    
    //garnir buffer avec nom fichier tempo
    
    buffer = strdup("fichier_XXXXXX");
    
    //creation fichier tempo
    
    if((fd=tmpfile(buffer))==NULL){
        fprintf(stderr,"Impossible de creer le fichier\n");
        exit(EXIT_FAILURE);
    }
    
    if((tmpfd=fdopen(fd,"wb"))==NULL){
        fprintf(stderr,"Impossible de creer le flux\n");
        exit(EXIT_FAILURE);
    }
    
    //utiliser les fichiers tempo
    
    printf("Nom = %s \n",buffer);
    
    fclose(tmpfd);
    free(buffer);
    return 0;
}
