/*******************************************************************************
* NOM DU PROGRAMME : EXERCICE1.CPP
* SAUVEGARDE : Z:\TP_C\TP_C_2\
* AUTEUR : GENAUDET
* DESCRIPTION : Affichage d'un   caract�re en d�cimal/h�xa/car
* DATE : 13 septembre 2012
*******************************************************************************/

#include <conio.h>
#include <stdio.h>
void main()
{
        char caractere;                         // D�claration de variables

        printf ("Saisir un caractere :");
        scanf ("%c",&caractere);
        printf("Caractere en decimal : %d\n", caractere);
        printf("Caractere en hexadecimal : %x\n", caractere);
        printf("Caractere : %c\n", caractere);
        getch();
}
