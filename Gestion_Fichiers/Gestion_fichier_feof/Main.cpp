#include "header.h"
#define BUFSIZE 100

int main(int argc, char** argv) {
    FILE *fp;
    int k;
    char buf[BUFSIZE];
    char filename[60];

    //puts("Indiquez le nom du fichier a afficher : ");
    strcpy(filename,"C:\\Users\\Zombie\\Desktop\\text.txt");

    fp = fopen(filename, "r");
    if (fp == NULL) {
        fprintf(stderr, "Erreur ouverture\n");
        exit(EXIT_FAILURE);
    }
    do {
        fgets(buf, sizeof (buf), fp);
        if (!(k =feof(fp)))
            printf("%s", buf);
    }while(k);//feof >0 si la fin n'est pas atteinte
    fclose(fp);
    exit(EXIT_SUCCESS);
}
