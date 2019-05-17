#include <conio.h>        //tri nom par ordre alphabetique
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(){
        char nom[32][20],L_tempo[32][20];
        int i=0;
        int fin = 1;
                for(i=0;i<32;i++){
                nom[i][0]='\0';
        }

        strcpy(&nom[0][0],"dupont");
        strcpy(&nom[3][0],"aaaaaa");
        strcpy(&nom[10][0],"rrrrr");
        strcpy(&nom[4][0],"bbbbb");
        strcpy(&nom[2][0],"sssss");
        while (fin != 0) {
                fin = 0;
                for (i=0;i<31;i++) {
                    if (strcmp(nom[i],nom[i+1])>0) { //si nom[i]>nom[i+1]
                       strcpy(&L_tempo[i][0],&nom[i][0]);
                       strcpy(nom[i],nom[i+1]);
                       strcpy(nom[i+1],L_tempo[i]);
                       fin = 1;
                        }
                }
        }
        for(i=0;i<32;i++){
                if(nom[i][0]!='\0'){
                        puts(nom[i]);
                }
        }
getch();
} 

