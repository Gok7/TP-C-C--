#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(){
        char ch[50];
        int nombre,base;
        do{
                printf("donnez un nombre:");
                scanf("%d",&nombre);
                printf("donnez une base");
                scanf("%d",&base);
                itoa(nombre,ch,base);//nombres,chaînes,base
                printf("La chaine correspondante est %s\n",ch);
                printf("Sa longueur est :%d\n\n",strlen(ch));
        }while(nombre!=0);
getch();
} 
