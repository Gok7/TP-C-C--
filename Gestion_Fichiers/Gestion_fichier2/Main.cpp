#include "header.h"
#define BUFLEN 6

int main(int argc, char** argv) {
    FILE *fp;
    char msg[]="abcdefghijkl";
    char buf[BUFLEN];
    
    fp = fopen("C:\\Users\\Zombie\\Desktop\\text.txt", "w");
    if (fp == NULL) {
        fprintf(stderr, "Erreur ouverture");
        exit(EXIT_FAILURE);
    }
    
    if (fputs(msg,fp) ==EOF) {
        fprintf(stderr, "Erreur ecriture");
        exit(EXIT_FAILURE);
    }
    fclose(fp);

    fp = fopen("C:\\Users\\Zombie\\Desktop\\text.txt", "r");
    if (fp == NULL) {
        fprintf(stderr, "Erreur ouverture\n");
        exit(EXIT_FAILURE);
    }
    
    printf("Immediatement apres l'ouverture, positon = %ld\n",ftell(fp));
    
    fgets(buf,sizeof(buf),fp);
    printf("Apres lecture de %s, position = %ld\n", buf,ftell(fp));
    
    fgets(buf,sizeof(buf),fp);
    printf("Les 5 caractere  suivant sont %s. position maintenant = %ld\n"
            , buf,ftell(fp));
    rewind(fp);
    
    printf("Apres rembobinage, la position est revenue a %Ld\n",ftell(fp));
    
    fgets(buf,sizeof(buf),fp);
    printf("lecture commence au debut :  %s, position = %ld\n", buf,ftell(fp));
    fclose(fp);
    
    
   return 0;         
}

