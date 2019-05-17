/*******************************************************************************
* NOM DU PROGRAMME : TP2E10.CPP
* SAUVEGARDE : Z:\TP_C\TP_C_2\
* AUTEUR : GENAUDET
* DESCRIPTION : Division de 2 entiers
* DATE : 20 septembre 2012
*******************************************************************************/

#include <conio.h>
#include <stdio.h>
void main()
{
        int nb_a, nb_b;
        printf ("Taper 2 entiers :\n");
        scanf ("%d%d",&nb_a,&nb_b);
        printf ("%d/%d = %d Resultat entier\n",nb_a,nb_b,nb_a/nb_b);
        printf ("%d/%d = %f Resultat reel  \n",nb_a,nb_b,(float)nb_a/nb_b);

        getch();
}
