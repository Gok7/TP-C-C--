#include <stdio.h>
#include <conio.h>


int main(int argc, char** argv) {
        int i,j;            //init
        int matrice1[2][4];
        int matrice2[2][4];
        int resultat[2][4];
         int matrice3[2][4];
        for(i=0;i<2;i++){
                for(j=0;j<4;j++){
                        matrice1[i][j]=1;
                        matrice2[i][j]=1;
                }
        }
        for(i=0;i<2;i++){                                    //addition
                for(j=0;j<4;j++){
                        matrice3[i][j]=matrice1[i][j]+matrice2[i][j];
                }
        }

        for(i=0;i<2;i++){                     //affichage
                for(j=0;j<4;j++){
                        printf("ligne %d, colonne %d :",i+1,j+1);
                        printf("%d\n",matrice3[i][j]);
                }
        }
        
	getch();
}


