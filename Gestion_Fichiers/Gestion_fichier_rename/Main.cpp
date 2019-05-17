#include "header.h"
#define BUFSIZE 100

int main(int argc, char** argv) {
    FILE *fp;

    char oldname[80], newname[80];

    puts("Indiquez le nom du fichier a renommer : ");
    fflush(stdin);
    fgets(oldname, sizeof (oldname), stdin);
    strtok(oldname, "\n"); //delete the end of line character
    puts("Indiquez le nouveau nom : ");
    fflush(stdin);
    fgets(newname, sizeof (newname), stdin);
    strtok(newname, "\n"); //delete the end of line character

    if (rename(oldname, newname) == 0) {
        printf("Fichier renomme \n");
    } else
        fprintf(stderr, "Erreur \n");

return 0;
}
