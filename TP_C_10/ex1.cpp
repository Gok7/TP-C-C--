#include <stdio.h>
#include <conio.h>
#include <alloc.h>
#define NPMAX 20

typedef struct{
        int num;
        int x;
        int y;
}S_POINT;

void Affiche(S_POINT padr[],int nb_element){
        int i=0;
        for(i=0;i<nb_element;i++){
                printf("%d",padr[i].num);
                printf("%d",padr[i].x);
                printf("%d",padr[i].y);
        }
}

int main(int argc, char** argv) {
        S_POINT *adr[NPMAX];
        int num,x,y;
        int fin=0;
        int rang=0;
        do{
                printf("Saisir 3 nombres entiers (0 pour terminer) : ");
                fflush(stdin);qrt-
                scanf("%d",&num);
                if(num==0)fin=1;
                else{
                        scanf("%d",&x);
                        scanf("%d",&y);
                        adr[rang]=(S_POINT*)malloc(sizeof(S_POINT));
                        adr[rang]->num=num;
                        adr[rang]->x=x;
                        adr[rang]->y=y;
                        rang++;
                }
        }while(fin!=1);
        getch();
}

 
