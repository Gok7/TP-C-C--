#include <stdio.h>
#include <conio.h>

void main(){
        unsigned char c;
        do{
        c=getch();
        if(c==0){
                c=getch();
                printf("Code special 0_%d\n",c);
                }
        else printf("Code normal %d\n",c);
        }while(c!=0x1B); //ou while (c!=0x1B); pour quitter avec ESCAPE ou echap
}
