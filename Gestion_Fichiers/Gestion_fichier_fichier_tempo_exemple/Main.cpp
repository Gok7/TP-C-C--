#include "header.h"

int main(int argc, char** argv) {


    //garnir le buffer a ec un nom de fichier tempo
    buffer = strdup("fichier_XXXXXX");
    
    //creer le fichier tempo
    
    if((fd = mktemp(buffer))==-1){//<------  mktemp ne marche pas? 
        //ce programme est un echec
        //fuck
        fprintf(stderr,"Impossible de creer le fichier \n");
        exit(EXIT_FAILURE);
    }
    if((tmpfd=fdopen(fd,"wb"))==NULL){
        fprintf(stderr,"Impossible de creer le fr'----flux \n");
        exit(EXIT_FAILURE);
    }
    
    //utiliser le fichier tempo
    
    printf("Nom de fichier temporaire : %s\n",buffer);
    
    //fermer le fichier et faire le ménage
    
    fclose(tmpfd);
    free(buffer);
    

    return 0;
}

