#include <conio.h>
#include <stdio.h>
#include <string.h>

void main(){
        char lol[10]="lol";
        printf("%s\n",lol);
        printf("lenght : %d\n",strlen(lol));
        printf("hello how are you ? \n");
        lol[0]='5';
        cgets(lol);    
        puts(lol);
getch();
}
