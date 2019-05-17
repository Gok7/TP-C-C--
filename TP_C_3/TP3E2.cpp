#include <stdio.h>
#include <conio.h>
#include <windows.h>
void main(){
        char y,c,d,e,f,g;
        while(1)
        {
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",y,c,d,e,f,g,f,y,c,d,e);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",y,c,d,e,f,y,c,d,e);
        printf("\r");
        y+=34;
        c+=23;
        d+=53;
        e+=352;
        f+=34;
        g+=43;
        Sleep(10);
        }
        getch();
}

