#include <stdio.h>
#include <conio.h>
#define valeurs 5
void main(){
        int tableau[5],i=0,j=0,tempo=0,fin=0;
        for(i=valeurs-1;i>=0;i--){ 
                        tableau[i]=i;
                        printf("%d",tableau[i]);
        }
        printf("\n");   /*
        for(i=0;i<valeurs-1;i++){
                for(j=i+1;j<valeurs;j++){
                        if(tableau[i]<tableau[j]){
                                tempo=tableau[i];
                                tableau[i]=tableau[j];
                                tableau[j]=tempo;
                        }
                }
        }  */

        while(fin!=0){
                fin=0;
                for(i=0;i<valeurs-1;i++){
                        if(tableau[i]>tableau[i+1]){
                                tempo=tableau[i];
                                tableau[i]=tableau[i+1];
                                tableau[i+1]=tempo;
                                fin=1;
                        }
                }
        }
        for(i=0;i<valeurs;i++){
                        printf("%d",tableau[i]);
        }

getch();
}
 
