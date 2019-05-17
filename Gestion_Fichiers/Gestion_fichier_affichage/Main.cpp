#include "header.h"
#define BUFSIZE 100

int main(int argc, char** argv) {
    FILE *fp1;
    char file1[80], *buffer, string[BUFSIZ+];
    long lSize;
    size_t result;

    strcpy(file1, "C:\\Users\\Zombie\\Desktop\\text1.txt");
    fp1 = fopen(file1, "r");
    if (fp1 == NULL) perror("Error opening file");
    else {
        while (fgets(string, BUFSIZ, fp1) != NULL) {
            puts(string);
        }
    }

    /* the whole file is now loaded in the memory buffer. */
    fclose(fp1);

    return 0;
}
