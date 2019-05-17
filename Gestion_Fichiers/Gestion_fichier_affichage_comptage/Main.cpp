#include "header.h"
#define BUFSIZE 100

int main(int argc, char** argv) {
    FILE *fp1;
    char *buffer,Car;
    long lSize,Compteur;
    size_t result;
    
    
    fp1 = fopen("C:\\Users\\Zombie\\Desktop\\text1.txt", "r");
    if (fp1 == NULL) perror("Error opening file");
    else {
        Car=' ';
        Compteur=0;
        while (Car!= EOF) {
            Car = fgetc(fp1);
            putc(Car,stdout);
            Compteur++;
        }
        printf("%d caractere\n",Compteur);
    }
    fclose(fp1);
    return 0;
}
