#include <stdio.h>
#include <conio.h>

void main(){
        int tableau[5][5];
        int i=0,j=0;
        int *pt;
        for(i=0;i<5;i++){
                printf("\n");
                for(j=0;j<5;j++){
                        tableau[i][j]=j  ;
                        printf("%d ",tableau[i][j]);
                        }
                }
        for(i=0;i<6;i++){
                printf("%x ",*pt++);
                printf("\n\n");
                }
getch();
}
 
