#include "header.h"

//Programme de copie de fichier. attention si la copie existe deja,
//elle sera ecrasé
//terminé le 25 février 2013


int main(int argc, char** argv) {



    //        puts("Indiquez le nom du fichier a copier : ");
    //        fflush(stdin);
    //        fgets(file1, sizeof (file1), stdin);
    //        strtok(file1, "\n"); //delete the end of line character
    strcpy(filename1, "C:\\Users\\Zombie\\Desktop\\text1.txt");
    fp1 = fopen(filename1, "rb");
    if (fp1 == NULL) {
        printf("Erreur ouverture\n");
    } else {
        // obtain file size:
        fseek(fp1, 0, SEEK_END);
        lSize = ftell(fp1);
        rewind(fp1);
        buffer = (char*) malloc(sizeof (char) *lSize);
        if (buffer == NULL) {
            fputs("Memory error", stderr);
            exit(2);
        }
        result = fread(buffer, 1, lSize, fp1);
        if (result != lSize) {
            fputs("Reading error", stderr);
            exit(3);
        }
        /* the whole file is now loaded in the memory buffer. */

        Extraire_extension();
        strncpy(filename2, filename1, i);
        strcat(filename2, " - Copy");
        strcat(filename2, extension);
        printf("%s\n", filename2);
        fp2 = fopen(filename2, "wb");
        if ((fwrite(buffer, sizeof (*buffer), result, fp2)) != result) {
            printf("Erreur copie");
        } else printf("Copie reussie\n");
        fclose(fp1);
        fclose(fp2);
    }
    
    return 0;
}

