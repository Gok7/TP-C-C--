#include "header.h"
#define BUFSIZE 100

int main(int argc, char** argv) {
    FILE *fp1, *fp2;
    char *buffer, Car, Car_temp, file1[80], file2[100],Extension[6];
    long lSize, Compteur;
    int Size_filename,Size_extension;
    size_t result;

    strcpy(file1,"C:\\Users\\Zombie\\Desktop\\text4.txt");
    fp1 = fopen(file1, "r");
    if (fp1 == NULL) perror("Error opening file");
    else {
        Car = ' ';
        Compteur = 0;
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
        }/* the whole file is now loaded in the memory buffer. */

        while (Car != lSize) {
            Car_temp = buffer[Compteur];
            Car = tolower(Car_temp);
            buffer[Compteur] = Car;
            Compteur++;
        }
        printf("%s\n", buffer);
        /*
        Size_filename=strlen(file1);
        for(Compteur=Size_filename;Car!='.';Compteur--){
        }
        Size_extension=Size_filename-Compteur;
        strncpy(file2,file1,Size_extension);*/
        strcpy(file2,file1);
        strcat(file2, " - Copy");
        fp2 = fopen(file2, "w");
        if (fp2 == NULL) {
            printf("EXIT FAILURE MODAFAKA");
            exit(EXIT_FAILURE);
        }

        if ((fwrite(buffer, sizeof (*buffer), result, fp2)) != result) {
            printf("Erreur copie");
        } else printf("Copie reussie\n");
        fclose(fp1);
        fclose(fp2);
    }

    return 0;
}
