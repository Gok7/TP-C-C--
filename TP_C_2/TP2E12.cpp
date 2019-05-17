/*******************************************************************************
* NOM DU PROGRAMME : TP2E12.CPP
* SAUVEGARDE : Z:\TP_C\TP_C_2\
* AUTEUR : GENAUDET
* DESCRIPTION : Formats
* DATE : 20 septembre 2012
*******************************************************************************/

#include <conio.h>
#include <stdio.h>
void main()
{
        int nombre=12;
        printf ("caractere                   :%c\n",nombre);
        printf ("entier                      :%d\n",nombre);
        printf ("entier non signe            :%u\n",nombre);
        printf ("aff. en hexa                :%x\n",nombre);
        printf ("float                       :%f\n",(float)nombre);
        printf ("pointeur                    :%p\n",nombre);
        printf ("long                        :%ld\n",nombre);
        printf ("long non signe              :%lu\n\n",nombre);

        int entier=20;
        printf ("caractere                   :%c\n",entier);
        printf ("entier                      :%d\n",entier);
        printf ("entier non signe            :%u\n",entier);
        printf ("aff. en hexa                :%x\n",entier);
        printf ("float                       :%f\n",(float)entier);
        printf ("pointeur                    :%p\n",entier);
        printf ("long                        :%ld\n",entier);
        printf ("long non signe              :%lu\n\n",entier);

        float reel=14.2;
        printf ("caractere                   :%c\n",reel);
        printf ("entier                      :%d\n",reel);
        printf ("entier non signe            :%u\n",reel);
        printf ("aff. en hexa                :%x\n",reel);
        printf ("float                       :%f\n",(float)reel);
        printf ("pointeur                    :%p\n",reel);
        printf ("long                        :%ld\n",reel);
        printf ("long non signe              :%lu\n\n",reel);

        char caractere='A';
        printf ("caractere                   :%c\n",caractere);
        printf ("entier                      :%d\n",caractere);
        printf ("entier non signe            :%u\n",caractere);
        printf ("aff. en hexa                :%x\n",caractere);
        printf ("float                       :%f\n",(float)caractere);
        printf ("pointeur                    :%p\n",caractere);
        printf ("long                        :%ld\n",caractere);
        printf ("long non signe              :%lu\n\n",caractere);

        getch();
} 
