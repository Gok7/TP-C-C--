#include "header.h"
#define BUFSIZE 100

int main(int argc, char** argv) {
    FILE *fp;
    
    char filename[60];
    while(1){
        puts("Indiquez le nom du fichier a supprimer : ");
    //strcpy(filename,"C:\\Users\\Zombie\\Desktop\\text.txt");
        fflush(stdin);
    fgets(filename,sizeof(filename),stdin);
    strtok(filename, "\n");//delete the end of line character
    if (remove(filename) == 0) {
        printf("Fichier supprime \n");
    }
    else
        fprintf(stderr,"Erreur supression\n");
    }
    
    return 0;
}
