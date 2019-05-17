#include <stdio.h>
#include <conio.h>

int mat1[2][3];
int mat2[3][3];
int mat3[2][3];

void initialisation(){
        int ligne=0,colonne=0;
        for(ligne=0;ligne<2;ligne++){ //mat 1
                for(colonne=0;colonne<3;colonne++){

                        mat1[ligne][colonne]=0;
                }
        }
        for(ligne=0;ligne<3;ligne++){ //mat2
                for(colonne=0;colonne<3;colonne++){
                        mat2[ligne][colonne]=0;
                }
        }
        for(ligne=0;ligne<2;ligne++){ //mat3
                for(colonne=0;colonne<3;colonne++){
                        mat3[ligne][colonne]=0;
                }
        }
}
               /*
void saisi_valeur(){
        int ligne=0,colonne=0;
        for(ligne=0,colonne=0;ligne<2;ligne++){
                printf("Matrice 1 ligne %d colonne %d : ",ligne+1,colonne+1);
                scanf("%d",mat1[ligne][colonne]);
                }
                      */
void affichage(){
        int ligne=0,colonne=0;
        printf("Matrice 1\n");
        for(ligne=0;ligne<2;ligne++){
                for(colonne=0;colonne<3;colonne++){
                        printf("ligne %d colonne %d = %d\n",ligne+1,colonne+1,(mat1[ligne][colonne]));
                }
        }
        printf("Matrice 2\n");
        for(ligne=0;ligne<3;ligne++){ //mat2
                for(colonne=0;colonne<3;colonne++){
                        printf("ligne %d colonne %d = %d\n",ligne+1,colonne+1,(mat2[ligne][colonne]));
                }
        }
        printf("Matrice 3\n");
        for(ligne=0;ligne<2;ligne++){ //mat3
                for(colonne=0;colonne<3;colonne++){
                        printf("ligne %d colonne %d = %d\n",ligne+1,colonne+1,mat3[ligne][colonne]);
                }
        }

}


void main(){

        initialisation();
       //saisi_valeur();
       affichage();

getch();
}





