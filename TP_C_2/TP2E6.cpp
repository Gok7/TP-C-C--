     /*******************************************************************************
* NOM DU PROGRAMME : TP2E6.CPP
* SAUVEGARDE : Z:\TP_C\TP_C_2\
* AUTEUR : GENAUDET
* DESCRIPTION : Operations sur les bits
* DATE : 20 septembre 2012
*******************************************************************************/

#include <conio.h>
#include <stdio.h>

void main()
{
        int n;
        int p;
        n=7;
        p=4;

        printf ("%d %d %d\n",n&p,n|p,n^p);
        printf ("%d %d %d\n",n>>2,n>>4,n<<2);
        printf ("%d %d %d\n",~n,~n>>1,~n<<2);

        getch();
}
