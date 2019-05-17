#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(){

        struct personne{
                char nom[25];
                int age;
        };
        struct personne a;
        struct personne *p_a;
        p_a=&a;
        printf("adresse de la variable type structure : %p\n",&a);
        printf("adresse de la variable type structure : %p\n",p_a);
        printf("adresse de la variable type structure : %p\n",a.nom);
        printf("adresse de la variable type structure : %p\n",&a.nom[0]);
        printf("Taille en octet = %d",sizeof(a));


getch();
} 
 
