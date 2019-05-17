/*******************************************************************************
* NOM DU PROGRAMME : TP2E11.CPP
* SAUVEGARDE : Z:\TP_C\TP_C_2\
* AUTEUR : GENAUDET
* DESCRIPTION : ASCII
* DATE : 20 septembre 2012
*******************************************************************************/

#include <conio.h>
#include <stdio.h>
void main()
{
        char c='\xFE';
        char d='\x41';
        unsigned char e='\xFE';
        printf ("caractere                   :%c\n",c);
        printf ("entier                      :%d\n",c);
        printf ("entier non signe            :%u\n",c);
        printf ("aff. en hexa                :%x\n\n",c);

        printf ("caractere                   :%c\n",d);
        printf ("entier                      :%d\n",d);
        printf ("entier non signe            :%u\n",d);
        printf ("aff. en hexa                :%x\n\n",d);

        printf ("caractere                   :%c\n",e);
        printf ("entier                      :%d\n",e);
        printf ("entier non signe            :%u\n",e);
        printf ("aff. en hexa                :%x\n\n",e);

        getch();
}



 
