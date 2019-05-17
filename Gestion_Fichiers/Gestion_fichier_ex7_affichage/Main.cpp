#include "header.h"

int main(int argc, char** argv) {


    strcpy(filename1, "C:\\Users\\Zombie\\Desktop\\text1.txt");
    fp1 = fopen(filename1, "rb");
    if (fp1 == NULL) {
        printf("Erreur ouverture\n");
    } else {
        fseek(fp1, 0, SEEK_END);
        lSize = ftell(fp1);
        rewind(fp1);
        while(!feof(fp1)){
        fread(buffer, sizeof (*buffer), BUFSIZE, fp1);
        printf("%s\n", buffer);
        for(i=0;i<BUFSIZE;i++){
          printf("%x", buffer[i]);  
        }
        printf("-->128 octets\n");
        
        };
    }
    fclose(fp1);

    return 0;
}

