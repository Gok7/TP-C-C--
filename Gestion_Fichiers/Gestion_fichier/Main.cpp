
#include "header.h"
#include <stdio.h>
#include <stdlib.h>

#define SIZE 40

int main(int argc, char** argv) {
    FILE *fp;
    int count, array1[SIZE], array2[SIZE];

    for (count = 0; count < SIZE; count++) {
        array1[count] = 2 * count;
    }
    fp = fopen("C:\\Users\\Zombie\\Desktop\\text.txt", "wb");
    if (fp == NULL) {
        fprintf(stderr, "Erreur ouverture");
        exit(EXIT_FAILURE);
    }
    if (fwrite(array1, sizeof (*array1), SIZE, fp) != SIZE) {
        fprintf(stderr, "ERREUR ecriture");
        exit(EXIT_FAILURE);
    }
    fclose(fp);

    fp = fopen("C:\\Users\\Zombie\\Desktop\\text.txt", "rb");
    if (fp == NULL) {
        fprintf(stderr, "Erreur ouverture");
        exit(EXIT_FAILURE);
    }

    if (fread(array2, sizeof (*array2), SIZE, fp) != SIZE) {
        fprintf(stderr, "ERREUR lecture");
        exit(EXIT_FAILURE);
    }
    fclose(fp);
    
    for (count = 0; count < SIZE; count++) {
        printf("%d \t %d \n",array1[count],array2[count]);
        
    }
   return 0;         
}

