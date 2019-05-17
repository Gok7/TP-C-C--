#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#pragma hdrstop
#pragma argused

typedef struct{
        word bftype;
        dword bfsize;
        word bfreserved1;
        word bfreserved2;
        dword bfoffbits;
}FILEHEADER;

typedef struct{
        dword bisize;
        dword biwidth;
        dword biheight;
        word biplanes;
        word bibitcount;
        dword bitcompression;
        dword bisizeimage;
        dword bixspelspermeter;
        dword biypelspermeter;
        dword biclrused;
        dword biclrimportant;
}INFOHEADER;

typedef struct{
        FILEHEADER Fileheader;
        INFOHEADER Infoheader;
}Entete_BMP;
        
void lecture_fichier(){

        char nomfich[]="C:\\Users\\john\\Desktop\\Progr\\TPC\\TP_C_12\\Untitled.bmp";
        int pb_fichier,taille;
        char car;
        FILE *desc;
        do{
                desc=fopen(nomfich,"rb");
                if(desc==NULL){
                        printf("Probleme d'ouverture du fichier\n");
                        pb_fichier=1;
                        getch();
                }
                else pb_fichier=0;
        }while(pb_fichier==1);

                        fread(&car,sizeof(char),1,desc);
                        if(car=='B'){
                                fread(&car,sizeof(char),1,desc);
                                if(car=='M') printf("BM");
                        }
                
        printf("\nLecture du fichier termine. ");
        fclose(desc);
}

int main(int argc, char** argv) {
      lecture_fichier();
      getch();
}



 

