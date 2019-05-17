#include <stdio.h>
#include <conio.h>

void main(){

        int valeur;
        int *pt;
        char *pt_char;
        valeur=3;
        pt=&valeur;
        pt_char=(char *)pt;
        printf("%d\n", *pt);
        printf("%p\n", pt);
        pt++;
        printf("%p\n",pt);
        printf("%p\n",pt_char);

        printf("%x\n",*pt_char);
        pt_char++;
        printf("%p\n",pt_char);
        printf("%x\n",*pt_char);
        pt_char++;
        printf("%p\n",pt_char);
        printf("%x\n",*pt_char);
        pt_char++;
        printf("%p\n",pt_char);
        printf("%x\n",*pt_char);
getch();
}
 
